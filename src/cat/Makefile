FLAG = -std=c11 -Wall -Werror -Wextra
FILE = test.txt
FILEA = testASCII.txt
FILETab = top.txt
CHECK = 2>&1 valgrind --tool=memcheck --leak-check=yes

all: clean s21_cat

s21_cat:
	gcc $(FLAG) s21_cat.c -o s21_cat

tests_without:
	./s21_cat $(FILE)
	#==============================================
	cat $(FILE)
tests_n:
	./s21_cat -n $(FILE)
	#==============================================
	cat -n $(FILE)
tests_b:
	./s21_cat -b $(FILE)
	#==============================================
	cat -b $(FILE)
tests_s:
	./s21_cat -s $(FILE)
	#==============================================
	cat -s $(FILE)
tests_v:
	./s21_cat -v $(FILEA)
	#==============================================
	cat -v $(FILEA)
tests_e:
	./s21_cat -e $(FILE)
	#==============================================
	cat -e $(FILE)
tests_t:
	./s21_cat -t $(FILETab)
	#==============================================
	cat -t $(FILETab)

clean:
	rm -rf s21_cat