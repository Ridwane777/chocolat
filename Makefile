##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##

UNIT = --coverage -lcriterion -L./ -lm

TEST = C_files/my_strlen.c	\
	C_files/my_str_to_word_array.c	\
	C_files/my_strncpy.c	\
	C_files/spe_str_to_word_array.c	\
	C_files/usage.c	\
	C_files/additionnal_functions.c

all:	105demography

105demography:	C_files/*.c
	gcc -o 105demography C_files/*.c -lm -g3

clean:
	rm -f *.o

fclean: clean

re:	fclean all

unit_tests: fclean all
	gcc -o unit_test $(TEST)  tests/test_105demography.c $(UNIT)

tests_run: unit_tests
		./unit_test
