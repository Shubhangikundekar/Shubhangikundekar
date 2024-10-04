#include<stdio.h>
#include<conio.h>
int main ()
{
int i,n,j,temp;
printf("Enter array size");
scanf("%d",&n);
int A[n];
printf("Enter the valuse in array:");
for(i=0;i<n;i++)
{
scanf("%d",&A[n]);
}
for(i=n;i>0;i--)
{
for(j=0;j<i-1;j++)
{
if (A[i]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted result\n:");
for(i=0;i<n;++i)
{
printf( "%d",A[i]);
}
getch();
return 0;
}
