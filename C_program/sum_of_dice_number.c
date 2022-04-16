/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() //sum of two random numbers
{
    srand(time(0));
    int i, j, k;
    int count[11]={0};

    for (i=1;i<=10000;i++) {
        int a = rand() % 6 + 1;
        int b = rand() % 6 + 1;
        j=a+b;
        count[j-2]++;
    }
    for (k=2;k<=12;k++) {
        printf("%d: %d\n", k, count[k-2]);
    }
    
    

    return 0;
}






int main() //sum of three numbers
{
    srand(time(NULL));
    int i, j, k;
    int count[16]={0};
    
    for (i=1;i<=10000;i++) {
        int a = rand() % 6 + 1;
        int b = rand() % 6 + 1;
        int c = rand() % 6 + 1;
        j=a+b+c;
        count[j-3]++;
    }
    for (k=3;k<=18;k++) {
        printf("%d: %d\n", k, count[k-3]);
    }
    
    

    return 0;
}