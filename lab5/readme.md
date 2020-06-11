***Write a C program that declare an integer array length of one hundred(100){do not initialize the array }.
Then write the following program.Check Overflow on each program[NB:Don’t use function & pointer]

***1.Scan N(take input N from user) values from user into an array.Access the array using pointer. 

*logic:
```C
int *p;//DECLARE POINTER
    int i, N;
    int array[100];

    p = &array[0];/*ASSIGN THE ARRAY INTO POINTER P*/

    scanf("%d",&N);

    for(i=0; i<N; i++)
        scanf("%d",(p+i));/*SCAN THE VALUES*/

    printf("\n");

    for(i=0; i<N; i++)
        printf("%d ",*(p+i));/*PRINT THE VALUES*/

```

***2.Scan values from user into an array until End of file.Access the array using pointer. 

*LOGIC:
```C
int *p;
    int i, N;
    int array[100];
    int size = 0;

    p = &array[0];/*ASSIGN THE ARRAY INTO POINTER P*/

    for(i=0; scanf("%d",(p+i))!=EOF; i++)/*EOF LOGIC*/
        size++;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));/*PRINT THE VALUES*/
```

***3.Scan values from user into an array until user input is 0(zero).Access the array using pointer. 

*LOGIC:
```C
int *p;/*DECLARE THE POINTER*/
    int i, size;
    int array[100];

    p = &array[0];/*ASSIGN THE ARRAY INTO POINTER P */

    for(i=0; scanf("%d",(p+i))!=EOF; i++)
        if(*(p+i)==0)/*CONDITION OF USER INPUT ZERO*/
            break;

    size=i;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));/*PRINT THE ARRAY*/
```

***Write a C program that declare an integer array length of one hundred (100) and initialize the array with ten (10) values.Then do the following operations.[NB: Don’t use Function And Pointer ].


***4.Print entire array each element separated by space.Access the array using pointer. 

*LOGIC:
```C
int i;
    int *p;/*DECLARE THE POINTER*/
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &array[0];/*ASSIGN THE ARRAY INTO POINTER P*/

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));/*PRINT THE ARRAY*/
```

***5.Insert a value “X” (take input X from user) in the array
    at Kth (take input K from user) index and shift all other
    value to right. And print the whole array. Access the array
    using pointer .
    
   *LOGIC:
   ```C
int *p;/*DECLARE THE POINTER*/
    int i, X, K;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    scanf("%d",&X);

    scanf("%d",&K);

    p = &array[0];/*ASSIGN THE ARRAY INTO POINTER P*/

    for (i=size; i>=K; i--)
        *(p+i) = *(p+i-1);

    size++;

    *(p+K-1) = X;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));/*PRINT THE ARRAY*/
```   
***6. Update Kth (take input K from user) index with the value “X”
    (take input X from user). And print the whole array. Access
    the array using pointer .
    
   *LOGIC:
   ```C
 int *p;
    int i, X, K;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    scanf("%d",&K);

    scanf("%d",&X);

    p = &array[0];

    for(i=K-1; i<size; i++)
    {
        *(p+i)=X;
        break;
    }
    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));
 ```
 ***7.Search a value “X” (take input X from user) in the array
    and print the location if “X” found in the array otherwise
    print -1. Access the array using pointer.
    
*LOGIC:
```C
 p = &array[0];

    for(i=0; i<size; i++)
    {
        if(*(p+i)==X)
        {
            location = i;
            tag++;
        }
    }

    if(tag==1)
        printf("%d",location);
    else
        printf("-1");
```
***8.Delete a value from Kth index (take input K from user) from the
    array shift all other value to left. And print the whole array.
    Access the array using pointer.
    
   *LOGIC:
   ```C
   scanf("%d",&K);

    p = &array[0];

    for (i=K-1; i<size; i++){
        *(p+i) = *(p+i+1);}

    size--;

    for(i=0; i<size; i++){
        printf("%d ", *(p+i));}
```
***9.Find Maximum from the Array. Access the array using pointer.

*LOGIC:
```C
max = &array[0];

    for(i=0; i<size; i++)
        printf("%d ", *(max+i));

    printf("\n");

    for(i=1; i<size; i++)
        if(*(max+i)>*max)
            *max = *(max+i);

    printf("%d\n",*max);
```
***10.Find Minimum from the Array. Access the array using pointer.

*LOGIC:
```C
min = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=1; i<size; i++)
        if(*(min+i)<*min)
            *min = *(min+i);

    printf("%d\n",*min);
```
***11.Find Second Maximum from the Array. Access the array using pointer.

*LOGIC:
```C
max = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(max+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(max+i)>*max)
        {
            max_2nd = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max_2nd && *(max+i)<*max)
            max_2nd = *(max+i);
    }

    printf("%d\n", max_2nd);
```
***12.Find Second Minimum from the Array. Access the array using pointer.

*LOGIC:
```C
 min = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(min+i)<*min)
        {
            min_2nd = *min;
            *min = *(min+i);
        }
        else if(*(min+i)<min_2nd && *(min+i)!=*min)
            min_2nd = *(min+i);
    }

    printf("%d\n", min_2nd);
```
***13.Calculate the summation of all elements of the given array. Access the array using pointer.

*LOGIC
```C
 p = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        sum += *(p+i);

    printf("%d\n", sum);
```
***14.Copy the given array into another array. Access the array using pointer.

*LOGIC:
```C
 p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        tag = *(p+i);
        *(q+i) = tag;
    }

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));
```
***15.Reverse the given array within the same array. Access the array using pointer.

*LOGIC:
```C
p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<=size; i++)
    {
        tag = *(p+size-i);
        *(q+i-1) = tag;
    }

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));
```
***16.Declare another array with ten (10) values and compare both
    arrays whether they are same or not. Access the array using pointer.
    
 *LOGIC:
 ```C
 p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    for(i=0; i<size; i++)
        if(*(p+i)==*(q+i))
            same++;

    if(same==size)
        printf("\nTwo array are same\n");
    else
        printf("\nTwo array are not same\n"); 
```
***17.Declare another array with five (5) values and merge two array
    into one array. Access the array using pointer.
    
 *LOGIC:
 ```C
p = &array1[0];
    q = &array2[0];

    for(i=0; i<size1; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
       *(p+i)=*(q+j);

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
```
***18.Merge the Elements of two Sorted Array. Access the array using pointer.

*LOGIC:
```C
p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
    {
        size1++;
        *(p+i)=*(q+j);
    }

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                tag = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tag;
            }
        }
    }

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
```
***19.Split an Array after Kth (take input K from user) elements
    into two different Arrays. Access the array using pointer.
    
  *LOGIC:
  ```C
int *p, *q, *r;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array1[100];
    int array2[100];
    int size = 10;
    int size1 = 0;
    int size2 = 0;

    p = &array[0];
    q = &array1[0];
    r = &array2[0];

    scanf("%d",&K);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    for(i=0; i<size; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size1++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size2++;
        }
    }

    printf("\n");

    for(i=0; i<size1; i++)
        printf("%d ",*(q+i));

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ", *(r+i));
```
***20.Cyclically permute the elements of an array. Access the array using pointer .

*LOGIC:
```C
p = &array[0];
    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    *(p+size) = *p;

    for (i=0; i<size; i++)
        *(p+i) = *(p+i+1);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
```
