#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],b[5],i,j;
printf("Element:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("print the 1st array element:\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
printf("Enter 2nd array elements:\n");
for(j=0;j<5;j++)
{
scanf("%d",&b[j]);
}
printf("Print the 2nd array elements:\n");
for(j=0;j<5;j++)
{
printf("%d\n",b[j]);
}
getch();
return 0;
}