/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x , y , i, N ;
    printf("Please enter an integer: ");
    scanf("%d", &N);
    for(x=1 ; x<=N ; x++)
   {

       if (x % 2 !=0) {
           for(i=0 ; i<(N-x)/2 ; i++)    
                {printf(" ");}
           for(y=1 ; y<=x ; y++)         
                {printf("*");}
      }
      else
           printf("\n");
   }
   
    
    return 0;
}
