OBJ =  ComC.o ComP.o main.o
OBJ_RM = $(wildcard *.o)
all : $(OBJ)
	ld -r -o built-in.o $(OBJ)
main.o :
	clang -c main.cpp -o main.o
ComC.o :
	clang -c ComC.cpp -o ComC.o
ComP.o :
	clang -c ComP.cpp -o ComP.o
clean :
	rm -f $(OBJ_RM)
