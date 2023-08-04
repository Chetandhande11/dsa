// Header file
#include<stdio.h>

// Function call
void insert();
void delete();
void display();

// Variable and queue declaration
#define MAX 4
int queue[MAX],choice,i,item;
int rear = -1;
int front = -1;

// Main code
int main(){
	
	do {
		
		printf("\nEnter choice");
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");
		
		printf("\nEnter the Choice = ");
		scanf("%d",&choice);
		
		switch ( choice ){
			
			case 1:
				insert();
				break;
			
			case 2:
				delete();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				break;
				
			default:
				printf("\nEnter the valid Choice");
				break;
			
		}
		
		
	}  while ( choice != 4 );
	
}

// Function insert

void insert(){
	
	if ( rear == MAX-1 ){
		
		printf("\nQueue is Overflow");
		
	}
	
	else{
		
		if ( front ==- 1 )
		front = 0;
		printf("\nEnter the element that you want insert in queue  = ");
		scanf("%d",&item);
		rear++;
		queue[rear] = item;
	}
	
}

// Function of Delete

void delete(){
	
	if ( front ==- 1 || front > rear ){
		
		printf("\nQueue is Underflow");
		
	}
	
	else{
		
		printf("\nDeleted Elements = %d",queue[front]);
		front++;
		
	}
	
}

void display(){
	
	for ( i = front; front<=0; i++ ){
		
		printf("\nElements in queue = %d",queue[i]);
		
	}
	
}


