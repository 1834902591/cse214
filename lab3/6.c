/*Calculate the average of all elements of the given array.*/


#include<stdio.h>


int main ()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,size=10;
    float sum=0 ;
    float average;

    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }

     average=sum/size;

   for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Sum=%.2f\n",sum);
    printf("Average= %.2f\n",average);


    return 0;
}

