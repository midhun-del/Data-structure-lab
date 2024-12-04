#include<stdio.h>
int main(){
int a[100];
int i,n,data,m;
printf("enter the length of an array:");
scanf("%d",&n);
printf("enter array:");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("enter the data for insertion:");
scanf("%d", &data);
printf("enter position for insertion:");
scanf("%d",&m);
for(i=n-1;i>=m-1;i--)
a[i+1]=a[i];
a[m-1]=data;
printf("inserted array:");
for(i=0;i<n+1;i++)
printf("%d \n",a[i]);
return 0;
}
