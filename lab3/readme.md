***1.Find Maximum from the Array.

*LOGIC:
```C
 max=arr[0];//ASSIGN

for(c=1;c<size;c++){
    if(arr[c]>max){//CONDITION 
        max=arr[c];
        x=c+1;
    }
}  
```

***2.Find Minimum from the Array.

*LOGIC:
```C
min=arr[0];

for(c=1;c<size;c++){
    if(arr[c]<min){
        min=arr[c];
        x=c+1;
    }
}
```


***3.Find Second Maximum from the Array.

*LOGIC:
```C
for(c=1;c<size;c++){
    if(arr[c]>max1){
       max2 = max1;
       max1 = arr[c];
       x=c+1;

    }
    else if(arr[c] > max2 && arr[c] < max1){
         max2 = arr[c];
    }
}
```

***4.Find Second Minimum from the Array.

*LOGIC:
```C
for(c=1;c<size;c++){
    if(arr[c]<min1){
       min2 = min1;
       min1 = arr[c];
       x=c+1;

    }
    else if(arr[c] < min2 && arr[c] > min1){
         min2 = arr[c];
    }
}
```

***5.Calculate the summation of all elements of the given array.

*LOGIC:
```C
int sum=0;

    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }
```

***6.Calculate the average of all elements of the given array.

*LOGIC:
```C
for(i=0;i<size;i++){
        sum=sum+arr[i];
    }

     average=sum/size;//FORMULA
```

***7.Calculation Standard Deviation of all elements of the given array.

*LOGIC:
```C
for(i=0;i<size;i++){
        sum=sum+arr[i];
    }

    mean = sum/size;

      for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
    printf("Sum=%.2f\n",sum);


     for(i=0;i<size;i++){
        sum=sum+(arr[i]-mean)*(arr[i]-mean);
        std_dev=sqrt(sum/size);
    }
```

***8.Calculate first 92 fibonacci and store theose in an array.

*LOGIC:
```C
int f = 0, s = 1;

    for(i = 0; i < n; i++)
    {
        a[i] = f;
        fibo = f + s;
        f = s;
        s = fibo;
    }
```    










