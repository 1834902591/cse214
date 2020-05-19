#include<stdio.h>

int main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,size=10;

  for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
printf("After Reverse:\n");

    for(i = size-1; i>=0; i--)
    {
        printf("%d  ", a[i]);
    }
return 0;
}
