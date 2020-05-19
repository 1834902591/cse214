#include<stdio.h>
int main()
{
    int N, i = 0;
    int a[100];

    scanf("%d",&N);
    while(scanf("%d",&a[i]) == 1){
    i++;
    if(i > N){
        printf("Array Overflow\n");
        break;
        }
    }
    int j;
    for(j = 0; j < i; j++)
    {
        printf("%d ",a[j]);
    }

    return 0;
}
