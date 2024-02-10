#!/bin/bash


# cat
cat=$(cat test.txt)

# s21_cat
our_cat=$(./s21_cat test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat без флагов совпадает"
else
  echo "Вывод оригинального cat и s21_cat без флагов не совпадает"
fi

# -n cat
cat=$(cat -n test.txt)

# -n s21_cat
our_cat=$(./s21_cat -n test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом -n совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом -n не совпадает"
fi

# -b cat
cat=$(cat -b test.txt)

# -b s21_cat
our_cat=$(./s21_cat -b test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом -b совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом -b не совпадает"
fi

# -s cat
cat=$(cat -s test.txt)

# -s s21_cat
our_cat=$(./s21_cat -s test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом -s совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом -s не совпадает"
fi

# -v cat
cat=$(cat -v test.txt)

# -v s21_cat
our_cat=$(./s21_cat -v test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом -v совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом -v не совпадает"
fi

# -e cat
cat=$(cat -e test.txt)

# -e s21_cat
our_cat=$(./s21_cat -e test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом -e совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом -e не совпадает"
fi

# -t cat
cat=$(cat -t test.txt)

# -t s21_cat
our_cat=$(./s21_cat -t test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом -t совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом -t не совпадает"
fi

# --number-nonblank cat
cat=$(cat -b test.txt)

# --number-nonblank s21_cat
our_cat=$(./s21_cat --number-nonblank test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом --number-nonblank совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом --number-nonblank не совпадает"
fi

# --squeeze-blank cat
cat=$(cat -s test.txt)

# --squeeze-blank s21_cat
our_cat=$(./s21_cat --squeeze-blank test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом --squeeze-blank совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом --squeeze-blank не совпадает"
fi

# --number cat
cat=$(cat -n test.txt)

# --number s21_cat
our_cat=$(./s21_cat --number test.txt)

# Сравниваем вывод
if [ "$cat" = "$our_cat" ]; then
  echo "Вывод оригинального cat и s21_cat с флагом --number совпадает"
else
  echo "Вывод оригинального cat и s21_cat с флагом --number не совпадает"
fi