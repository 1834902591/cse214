/*Calculation Standard Deviation of all elements of the given array.*/


#include<stdio.h>
#include<math.h>

int main()
{
    int arr[50]={1,2,3,4,5,6,7,8,9,10};
    int i,size=10;
    float mean,sum=0, std_dev;

     for(i=0;i<size;i++){
        sum=sum+arr[i];
    }

    mean = sum/size;

      for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
    printf("Sum=%.2f\n",sum);


     for(i=0;i<size;i++){
        sum=sum+(arr[i]-mean)*(arr[i]-mean);
        std_dev=sqrt(sum/size);
    }

    printf("\n");
    printf("Mean= %.2f\n",mean);
    printf("Standard Deviation=%.2f\n",std_dev);

    return 0;
}
