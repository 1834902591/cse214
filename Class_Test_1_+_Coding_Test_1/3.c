#include<stdio.h>

int main(){
int a[100]={1,2,3,4,5,6,7,8,9,10};
int K, X;
int i;
int size=10;

scanf("%d", &K);
scanf("%d", &X);

for(i=0;i==K;i++){
    a[i]==a[i-1];
}
a[K-1]= X;

for(i=0;i<size;i++){
     printf("%d ", a[i]);
}
return 0;
}
