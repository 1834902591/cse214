/*Find Minimum from the Array.*/


#include<stdio.h>


int main(){

int arr[50]={1,2,3,4,5,6,7,8,9,10};
int i,size=10;
int x,c,min;

for(i=0;i<size;i++){
    printf("%d ", arr[i]);
}

printf("\n");

min=arr[0];

for(c=1;c<size;c++){
    if(arr[c]<min){
        min=arr[c];
        x=c+1;
    }
}

printf("Minimum=%d\n",min);


return 0;
}
