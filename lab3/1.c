/*   Find Maximum from the Array .*/



#include<stdio.h>


int main(){

int arr[50]={1,2,3,4,5,6,7,8,9,10};
int i,size=10;
int x,c,max;

for(i=0;i<size;i++){
    printf("%d ", arr[i]);
}

printf("\n");

max=arr[0];

for(c=1;c<size;c++){
    if(arr[c]>max){
        max=arr[c];
        x=c+1;
    }
}

printf("Maximum=%d\n",max);


return 0;
}
