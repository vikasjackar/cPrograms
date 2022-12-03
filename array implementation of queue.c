#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
int Q[MAX];
int front=-1;
int rear=-1;
void insert(int item);
int delete();
void display();
void main(){
 int choice,item;
 printf("1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.EXIT.");
 while(1){
 printf("\nENTER YOUR CHOICE:");
 scanf("%d",&choice);
 switch(choice){
 case 1:
 printf("\nenter the elements to be inserted:");
 scanf("%d",&item);
 insert(item);
 break;
 
 case 2:
 printf("deleted element is:%d",delete());
 break;
 
 case 3:
 display();
 break;
 
 case 4:
 exit(0);
 
 default:
 printf("\nWRONG CHOICE.");
 }
 }
}
void insert(int item){
 if(rear==MAX-1){
 printf("\nOVERFLOW.");
 }
 else if(rear==-1 && front==-1){
 rear=rear+1;
 Q[rear]=item;
 front=front+1;
 }
 else{
 rear=rear+1;
 Q[rear]=item;
 }
 printf("\ninsertion successful.");
}
int delete(){
 int x;
 if(rear==-1 || front==rear+1){
 printf("\nunderflow.");
 }
 else{
 x=Q[front];
 front=front+1;
 return x;
 }
}
void display(){
 int i;
 if(rear==-1 || front==rear+1){
 printf("\nQueue is empty.");
 }
 else{
 printf("\nQUEUE IS:\n");
 for(i=front;i<=rear;i++){
 printf("%d\t",Q[i]);
 }
 }
}
