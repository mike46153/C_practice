/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int side1, side2, side3, t;
  printf ("Please enter the lengths:");
  scanf("%d%d%d", &side1, &side2, &side3);
  
  if (side1 > side2) { t = side1; side1 = side2; side2 = t; }
  if (side1 > side3) { t = side1; side1 = side3; side3 = t; }
  if (side2 > side3) { t = side2; side2 = side3; side3 = t; }
  if (side1+side2>side3) {
      if (side1 == side3) printf("Regular Triangle\n");
      if (side1 == side2 || side2 == side3) printf("Isoceles Triangle\n");
      if (side1*side1+side2*side2==side3*side3) printf("Rectangular Triangle\n");
  } else { printf("The lengths can't form a Triangle.\n"); }
  
  return 0;
}
