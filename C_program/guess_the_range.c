/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i, j, k;
    int N[10]={0};
    
    printf("Please enter 10 numbers: ");
    for (i=1;i<=10;i++) {
        scanf("%d", &N[i-1]);
    }
    while (1) {
        printf("Please enter left and right limit((0,0)quit): ");
        scanf("%d%d", &j, &k);
        if (j==0 && k==0){
            break;
        }
        for (i=0;i<10;i++) {
        if (N[i]>=j && N[i]<=k) {
            printf("ANS = %d\n", N[i]);
        }
        }
        printf("\n");
    }
    
    return 0;
}
