/*
** EPITECH PROJECT, 2020
** 106bombyx_2019 [WSL: Debian]
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/main.h"

Test(test_step01_, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
    char *av[] = {"0", "1"};
    cr_assert_eq(test(2, av), 0);
}

Test(test_step01_, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
    char *av[] = {"1", "0"};
    cr_assert_eq(test(2, av), 84);
}

Test(test_step01_, Test_entry_2, .timeout = 0.5, .exit_code = 0)
{
    char *av[] = {"test", "3.3"};
    cr_assert_eq(test(2, av), 84);
}

Test(test_step01_, Test_entry_3, .timeout = 0.5, .exit_code = 0)
{
    char *av[] = {"10", "ergdrgkhdfgdfg"};
    cr_assert_eq(test(2, av), 84);
}

Test(test_step01_, Test_entry_4, .timeout = 0.5, .exit_code = 0)
{
    char *av[] = {"10", "3.3"};
    cr_assert_eq(test(2, av), 0);
}