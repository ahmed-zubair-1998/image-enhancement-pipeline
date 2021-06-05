#!/bin/sh

docker build -t nodebb .
docker run --rm -v ${PWD}/results:/work/results nodebb


# In case of imshow run these instead of above commands

# xhost +
# docker build -t nodebb .
# docker run --rm -e="DISPLAY" -e="QT_X11_NO_MITSHM=1" -v="/tmp/.X11-unix:/tmp/.X11-unix:rw" -v ${PWD}/results:/work/results  nodebb


# To stop running container if needed

# docker stop $(docker ps -q --filter ancestor=nodebb )
