/*
** EPITECH PROJECT, 2020
** 106bombyx_2019
** File description:
** main
*/

#ifndef MAIN_H_
#define MAIN_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>

int process(int ac, char *av[]);

#define NUM(num) ((!(_s[i] >= '0' && _s[i] <= '9')) ? 0 : 1)
#define DEC(num) ((!(_s[i] >= '0' && _s[i] <= '9') &&  _s[i] != '.') ? 0 : 1)
#define REF 0x3E8

static void  phelp(void)
{
    printf("USAGE\n");
    printf("    ./106bombyx n [k | i0 i1]\n\n");
    printf("DESCRIPTION\n");
    printf("    n      number of first generation individuals\n");
    printf("    k      growth rate from 1 to 4\n");
    printf("    i0     initial generation (included)\n");
    printf("    i1     final generation (included)\n");

    exit (0);
}

static __always_inline _Bool
isnbr(const char *__restrict__ _s)
{
    for (int i = 0; i < strlen(_s); ++i) if (!NUM(_s[i])) return 0; return 1;
}

static __always_inline _Bool
isdec(const char *__restrict__ _s)
{
    for (int i = 0; i < strlen(_s); ++i) if (!DEC(_s[i])) return 0; return 1;
}

#endif /* !MAIN_H_ */