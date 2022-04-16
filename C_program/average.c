/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
    float average;
    printf("Please enter numbers (0 : quit): \n");
    scanf("%d", &number);
    while (number != 0) {
        sum = sum + number;
        scanf("%d", &number);
        count = count + 1;
    }
    average = sum / count;
    printf("AVG = %f.\n", average);

    return 0;
}
