#include<stdio.h>
#include<conio.h>
void bubble_sort(int arr[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
int main()
{
int arr[]={87,34,99,23,66,31};
int i;
int n=sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,n);
printf("Sorted list:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
getch();
return 0;
}