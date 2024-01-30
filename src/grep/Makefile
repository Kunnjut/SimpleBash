FLAG = -std=c11 -Wall -Werror -Wextra
FILE = grep.txt
FILEALL = *.txt
CHECK = 2>&1 valgrind --tool=memcheck --leak-check=yes

all: clean s21_grep

s21_grep:
	gcc $(FLAG) grep.c -o s21_grep

tests_without:
	./s21_grep Snow $(FILE)
	#==============================================
	grep Snow $(FILE)

tests_i:
	./s21_grep -i Snow $(FILE)
	#==============================================
	grep -i Snow $(FILE)

tests_e:
	./s21_grep -e Snow -e It $(FILE)
	#==============================================
	grep -e Snow -e It $(FILE)

tests_v:
	./s21_grep -v Snow $(FILE)
	#==============================================
	grep -v Snow $(FILE)

tests_c:
	./s21_grep -c Snow $(FILE)
	#==============================================
	grep -c Snow $(FILE)

tests_l:
	./s21_grep -l Snow $(FILEALL)
	#==============================================
	grep -l Snow $(FILEALL)

tests_n:
	./s21_grep -n Snow $(FILE)
	#==============================================
	grep -n Snow $(FILE)

tests_h:
	./s21_grep -h Snow $(FILE)
	#==============================================
	grep -h Snow $(FILE)

tests_s:
	./s21_grep -s Snow grep.txt
	#==============================================
	grep -s Snow grep.txt

tests_f:
	./s21_grep -f pattern.txt grep.txt
	#==============================================
	grep -f pattern.txt grep.txt

tests_o:
	./s21_grep -o Snow grep.txt
	#==============================================
	grep -o Snow grep.txt

tests_combine1:
	./s21_grep -vni Snow grep.txt
	#==============================================
	grep -vni Snow grep.txt

tests_combine2:
	./s21_grep -ni Snow grep.txt
	#==============================================
	grep -ni Snow grep.txt


clean:
	rm -rf s21_grep