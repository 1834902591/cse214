/*Calculate the summation of all elements of the given array.*/


#include<stdio.h>


int main ()
{
    int arr[50]={1,2,3,4,5,6,7,8,9,10};
    int i,size=10;
    int sum=0;

    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }

   for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("%d\n",sum);


    return 0;
}
