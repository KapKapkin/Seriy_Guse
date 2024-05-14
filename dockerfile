FROM ubuntu:latest

RUN apt-get update 
RUN apt-get -y install qtbase5-dev
RUN apt-get -y install build-essential

COPY . /code

RUN qmake /code/exo/echoServer.pro
RUN make

CMD ["./echoServer"]