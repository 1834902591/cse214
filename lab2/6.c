/* Update Kth (take input K from user) index with the value
    “X” (take input X from user). And print the whole array */




#include <stdio.h>

int main()
{

    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i, K, X;
    int size = 12;

    scanf("%d", &K);
    scanf("%d", &X);

    for (i=0; i==K; i++){
        arr[i] = arr[i - 1];
    }

    arr[K - 1] = X;

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

