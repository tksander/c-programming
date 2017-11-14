#include <stdio.h>

/*
 * Print Fahrenheit-Celsius Table
 * Prints 0 - 300 Fahrenheit, by 20 degree increments
 * */

int main()
{
    int fahr, celsius;
    int upper, step;

    fahr = 0;
    upper = 300;
    step = 20;
    while(fahr < upper) {
       celsius = 5 * (fahr - 32) / 9;
       printf("Celsius: %d \t Fahrenheit: %d\n", celsius, fahr);
       fahr = fahr + step;
    }
}
