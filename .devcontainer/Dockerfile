FROM mcr.microsoft.com/devcontainers/base:ubuntu-24.04

RUN apt-get update \
 && apt-get install -y --no-install-recommends \
    software-properties-common \
    ca-certificates \
    gnupg \
    git \
    cmake \
    ninja-build \
    gcc-14 \
    g++-14 \
 && update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-14 100 \
 && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-14 100 \
 && rm -rf /var/lib/apt/lists/*
