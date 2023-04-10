#include<stdio.h>
#include <stdlib.h>

//list of queue
struct node {
	int value;
	struct node *next;
};
//front and rear
struct node *front= NULL;
struct node *rear= NULL;

int create (int value){
	//if list empty
	if (front==NULL){
		struct node *new =(struct node *)malloc(sizeof(struct node));
		new->value=value;
		new->next=NULL;
		front=rear=new;
	}
//list is not empty
else{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->value=value;
	new->next=NULL;
	rear->next=new;
	rear=new;
}		
}
//delete value
int delete(){
	//if list is empty
	if(front==NULL){
	printf("List is empty.There is no element in here.\n");
	return 1;
	}
//list is not empty
else{

		struct node *del =front;
		front=front->next;
		free(del);
	return 1;
	
}	
}

//yeni node sona ekle  rear null 
int insert(int value,int loc){
	struct node*n=(struct node*)malloc(sizeof(struct node));
	n->value=value;
	n->next=NULL;
	
	if(front==NULL){
		front=rear=n;
		
	}
	else{
		rear->next=n;
		rear=n;
			
	}

	
	
	return 1;
}	
	
//print list
int print(){

	//list is empty
	
	if(front==NULL){
		printf("List is empty.\n");
		return 1;
				
	}
	struct node *i =front;	
	while (i!=NULL){
		printf("%d  ",i->value);
		i=i->next;
			
	}
	return 1;
	
}

int main()
{
	create(5);
	printf("\n");
	print();
	create(4);
	printf("\n");
	print();
	create(9);
	printf("\n");
	print();
	insert(7,1);
	printf("\n");
	print();
	delete();
	printf("\n");
	print();
	insert(8,2);
	printf("\n");
	print();	
	return 0;
}














