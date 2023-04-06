/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* temp = NULL;

void insert()
{
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    
    if(head==NULL)
    {
        head=new;
        temp=new;
    }
    else
    {
        temp->next=new;
        temp=new;
    }
}

void printlist()
{
    struct node* new;
    new=head;
    if(head==NULL)
    {
        printf("empty list\n");
    }
    else
    {
        printf("list is:");
        while(new!=NULL)
        {
            printf("%d-->",new->data);
            new=new->next;
        }
        printf("NULL\n");
        
    }
}

void delete()
{
    struct node* new;
    
    if(head== NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        new=head;
        while(new->next->next != NULL)
        {
            new=new->next;
        }
        new->next=NULL;
        temp=new;
        printf("Deletion successful");
    }
}

void search()
{
    struct node* new;
    int value;
    bool t=false;
    scanf("%d",&value);
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        new=head;
        while(new== NULL )
        {
            if(new->data == value)
            {
            t=true;
            }
            new=new->next;
        }
        if(t == true)
        printf("Present\n");
        else
        printf("Absent\n");
    }
}

int main()
{
    
    printf("----------CHOICES------------\n");
    printf("1.insert\n2.delete\n3.search\n4.print list\n5.end\nchoices:");
    int choice;
    
    while(1)
    {
    printf("enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        insert();
        break;
        
        case 2:
        delete();
        break;
        
        case 3:
        search();
        break;
        
        case 4:
        printlist();
        break;
        
        case 5:
        exit(0);
        
        default:
        printf("Wrong choice");
    }
    }

    return 0;
}
