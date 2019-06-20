FROM centos:7.2.1511

RUN yum -y install  gcc \
                    make

RUN mkdir /opt/gcmorse
COPY . /opt/gcmorse
WORKDIR /opt/gcmorse
RUN make all
RUN make install
