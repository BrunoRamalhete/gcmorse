CC = gcc
CFLAGS = -Wall

all: clean FORCE src/gcmorse.c src/gcmorse.h src/debug.h
	$(CC) $(CFLAGS) -o bin/gcmorse src/gcmorse.c

install:
	-mkdir -p $(DESTDIR)/usr
	-mkdir -p $(DESTDIR)/usr/bin
	cp -R bin/gcmorse $(DESTDIR)/usr/bin

uninstall:
	-rm -rf $(DESTDIR)/usr/bin/gcmorse

FORCE:
	-mkdir bin

clean:
	-rm -rf bin
