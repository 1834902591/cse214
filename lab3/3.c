/*Find Second Maximum from the Array.*/



#include<stdio.h>


int main(){

int arr[50]={1,2,3,4,5,6,7,8,9,10};
int i,size=10;
int x,c,max1,max2;

for(i=0;i<size;i++){
    printf("%d ", arr[i]);
}

printf("\n");

max1=arr[0];

for(c=1;c<size;c++){
    if(arr[c]>max1){
       max2 = max1;
       max1 = arr[c];
       x=c+1;

    }
    else if(arr[c] > max2 && arr[c] < max1){
         max2 = arr[c];
    }
}

printf("First Maximum=%d\n",max1);
printf("Second Maximum=%d\n",max2);

return 0;
}
