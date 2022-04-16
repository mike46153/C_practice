/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max) {
        max = b;
    } else if (c > max) {
        max = c;
    }
    printf("Max is %d", max);
    return 0;
}
