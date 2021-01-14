OBJ = main.o err.o
OBJ_RM = $(wildcard *.o)
all : $(OBJ)
	ld -r -o built-in.o $(OBJ)
main.o : main.cpp include/vars.h
	clang++ -c main.cpp -o main.o
err.o : print_err.cpp
	clang++ -c print_err.cpp -o err.o
clean : 
	rm -f $(OBJ_RM)
