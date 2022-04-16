/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    float answer;
    scanf("%d%c%d", &num1, &op, &num2);
    if (op == '+') {
        answer = num1 + num2;
    } else if (op == '-') {
        answer = num1 - num2;
    } else if (op == '*') {
        answer = num1 * num2;
    } else if (op == '/') {
        answer = (float) num1 / num2;
    }
    printf("ANS = %f\n", answer);
    return 0;
}
