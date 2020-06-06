/*Find Second Minimum from the Array.*/



#include<stdio.h>


int main()

{

int arr[50]={1,2,3,4,5,6,7,8,9,10};
int i,size=10;
int x,c,min1,min2;

for(i=0;i<size;i++){
    printf("%d ", arr[i]);
}

printf("\n");

min1=arr[0];

for(c=1;c<size;c++){
    if(arr[c]<min1){
       min2 = min1;
       min1 = arr[c];
       x=c+1;

    }
    else if(arr[c] < min2 && arr[c] > min1){
         min2 = arr[c];
    }
}

printf("First Minimum=%d\n",min1);
printf("Second Minimum=%d\n",min2);

return 0;
}

