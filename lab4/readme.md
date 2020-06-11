***1.Copy the given Array into another array.

*LOGIC:
```C
for(i = 0; i < size; i++) {
      c[i] = arr[i];
   }
   printf(" ");
```

***2.Reverse the given array and store into another array.

*LOGIC:
```C

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
  ```
  ***3.Reverse the given array within the same array.
  
*LOGIC:
```C

	   for(i=(size-1),j=0; i>=0; i--,j++)
	{
		revArr[j]=arr[i];
	}

	printf("\nArray elements after reverse:\n");
	for(i=0;i< size;i++)
	{
		printf("%d\n",revArr[i]);
	}
  ```
  
  ***4.Declare another array with ten(10)values and compare both arrays whether they are same or not.
  
  *LOGIC:
  ```C
for(i = 0; i < size; i++)
    {
        if(a[i] != b[i])//CONDITION
        {
            temp = 0;
            break;
        }
    }
    if(temp == 1)//CONDITION
    {
        printf("They are same");
    }
    else
    {
        printf("They are not same");
    }  
  ```
  
 ***5.Declare another array with five(5)values and merge two array into one array.
 
 *LOGIC:
 ```C
int i, j, size_a = 5,size_b = 5;
    int c[10];
    int size_c = size_a + size_b;

    for(i = 0; i < size_a; i++)
    {
        c[i] = a[i];
    }

    for(i = 0, j = size_a; i < size_c; i++,j++)
    {
        c[j] = b[i];
    }
``` 
 
***6.Merge the elements of two sorted array.

*LOGIC:
```C
int size_c = size_a + size_b;

    for(i = 0; i < size_a; i++)
    {
        c[i] = a[i];
    }

    for(i = 0, j = size_a; i < size_c; i++,j++)
    {
        c[j] = b[i];
    }

    for(i = 0; i < size_c; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");

    for(i = 0; i < size_c; i++)
    {
        for(j = i + 1; j < size_c; j++)
        {
            if(c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
```

***7.Split an array at k^th (take input k from user)index into two different arrays.

*LOGIC:
```C
 int b[10], size_b = 0;
    int c[10], size_c = 0;
    int index, i, j;

    scanf("%d",&index);
    if(index > 10){
        printf("Error Input");
    }

    for(i=0; i<index; i++){
        b[i] = a[i];
    }
    size_b = index;
    for(i=index, j=0; i<size_a; i++, j++){
        c[j] = a[i];
    }
    size_c = size_a - index;

    for(i = 0; i < size_a; i++)
    {
        printf("%d ", a[i]);
    }

        printf("\n");

    for(i = 0; i < size_b; i++)
    {
        printf("%d ", b[i]);
    }
```

***8.Cyclically permute the elements of an array.

*LOGIC:
```C
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
 ```       















 
 
 
 
 
 
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

