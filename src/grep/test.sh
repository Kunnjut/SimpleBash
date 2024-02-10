#!/bin/bash


# grep
grep=$(grep snow grep.txt)

# grep
s21_grep=$(./s21_grep snow grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep без флагов совпадает"
else
  echo "Вывод оригинального grep и s21_grep без флагов не совпадает"
fi

# grep i
grep=$(grep -i sNoW grep.txt)

# grep i
s21_grep=$(./s21_grep -i sNoW grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом i совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом i не совпадает"
fi

# grep e
grep=$(grep -e sNoW -e it -e al grep.txt)

# grep e
s21_grep=$(./s21_grep -e sNoW -e it -e al grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом e совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом e не совпадает"
fi

# grep v
grep=$(grep -v snow grep.txt)

# grep v
s21_grep=$(./s21_grep -v snow grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом v совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом v не совпадает"
fi

# grep c
grep=$(grep -c snow *.txt)

# grep c
s21_grep=$(./s21_grep -c snow *.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом c совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом c не совпадает"
fi

# grep l
grep=$(grep -l snow *.txt)

# grep l
s21_grep=$(./s21_grep -l snow *.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом l совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом l не совпадает"
fi

# grep n
grep=$(grep -n snow *.txt)

# grep n
s21_grep=$(./s21_grep -n snow *.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом n совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом n не совпадает"
fi

# grep h
grep=$(grep -h snow *.txt)

# grep h
s21_grep=$(./s21_grep -h snow *.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом h совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом h не совпадает"
fi

# grep s
grep=$(grep -s snow grep.txt)

# grep s
s21_grep=$(./s21_grep -s snow grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом s совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом s не совпадает"
fi

# grep f
grep=$(grep -f pattern.txt grep.txt)

# grep f
s21_grep=$(./s21_grep -f pattern.txt grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом f совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом f не совпадает"
fi

# grep o
grep=$(grep -o snow grep.txt)

# grep o
s21_grep=$(./s21_grep -o snow grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом o совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом o не совпадает"
fi

# grep vni
grep=$(grep -vni snow *.txt)

# grep vni
s21_grep=$(./s21_grep -vni snow *.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом vni совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом vni не совпадает"
fi

# grep voi
grep=$(grep -voi snow grep.txt)

# grep voni
s21_grep=$(./s21_grep -voi snow grep.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом voi совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом voi не совпадает"
fi

# grep onl
grep=$(grep -onl snow *.txt)

# grep onl
s21_grep=$(./s21_grep -onl snow *.txt)

# Сравниваем вывод
if [ "$grep" = "$s21_grep" ]; then
  echo "Вывод оригинального grep и s21_grep с флагом onl совпадает"
else
  echo "Вывод оригинального grep и s21_grep с флагом onl не совпадает"
fi