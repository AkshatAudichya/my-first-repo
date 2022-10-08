#include<stdio.h>
#include<process.h>
#include<stdlib.h>
 
#define MAX 5 //Maximum number of elements that can be stored
 
int top=-1,stack[78];
void push();
void pop();
void peek();
void display();
 
void main()
{
int ch;
while(1) //infinite loop, will end when choice will be 4
{
printf("\n** Stack Menu **");
printf("\n\n1.Push\n2.Pop\n3.peek\n4.Display\n5.Exit");
printf("\n\nEnter your choice(1-5):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: display();
break;
case 5: exit(0);
default: printf("\nWrong Choice!!");
}
}
}
 
void push()
{
int val;
if(top==78-1)
{
printf("\nStack is full!!");
}
else
{
top++;
printf("\nEnter element to push:");
scanf("%d",&val);
}
}
 
void pop()
{
	int val;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
scanf("%d",&val);
top=top-1;
}
}
 
void peek()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\n %d is at the top of the stack\n",stack[top]);
}
}
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}
