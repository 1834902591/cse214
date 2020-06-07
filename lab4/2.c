/*Reverse the given array and store into another array.*/


#include <stdio.h>


int main()
{

	int arr[50]={1,2,3,4,5,6,7,8,9,10},revArr[50];
	int i,j;
    int size=10;


       j= 9;

   for(i = 0; i < 10; i++) {
      revArr[i] = arr[j];
      j--;
   }

	for(i=0;i< size;i++)
	{
		printf("%d ",arr[i]);

	}

	for(i=(size-1),j=0; i>=0; i--,j++)
	{
		revArr[j]=arr[i];
	}

	printf("\nArray elements after reverse:\n");
	for(i=0;i< size;i++)
	{
		printf("%d\n",revArr[i]);
	}

	return 0;
}
