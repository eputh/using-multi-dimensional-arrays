CXX = clang++
CFLAGS = -g -Wall -std=c++11
OBJ = main.o tests.o magic-square.o problem-two.o problem-three.o
EXE = problems

all: $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(EXE)

.cpp.o:
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(EXE)
