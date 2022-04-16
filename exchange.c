/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int a = 2, b = 7, c = 9, t;
  printf ("Before: %d %d %d\n", a, b, c);
  t = a;
  a = c;
  c = b;
  b = t;
  printf ("After: %d %d %d\n", a, b, c);
  return 0;
}
