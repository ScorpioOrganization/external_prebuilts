FROM ros:humble-ros-base-jammy AS build

WORKDIR /root
RUN git clone https://github.com/isl-org/Open3D.git --depth 1 --branch v0.18.0
WORKDIR /root/Open3D/build

# Install dependencies for Open3D
RUN apt-get update && apt-get install -y \
  libx11-dev \
  libxext-dev \
  libxrandr-dev \
  libxinerama-dev \
  libxcursor-dev \
  libxi-dev \
  libc++-dev \
  libc++abi-dev \
  libgl1-mesa-glx \
  libgl1-mesa-dev \
  libglu1-mesa-dev \
  clang-14 \
  gfortran \
  python3 \
  libxxf86vm-dev

RUN ln -s /usr/bin/python3 /usr/bin/python

# Build Open3D
RUN cmake .. -DCMAKE_BUILD_TYPE=Release -DBUILD_PYTHON_MODULE=OFF -DBUILD_EXAMPLES=OFF -DBUILD_WEBRTC=OFF
RUN cmake --build . -- --jobs $(nproc) || sed -i '41d' /root/Open3D/build/filament/src/ext_filament/libs/image/src/ImageSampler.cpp
RUN cmake --build . -- --jobs $(nproc)

FROM scratch

COPY --from=build /root/Open3D /root/Open3D
