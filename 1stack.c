// Header File
#include<stdio.h>

// Function Call
void push();
void pop();
void display();

// Variable and stack diclaration
int stack[100],number,choice,top,i,item;

// Main Code
int main(){
	
	top = -1;
	
	printf("\nEnter the size of stack = ");
	scanf("%d",&number);
	
	do {
		
		printf("\nEnter choice");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\n");
		
		printf("\nEnter the choice = ");
		scanf("%d",&choice);
		
		switch ( choice ){
			
			case 1:
				push();
				break;
			
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
				
			case 4:
				break;
			
			default :
				printf("\nEnter the valid choice");
				break;
			
		}
				
			
	} while ( choice != 4 );
		
}
	
// Function Push

void push(){
	
	if ( top == number-1 ){
		
		printf("\nStack is Overflow");
		
	}
	
	else{
		
		printf("\nEnter a number that you want to insert in stack = ");
		scanf("%d",&item);
		top++;
		stack[top] = item;
		
	}
	
}	

// Function Pop

void pop(){
	
	if ( top >=0 ){
		
		printf("\nDeleted Elements  = %d",stack[top]);
		top--;
		
	}
	
	else{
		
		printf("\nStack is Underflo");
		
	}
	
	
}

// Function Display

void display(){
	
	for ( i = top; i >= 0; i-- ){

	printf("\nElements in stack is = %d",stack[i]);
		}
}
	
	
	
	
	
	
	
	

