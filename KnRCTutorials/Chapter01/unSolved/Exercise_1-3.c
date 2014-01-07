#include <stdio.h>
/*
 * Modify the temperature conversion program to print
 * a heading above the table
 */

int main(int argc, const char *argv[])
{
    int fahr,celsius;
    int lower,upper,step;

    lower = 0;          //Lower limit of temeprature table
    upper = 300;        //Upper Limit
    step = 20;          //Step Size
    printf("fahr \t celsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5 * (fahr - 32)) / 9;
        printf("%3d \t %6d\n",fahr,celsius);
        fahr = fahr + step;
    }
    return 0;
}

