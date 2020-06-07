/*Declare another array with ten(10)values and compare both arrays whether they are same or not.*/


#include<stdio.h>


int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int  i, temp = 1;

    for(i = 0; i < size; i++)
    {
        if(a[i] != b[i])
        {
            temp = 0;
            break;
        }
    }
    if(temp == 1)
    {
        printf("They are same");
    }
    else
    {
        printf("They are not same");
    }
    return 0;
}
