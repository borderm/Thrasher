all: thrash
thrash:
	gcc -std=c99 -o bin/thrash src/thrash.c
clean:
	rm bin/thrash