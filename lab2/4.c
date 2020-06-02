/* Insert a value “X” (take input X from user) in the array at Kth (take input K from user)
    index and shift all other value to right. And print the whole array */



#include <stdio.h>


int main()
{

    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i, X, size=12;
    int K;

    scanf("%d", &X);
    scanf("%d", &K);


    for (i=size; i>=K; i--){
        arr[i] = arr[i - 1];
    }


    size++;
    arr[K - 1] = X;


    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}
