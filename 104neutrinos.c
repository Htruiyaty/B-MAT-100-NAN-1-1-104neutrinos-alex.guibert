/*
** EPITECH PROJECT, 2023
** 104neutrinos
** File description:
** Display informations about neutrinos
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static void display_help_page(void)
{
    printf("USAGE\n    ./104neutrinos n a h sd\n\nDESCRIPTION\n    n\tnumber of values\n    a\tarithmetic mean\n    h\tharmonic mean\n    sd\tstandard deviation\n");
}

static int len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

static float arithmetic_mean(int n, float a, float new_value)
{
}

static void display_nb(int nb)
{
}

static void harmonic_mean(float h)
{
}

void calculate(unsigned int n, float a, float h, float sd, float nb)
{

}

static void display(unsigned int n, float a, float h, float sd, int nb)
{
    
}

int main(int ac, char **av)
{
    char *input;
    if (ac == 5) {
        if (av[1][0] == '-' && av[1][1] == 'h')
            display_help_page();
        unsigned int n = atoi(av[1]);
        float a = atof(av[2]);
        float h = atof(av[3]);
        float sd = atof(av[4]);
        while (input[0] == 'E' && input[1] == 'N' && input[2] == 'D') {
            printf ("Enter next value: ");
            scanf("%s", &input);
            calculate(n, a, h, sd, atof(input));
            display(n, a, h, sd, atof(input));
        }
    } else {
        write(2, "Invalid arguments\n", 18);
        return (84);
    }
    return (0);
}
