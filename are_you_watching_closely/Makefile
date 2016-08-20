all: libprintf.a

libprintf.a:
	gcc -g -Wall -Werror -Wextra -pedantic -c printf.c %_func.c c_func.c d_func.c i_func.c o_func.c p_func.c print_char.c print_number.c printf_headers.h s_func.c u_func.c x_func.c
	ar -rc libprintf.a printf.o %_func.o c_func.o d_func.o i_func.o o_func.o p_func.o print_char.o print_number.o s_func.o u_func.o x_func.o
	rm printf.o %_func.o c_func.o d_func.o i_func.o o_func.o p_func.o print_char.o print_number.o s_func.o u_func.o x_func.o

clean:
	rm libprintf.a

re: clean all