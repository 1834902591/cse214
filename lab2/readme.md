**1.Insert any value at tenth (10th) index of the array.
    And print the whole array.
    
 *LOGIC:-
 ```C
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int size = 10;
    int X = 11;   \\10th index
    a[9] = X;\\value assign
    for(i=0; i<size; i++)
        printf("%d ", a[i]);
```
    
    
    
***2.Insert a value “X” (take input X from user) in
    the array at the end of currently stored elements.
    
LOGIC:
```C
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};\\ARRAY DECLARE
    int i,  X;\\DECLARE
    int size = 10;
    scanf("%d", &X);\\SCAN FROM USER
    a[size] = X;\\ASSIGN IN AN ARRAY 
    size++;\\INCREMENT THE SIZE
    for(i=0; i<size; i++)\\FOR PRINTING 
        printf("%d ", a[i]
    
```    
    
    
**3.Insert a value “X” (take input X from user) in the array at third (3rd) index and
    shift all other value to right. And print the whole array.
    
 LOGIC:-
 ```C
    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;

 ```   
    
    

***4. Insert a value “X” (take input X from user) in the array at Kth (take input K from user)
    index and shift all other value to right. And print the whole array.
    
 LOGIC:
 ```C   
    scanf("%d", &X);
    scanf("%d", &K);

    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;
```
      
***5. Update fifth (5th) index with another value. And print the whole array.

LOGIC:
```C  
       int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int K = 5;
    int size = 10;
    int X = 120;

    for (i=0; i==K; i++)
        a[i] = a[i - 1];

    a[pos - 1] = X;
```


***6. Update Kth (take input K from user) index with the value
    “X” (take input X from user). And print the whole array.
    
LOGIC:    
```C    
    scanf("%d", &K);
    scanf("%d", &X);

    for (i=0; i==K; i++)
        a[i] = a[i - 1];

    a[K - 1] = X;

    printf("\n");

```    
    
    
***7. Search a value “X” (take input X from user) in the array and print
    “Found” if X found in the array otherwise print “Not Found”.
    
  LOGIC:
  ```C  
     scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
            tag++;
    }
    if(tag==1)\\CONDITIONS
        printf("Found\n");
    else
        printf("Not Found").  
 ```   
***8. Search a value “X” (take input X from user) in the array and
    print the index if X found in the array otherwise print -1.
    
 LOGIC:
 ```C
    for (i=0; i<size; i++)
    {
        if(a[i]==X){
            printf("Index %d",i);
            tag++;
        }
    }
    if(tag!=1)\\CONDITIONS
        printf("-1");       
  ```          
***9. Delete a value from Kth index (take input K from user) from
    the array shift all other value to left. And print the whole array.
    
  LOGIC:
  ```C
    for (i=K-1; i<size; i++)
        a[i] = a[i+1];

    size--;
    
  ```
     
***10. Delete a value “X” (take input X from user) from
    the array shift all other value to left. If “X”
    is not present in the given array print Element
    Not Found. Only delete the first occurrence of
    the value. And print the whole array.
    
   LOGIC:
   ```C 
       for( j = 0; j < array_size; j++)
    {
        if(X==array[j])
        {
            for( i = X-1; i <= array_size; i++)
            {
                array[i] = array[i+1];
            }
            tag++;
        }
    }
    array_size--;
    if(tag!=1)\\CONDITIONS
    {
        printf("\nNot Found\n");
    }
    else
    {
        for( i = 0; i < array_size; i++)
        {
            printf("%d ",array[i]);
        }
    }  
    
```    
    
    
***11. Delete a value “X” (take input X from user) from
   the array shift all other value to left. If “X”
   is not present in the given array print Element
   Not Found. Delete all the occurrence of the value.
   And print the whole array.
   
  LOGIC:
   ```C
   for( j = 0; j <= array_size; j++)
    {
        if(X==array[j])
        {
            for( i = j; i <= array_size; i++)
            {
                array[i] = array[i+1];
            }
            array_size--;
            tag++;
            j--;
        }
    }
    if(tag==0)\\CONDITIONS
    {
        printf("\nNot Found\n");
    }
    else
    {
        for( i = 0; i < array_size; i++)
            printf("%d ",array[i]);
    }
   ```
   
   
