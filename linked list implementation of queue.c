#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
 int info;
 struct node *next;
};
struct node *rear=NULL;
struct node *front=NULL;
void insert(int item);
void delete();
void display();
void main()
{
 int choice,item;
 printf("1.INSERT\n");
 printf("2.DELETE\n");
 printf("3.DISPLAY.\n");
 printf("4.EXIT.\n");
 while(1){
 printf("\nENTER YOUR CHOICE:");
 scanf("%d",&choice);
 switch(choice){
 case 1:
 printf("enter the element to be inserted:");
 scanf("%d",&item);
 insert(item);
 break;
 
 case 2:
 delete();
 break;
 
 case 3:
 display();
 break;
 
 case 4:
 exit(0);
 break;
 
 default:
 printf("\nWRONG CHOICE.");
 }
 
 }
 
}
void insert(int item){
 struct node *ptr;
 ptr=(struct node*)malloc(sizeof(struct node));
1
 if(ptr==NULL){
 printf("\nMEMORY NOT AVALIABLE.");
 }
 else if(rear==NULL){
 ptr->info=item;
 ptr->next=NULL;
 front=ptr;
 rear=ptr;
 }
 else{
 ptr->info=item;
 ptr->next=NULL;
 rear->next=ptr;
 rear=ptr;
 }
 printf("INSERTION SUCCESSFUL.");
}
void delete(){
 struct node *temp;
 if(front==NULL){
 printf("\nQUEUE IS EMPTY.");
 }
 else{
 temp=front;
 front=front->next;
 printf("\ndeleted element is:%d",temp->info);
 free(temp);
 }
}
void display(){
 struct node *ptr;
 ptr=front;
 if(front==NULL){
 printf("\nQUEUE IS EMPTY.");
 }
 else{
 printf("\nQUEUE IS:\n");
 while(ptr!=NULL){
 printf("%d\t",ptr->info);
 ptr=ptr->next;
 }
 }
}
2