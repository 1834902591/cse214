/*Cyclically permute the elements of an array.*/


 #include <stdio.h>
    void main ()
    {

        int  arr[30];
        int i,n;
        printf("Enter the value of the n = ");
        scanf("%d", &n);

        printf("Enter the numbers\n");
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }

        arr[n] = arr[0];
        for (i = 0; i < n; ++i)
        {
            arr[i] = arr[i + 1];
        }

        printf("Cyclically permuted numbers are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", arr[i]);

    }
