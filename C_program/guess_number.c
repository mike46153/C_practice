/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int answer = 4;
    int guess;
    int count = 0;
    while (count == 0 || guess != answer) {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count = count + 1;
        if (guess > answer) {
            printf("Too large.\n");
        } else {
            printf("Too small.\n");
        }
        
    }
    printf("Correct. (%d)\n", count);
    return 0;
}



int main()
{
    int answer = 4;
    int guess;
    int count = 0;
    do {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count = count + 1;
        if (guess > answer) {
            printf("Too large.\n");
        } else if (guess < answer) {
            printf("Too small.\n");
        } else {
            printf("Correct. (%d)\n", count);
        }
        
    } while (count == 0 || guess != answer);
    
    return 0;
}