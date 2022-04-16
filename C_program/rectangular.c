/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
   int a,b,c;
   printf("Please enter a number: ");
   scanf("%d", &c);
    for (a = 1; a<=c ; a++){
        for (b = 1; b<=c ; b++){   //'*'的座標位置
            if (a==1 || a==c || b==1 || b==c) {
                printf("*");
            } else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
