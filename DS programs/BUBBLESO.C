#include<stdio.h>
#include<conio.h>
void bubblesort(int a[20], int n )
{
int i, temp, pass;
clrscr();
for (pass = 1; pass< n; pass++)
for ( i = 0; i<n-pass-1;i++)
{
if (a[i]> a[i+1])
{
temp =a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
void main()
{
int a[20],i,n;
printf("how many numbers :");
scanf("%d",&n);
printf(" \n enter the unsorted elements ");
for ( i=0 ;i<n ;i++)
scanf("%d",&a[i]);
bubblesort(a,n);
printf("\n the sorted output is ");
for(i=0;i<n;i++)
printf("%d \n ", a[i]);
getch();
//return 0;

}
