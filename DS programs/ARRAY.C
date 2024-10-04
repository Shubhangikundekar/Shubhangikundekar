#include<stdio.h>
#include<conio.h>
int main()
{
int a[10];
int i;
printf("\n\nPrint the element:\n");
printf("Input 10 element in the array:\n);
for(i=0;i<10;i++)
{
printf("Element-%d:",i);
scanf("%d",&a[i]);
}
printf("\nElement in array:");
for(i=0;i<=10;i++)
{
printf("%d",a[i]);
}
printf("\n");
return 0;
getch();
}