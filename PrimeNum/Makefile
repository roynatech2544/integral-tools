OBJ =  main.o chk.o fac.o gen.o
OBJ_RM = $(wildcard *.o)
all : $(OBJ)
	ld -r -o built-in.o $(OBJ)
main.o : main.cpp include/global_vars.h
	clang -c main.cpp -o main.o
chk.o : PrimeNumberChecker.cpp include/chk.h
	clang -c PrimeNumberChecker.cpp -o chk.o
fac.o : PrimeNumberFactorizer.cpp include/factorization.h
	clang -c -Wno-return-type PrimeNumberFactorizer.cpp -o fac.o
gen.o : PrimeNumberGenerator.cpp include/gen.h
	clang -c PrimeNumberGenerator.cpp -o gen.o
clean :
	rm -f $(OBJ_RM)
