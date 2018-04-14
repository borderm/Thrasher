thrashc:
	gcc -std=c99 -o bin/thrash src/thrash.c
thrashcpp:
	g++ -std=c++14 -o bin/thrash src/thrash.cpp
clean:
	rm bin/thrash