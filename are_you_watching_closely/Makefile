all: lprintf.a

lprintf.a:
	gcc -g -Wall -Werror -Wextra -pedantic -c printf.c inttostr.c strcat.c functions1.c functions2.c
	ar -rc libprintf.a printf.o inttostr.o strcat.o functions1.o functions2.o
	rm printf.o inttostr.o strcat.o functions1.o functions2.o

clean:
	rm lprintf.a

re: clean all