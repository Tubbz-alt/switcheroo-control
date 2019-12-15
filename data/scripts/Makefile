all: generate-hwdb

generate-hwdb: generate-hwdb.c
	gcc -Wall -o $@ $< `pkg-config --libs --cflags glib-2.0`
