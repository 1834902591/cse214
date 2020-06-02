/* Update fifth (5th) index with another value. And print the whole array */


#include <stdio.h>


int main()
{

    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i,size=12;
    int n=5,x=2013;

    for (i=0; i==n; i++){
        arr[i] = arr[i - 1];
    }

    arr[n - 1] = x;


    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

