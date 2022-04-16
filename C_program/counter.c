/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int total = 0;
    int id;
    do {
        scanf("%d", &id);
        switch (id) {
            case 1: total += 90; break;
            case 2: total += 75; break;
            case 3: total += 83; break;
            case 4: total += 89; break;
            case 5: total += 71; break;
        }
        
    } while (id != 0);
    printf("Total = %d.\n", total);
    
    return 0;
}
