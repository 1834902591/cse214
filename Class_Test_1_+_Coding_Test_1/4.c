
#include<stdio.h>

int main(){

int i, size=10;
int arr1[100]={1,2,3,4,5,6,7,8,9,10};
int arr2[10];
int *p, *q;

p=&arr1[0];
q=&arr2[0];

for(i=0;i<size;i++){
    printf("%d ", *(p+i));
}
printf("\n");
for(i=0;i<size;i++){

    int flag= *(p+i);
    *(q+i)=flag;
}

for(i=0;i<size;i++){
    printf("%d ", *(q+i));
}


return 0;
}
