/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int maxv(int []);

int main()
{
    int v[3]={3,9,7};
    printf("Max:%d\n",maxv(&v[0]));
    int u[5]={3,9,10,2,7};
    printf("Max:%d\n",maxv(&u[0]));
    return 0;
}



int maxv(int *v) {
    int max=*(v+0), i;
    for (i=1;i<3;i++) {
        if (*(v+i)>max) {  //v[i] == *(v+i)
            max=*(v+i);
        }
    }
    return max;
}



int maxv(int [], int n);

int main()
{
    int v[3]={3,9,7};
    printf("Max:%d\n",maxv(&v[0],3));
    int u[5]={3,9,1,2,10};
    printf("Max:%d\n",maxv(&u[0],5));
    return 0;
}



int maxv(int *v, int n) {
    int max=*(v+0), i;
    for (i=1;i<n;i++) {
        if (*(v+i)>max) {  //v[i] == *(v+i)
            max=*(v+i);
        }
    }
    return max;
}