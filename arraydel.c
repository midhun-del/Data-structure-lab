#include<stdio.h>
int main(){
    int a[100],i,n,pos;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter the data:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("enter the position element to delete:");
    scanf("%d",&pos);
    if(pos>n+1)
    printf("not find in array:");
    else{
        for(i=pos-1;i<n-1;i++)
           a[i]=a[i+1];
           
           printf("deleted array is:");
           for(i=0;i<n-1;i++)
              printf("%d \n",a[i]);
              return 0;
        
        }
    } 


