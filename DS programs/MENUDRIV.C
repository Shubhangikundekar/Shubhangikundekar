#include<stdio.h>
#include<conio.h>
typedef struct node
{
   int info;
   struct node *next;
}NODE;
void createlist (NODE *head)
{
  int n, count;
  NODE *last, *newnode;
  printf("How many nodes:");
  scanf("%d",&n);
  last=head;
  for(count=1;count<=n;count++)
  {
      newnode=(NODE *)malloc(sizeof(NODE));
      newnode->next=NULL;
      printf("\nEnter the node data:");
      scanf("%d",&newnode->info);
      last->next=newnode;
      last=newnode;
  }
}
void display(NODE *head)
{
   NODE *temp;
   for(temp=head->next; temp!=NULL; temp=temp->next)
   {
      printf("%d\t", temp->info);
   }
}
int search(NODE *head, int num)
{
   NODE *temp;
   int pos;
   for(temp=head->next, pos=1; temp!=NULL; temp=temp->next, pos++)
     if(temp->info==num)
	return pos;
      return -1;
}
void insert(NODE *head,int num, int pos)
{
  NODE *newnode, *temp;
  int i;
  for(temp=head, i=1; (temp!=NULL)&&(i<=pos-1); i++)
    temp=temp->next;
  if(temp==NULL)
  {
     printf("Position is out of range");
     return;
  }
  newnode=(NODE *)malloc(sizeof(NODE));
  newnode->info=num;
  newnode->next=temp->next;
  temp->next=newnode;
}
void deletepos(NODE *head, int pos)
{
      NODE *temp, *temp1;
      int i;
      for(temp=head, i=1; (temp->next!=NULL)&&(i<=pos-1); i++)
	temp=temp->next;
      if(temp->next==NULL)
      {
	 printf("Position is out of range");
	 return;
      }
      temp1=temp->next;
      temp->next=temp1->next;
      free(temp1);
}
void deletevalue(NODE *head, int num)
{
    NODE *temp, *temp1;
    for(temp=head;temp->next!=NULL;temp=temp->next)
       if(temp->next->info==num)
       {
	  temp1=temp->next;
	  temp->next=temp1->next;
	  free(temp1);
	  return;
       }
	 printf("Element not found");
}
void sort(NODE *head)
{
   NODE *temp, *temp1;
   int num;
   for(temp=head->next; temp->next!=NULL; temp=temp->next)
     for(temp1=temp->next; temp1!=NULL; temp1=temp1->next)
       if(temp->info>temp1->info)
       {
	 num=temp->info;
	 temp->info=temp1->info;
       }
}
void main()
{
  NODE *head;
  int choice,n, pos;
  head=(NODE *)malloc(sizeof(NODE));
  head->next=NULL;
  do
  {
    printf("\n1: CREATE");
    printf("\n2: INSERT");
    printf("\n3: DELETE BY NUMBER");
    printf("\n4: DELETET BY POSITION:");
    printf("\n5: SEARCH");
    printf("\n6: DISPLAY");
    printf("\n7: SORT");
     printf("\n8: EXIT");
     printf("\nEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
      case 1:
	createlist(head);
	break;
      case 2:
	printf("\nEnter the element and position:");
	scanf("%d%d",&n,&pos);
	insert(head,n,pos);
	display(head);
	break;
     case 3:
       printf("\nEnter the element:");
       scanf("%d",&n);
       deletevalue(head,n);
       display(head);
       break;
    case 4:
	printf("\nEnter the position:");
	scanf("%d",&pos);
	deletepos(head,pos);
	display(head);
	break;
	case5:
	printf("\nEnter the element to be searched");
	scanf("%d",&n);
	pos=search(head,n);
	if(pos==-1)
	  printf("\nElement not found");
	else
	  printf("\nElement found at position %d",pos);
	break;
     case 6:
	 display(head);
	 break;
     case 7: sort(head);
	 display(head);
	 break;
    }
   } while(choice !=8);
}



