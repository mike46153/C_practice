/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
 int num;
 int i;
 int count = 0;
 printf("Please enter the number: ");
 scanf("%d", &num);
 for(i=1;i<=num;i++){
 	if(num%i==0){
 		count++; //計算N的因數有幾個
 	}
 	}
 printf("Number of divisors: %d\n", count);
 if(count==2){   //N的因數只有兩個為質數
	printf("The number is prime\n");
 }
 else{           //超過兩個則不為質數
	printf("The number is not prime.\n");
 }

 return 0;
 }
