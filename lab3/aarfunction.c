#include<stdio.h>
void array_print(int x[],int size);
int sum_array (int x[], int size);
int sum_array_ref (int *x, int size);

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},size=10;
    int s;
    int *p;
    s=sum_array_ref(a,size);
    //s=sum_array_ref2(a,size);
    //array_print(a,size);
   // s=sum_array(a, size);
    printf("%d\n",s);

        array_print(a,size);



return 0;
}
int sum_array (int x[], int size)
{
int s;
for(int i=0;i<size;i++){
    s+=x[i];
}
return s;
}

int sum_array_ref (int *x, int size)
{
int s=0;
for(int i=0;i<size;i++){
    s+=*(x+i);
}

return s;
}





void array_print(int x[],int size)
{
int i;
for(i=0;i<size;i++){
    printf("%d",x[i]);
}
printf("\n");
}

