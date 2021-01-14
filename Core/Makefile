OBJ =  core.o
OBJ_RM = $(wildcard *.o)
all : $(OBJ)
	ld -r -o built-in.o $(OBJ)
core.o :
	clang -c core.cpp -o core.o
clean :
	rm -f $(OBJ_RM)
