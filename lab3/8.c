/*Calculate first 92 fibonacci and store theose in an array.*/


#include<stdio.h>


int main()
{
    int a[100];
    int n = 92, i;
    int fibo;
    int f = 0, s = 1;

    for(i = 0; i < n; i++)
    {
        a[i] = f;
        fibo = f + s;
        f = s;
        s = fibo;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);;
    }

    return 0;
}


