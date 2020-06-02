/* Insert a value “X” (take input X from user) in the array at third (3rd) index and
    shift all other value to right. And print the whole array */




#include <stdio.h>


int main()
{

    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i, X,size=12;
    int n = 3;


    scanf("%d", &X);


    for (i=size; i>=n; i--){
        arr[i] = arr[i - 1];
    }
        size++;
        arr[n- 1] = X;




    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

