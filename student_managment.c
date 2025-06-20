#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char name[30];
    int roll;
    char course[30];
    int total_marks;
    struct student *next;
};
struct student *head=NULL;
void create()
{
    
    struct student *temp,*curr;
    temp=(struct student*)malloc(sizeof(struct student));
    temp->next=NULL;
    printf("\n enter your name:--");
    fgets(temp->name, 30, stdin);
    printf("enter your roll number");
    scanf("%d",temp->roll);
    printf("enter the  course in which you are enrolled");
    fgets(temp->course,30, stdin);
    printf("enter total marks");
    scanf("%d", temp->total_marks);
    if(head== NULL)
    {
      head=temp;
    }
    else{
        curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        } 
        curr->next=temp;
    } 
    printf("Record inserted successfully");
}

void delete_at_the_begining()
{ int roll;
    struct student *temp,*curr;
    scanf("%d",&roll);
    curr=head;
 if(curr->next->roll==roll)
 {
  temp=curr->next;
  curr->next=temp->next;
  free(temp);
 }
}
void delete()
{    
    int roll;
    struct student *temp,*curr;
    printf("enter your roll--");
    scanf("%d",&roll);
    curr=head;
    while (curr->next!=NULL);
    {
        if (curr->next->roll==roll)
        {
            temp=curr->next;
            curr->next=temp->next;
            free(temp);
        }
        else
        {    
         delete_at_the_begining();
        }
        
            
    }
    
    
}

void search_student_records()
{ int a;
struct student *temp = head;
    printf("enter students roll to delete data");
    scanf("%d",&a);
    while (temp->next!=NULL)
    {
        if(a == temp->roll)
        {
            printf("%S",temp->name);
            printf("%d",temp->roll);
            printf("%s",temp->course);
            printf("%d",temp->total_marks);
        }
        else
        {
          printf("Data does not exists");
        }
    }
    
}
void all_record_show()
{
    struct student *a=head;
    while(a->next!=NULL)
    {
        a=a->next;
          printf("%S",a->name);
          printf("%d",a->roll);
          printf("%s",a->course);
          printf("%d",a->total_marks);
    }


}
void main()
{    int choice;
    printf("enter your choice\n 1:to create a new record\n 2:to delete a student record\n 3:to search a student record\n 4:to view all student record\n 5:to exit");
    scanf("%d",&choice);
    while (1)
    {
    switch(choice)
    {
       
        case 1:create();
            break;
        case 2:delete();
             break;
        case 3:search_student_records();
            break;
        case 4:all_record_show();
            break;
        case 5:exit(0);
            break; 
            default:printf("enter a valid option");
       }        
    }
}