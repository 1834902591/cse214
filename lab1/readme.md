**Write a C program that declare an integer array length of one hundred(100){do not initialize the array }.
Then write the following program.Check Overflow on each program[NB:Don’t use function & pointer]

**1.Scan N(take input N from user) values from user into an array.
2.Scan values from user into an array until End of file.
3.Scan values from user into an array until user input is 0(zero).

**Write a C program that declare an integer array length of one hundred (100) and initialize the array with ten (10) values.Then do the following operations.[NB: Don’t use Function And Pointer ].

**4.pPrint entire array each element in newline.
5.Print entire array each element separated by space.
6.Print entire array each element separated by comma.
7.Print the array elements in reverse order . Each element should be separated by space.



***1.User Scan :-
            
*scanf("%d",&N);
    while(scanf("%d",&a[i]) == 1){
    i++; */scan the array*/
    
   ***OVERFLOW CHECK :
            
  *if(i > N){
        printf("Array Overflow\n");
        break;
        }
     
 ***2.End of file scan:-
         
*while(scanf("%d",&a[i])!= EOF){
        i++;
    }   
    
***3.User INPUT ZERO (0) :-
      
  *logic:-
       for(i =0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
   
   ***4.Print Array element in newline :-
   
   *logic:
                for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    
***5. Print Array element separated by space:

*logic:
           for(i=0;i<size;i++){
        printf("%d  ",a[i]);
    }
    
***6.Print Array element separated by coma:

*logic:
              for(i=0;i<size;i++){
        printf("%d,  ",a[i]);
    }
    
***7.Reverse the array:-

*logic:
         for(i = size-1; i>=0; i--)
    {
        printf("%d  ", a[i]);
    }
    
