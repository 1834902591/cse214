#include<stdio.h>
int main()
{
    int a[100];
    int i,j;

    for(i =0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
    for(j =0;j< i;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;

}
