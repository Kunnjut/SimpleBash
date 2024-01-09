SHELL := /bin/bash
FLAG = -Wall -Werror -Wextra
FILE = test.txt
CHECK = 2>&1 valgrind --tool=memcheck --leak-check=yes

all: clean s21_cat tests

s21_cat:
	gcc $(FLAG) cat.c -o s21_cat

tests:
	#-diff <(./s21_cat $(FILE)) <(cat $(FILE))
	-diff <(./s21_cat -n $(FILE)) <(cat -n $(FILE))
	#-diff <(./s21_cat -b $(FILE)) <(cat -b $(FILE))
	#-diff <(./s21_cat -s $(FILE)) <(cat -s $(FILE))
	#-diff <(./s21_cat -v $(FILE)) <(cat -v $(FILE))
	#-diff <(./s21_cat -e $(FILE)) <(cat -e $(FILE))
	#-diff <(./s21_cat -t $(FILE)) <(cat -t $(FILE))
	#-diff <(./s21_cat -E $(FILE)) <(cat -E $(FILE))
	#-diff <(./s21_cat -T $(FILE)) <(cat -T $(FILE))
	#-diff <(./s21_cat --number $(FILE)) <(cat --number $(FILE))
	#-diff <(./s21_cat --number-nonblank $(FILE)) <(cat --number-nonblank $(FILE))
	#-diff <(./s21_cat --squeeze-blank $(FILE)) <(cat --squeeze-blank $(FILE))

clean:
	rm -rf s21_cat