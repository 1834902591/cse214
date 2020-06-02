/* Insert a value “X” (take input X from user) in
    the array at the end of currently stored elements */



#include <stdio.h>


int main()
{

    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12};
    int i, size=12;
    int X;


    scanf("%d", &X);

    arr[size] = X;
    size++;


    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
