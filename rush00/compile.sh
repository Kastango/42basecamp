#!/bin/sh


echo "EXECUTING RUSH 00: "

cc -Wall -Wextra -Werror -o 00 main.c rush00.c ft_putchar.c
./00
echo "\n"

echo "EXECUTING RUSH 01: "

cc -Wall -Wextra -Werror -o 01 main.c rush01.c ft_putchar.c
./01

echo "\n"

echo "EXECUTING RUSH 02: "

cc -Wall -Wextra -Werror -o 02 main.c rush02.c ft_putchar.c
./02
echo "\n"

echo "EXECUTING RUSH 03: "

cc -Wall -Wextra -Werror -o 03 main.c rush03.c ft_putchar.c
./03
echo "\n"


echo "EXECUTING RUSH 04: "

cc -Wall -Wextra -Werror -o 04 main.c rush04.c ft_putchar.c
./04
echo "---- END ----"