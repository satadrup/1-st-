#include<stdio.h>

#include<conio.h>
#include<stdlib.h>
struct node {
             int d;
             struct node *next;
};
struct node *head=NULL;
void create( )
{
   int a;
   struct node *temp,*curr;
   printf("enter your name");
   scanf("%d",&a);
   temp=(struct node*)malloc(sizeof(struct node*));
   temp->d=a;
   temp->next=NULL;
   if(head==NULL)
   {
    head=temp;
   }
   else{
    curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
   }
}
void display()
{
    struct node *p;
    p=head;
    while(p->next!=NULL)
    {
        printf("%d",p->d);
        p=p->next;
    }
}
void create_at_the_beggining()
{
    struct node *temp;
    int a;
    printf("enter your name");
    scanf("%d",&a);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->d=a;
    temp->next=NULL;
    temp->next=head;
    head =temp;
}
    void add_after_a_value()
{
    int x,ser;
    struct node *temp,*curr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter your name");
    scanf("%d",&x);
    temp->d=x;
    temp->next=NULL;
    curr=head;
    printf("\n Enter your number to be searched");
    scanf("%d", &ser);
    while(curr->next!=NULL);
    {
        if(curr->d==ser);
        {
            temp->next=curr->next;
            curr->next=temp;

        }x=1;
        
        
        
        
        
        {

        }
    }
    


    
    
}
    
    
