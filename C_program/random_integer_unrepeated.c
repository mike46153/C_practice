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
    srand(time(NULL));
    int i, j, used, n[10];
    
    for (i=1;i<=10;i++) {
        while (j != i) {
            n[i-1] = rand() % (10 - 4 + 1) + 1;  //產生4~10中的隨機亂數
            
            for (j=1;j<i;j++) {
                if (n[i-1] == n[j-1]) {
                    
                    break;
                }
            }
        }
        printf("%d ", n[i-1]);
    }
    printf("\n");
        return 0;
}
    
    

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, n, c[10]={0};
    for (i=1;i<=10;i++) {
        do {
            n = rand() % (20-10+1) + 10; //產生10~20之間的隨機亂數 rand()%(max-min+1)+min
        } while (c[n-10] != 0); //c[n-min]
        printf("%d ", n);
        c[n-10]++;
    }
    printf("\n");

    return 0;
}    

