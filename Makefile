
#CXXFLAGS = -std=c++98 -pedantic -Wall -Werror
#INC_DIR = "./"

#CXXFLAGS = -std=c++11 -pedantic -Wall -Werror -I ./
CXXFLAGS = -std=c++14 -pedantic -Wall -Werror -I ./


default: build
clean:
	rm -f hello
	rm -f facade
	rm -f duck-main
	rm -f *.o

build: hello duck-main facade

build-hello: hello

# duck-main: duck-main.o duck.o
# above line use cc instead of g++

#tool: tool.o support.o
#	g++ $(LDFLAGS) -o tool tool.o support.o $(LDLIBS) 
duck-main: duck-main.o Duck.o Mallard.o Quack.o Squeak.o
	g++ -o duck-main duck-main.o Duck.o Mallard.o Quack.o Squeak.o

Duck.o: Duck.cpp Duck.h
Mallard.o: Mallard.cpp Mallard.h
Quack.o: Quack.cpp Quack.h
Squeak.o: Squeak.cpp Squeak.h

build-facade: facade

run-hello: build-hello
	./hello

run-facade: build-facade
	./facade

