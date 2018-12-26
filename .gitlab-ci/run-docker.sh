#!/bin/bash

set -e

TAG="registry.gitlab.gnome.org/gnome/gobject-introspection/3.30:v2"

sudo docker build --build-arg HOST_USER_ID="$UID" --tag "${TAG}" \
    --file "Dockerfile" .
sudo docker run --rm \
    --volume "$(pwd)/..:/home/user/app" --workdir "/home/user/app" \
    --tty --interactive "${TAG}" bash
