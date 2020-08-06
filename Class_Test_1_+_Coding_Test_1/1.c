
#include<stdio.h>

void print_array();

int main(){
 int arr[100];
 int i,j,x;
  print_array();
return 0;

}

void print_array(){
int i, j,x=5;
int arr[100];
while(scanf("%d", &arr[i])!=EOF){
    i++;
    /*Overflow Check*/
    if(i>5){
        printf("Array Overflow\n");
        break;
    }
}
for(j=0;j<i;j++){
    printf("%d ", arr[j]);
}
}


