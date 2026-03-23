#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();

int main()
{
	printf("Enter the number of elements in the stack:");
	scanf("%d",&n);
	printf("\n.....Stack operations using arrays.....\n\n");
	while(choice!=4)
	{
		printf("\nChoose one from the below options:\n\t");
		printf("\n\t 1-Push \n\t 2-Pop \n\t 3-Show \n\t 4-Exit\n\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:show();
				break;
			case 4:
				printf("Exiting from the program...\n");
				return 0;
				break;
			default:printf("Invalid choice.Please enter a valid choice\n");
				break;
		}
	}
}
void push()
{
	int val;
	if(top==n-1)
	{
		printf("Overflow\n");
	}
	else
	{
		printf("Enter the value:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
void pop()
{
	if(top==1)
	{
		printf("Undeflow\n");
	}
	else
	{
		top=top-1;
	}
}
void show()
{
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	if(top==1)
	{
		printf("Stack is empty\n");
	}
}
