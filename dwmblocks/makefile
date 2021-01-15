.POSIX:

PREFIX = /usr/local
CC = gcc
LDFLAGS = -lX11

all: dwmblocks

dwmblocks: dwmblocks.c config.h
	$(CC) $(LDFLAGS) -o $@ $<

install: dwmblocks
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	install -m 0755 dwmblocks $(DESTDIR)$(PREFIX)/bin/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks

clean:
	rm -f *.o *.gch dwmblocks
