CXXFLAGS=-std=c++14

main: main.o labstructs.o
		g++ -o main main.o labstructs.o

tests: tests.o labstructs.o
		g++ -o tests tests.o labstructs.o

tests.o: tests.cpp labstructs.h

main.o: main.cpp labstructs.h
		g++ $(CXXFLAGS) -c main.cpp

labstructs.o: labstructs.cpp labstructs.h
		g++ $(CXXFLAGS) -c labstructs.cpp
clean:
		rm -f main.o labstructs.o tests.o main tests