/*
** EPITECH PROJECT, 2020
** 106bombyx_2019
** File description:
** main
*/

#include "include/main.h"

int process(int ac, char *av[])
{
    long double i = 0x1;
    long double k = 0x1;
    long double x = 0X0;

    if (ac == 2 && !strcmp(av[1], "-h")) phelp();
    if (ac < 3 || ac > 4) return 84;
    if (0 >= atof(av[1])) return 84;
    x = atoi(av[1]);
    if ((ac == 3))
        if (!((!isnbr(av[1]) || !isdec(av[2]) || atof(av[2]) < 1 || atof(av[2]) > 4))) goto normal;
        else return 84;
    if ((ac == 4) && (!isnbr(av[1]) || !isnbr(av[2]) || !isnbr(av[3]) || atof(av[1]) >= atof(av[2]) || atof(av[2]) >= atof(av[3]))) return 84;
    else goto gen;
    normal:
        do printf("%.llf %.2llf\n", i, x), x *= atof(av[2]) * ((REF - x) / REF); while (i++ != 0x64);exit (0);
    gen:
        for (k = 0x1; k <= 0x4; k += 0.01) {
            for (int i = 0x1; i <= atof(av[3]); i++) {
                while (i < atof(av[2])) {
                    x *= k * ((REF - x) / REF);
                    i++;
                }
                x *= k * ((REF - x) / REF);
                printf("%.2llf %.2llf\n", k, x);
            }
        }
        exit (0);
}

int main(int ac, char *av[])
{
    if (process(ac, av) == 84) return 84;
    return 0;
}