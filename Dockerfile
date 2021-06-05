FROM opencvcourses/opencv-docker

RUN mkdir /work

WORKDIR /work

COPY . /work/

RUN mkdir build && \
	cmake -S . -B build && \
	cmake --build build

WORKDIR /work/build

CMD ./main