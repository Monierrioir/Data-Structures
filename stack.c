#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};

//top
struct node *top = NULL;

//add value
int create(int value){
    //list empty
    if(top == NULL){
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->value = value;
        n->next = NULL;
        top = n;
    }
    //list is not empty
    else{
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->value = value;
        n->next = top;
        top = n;
    }
    return 1;
}

//delete value
int dlt(){
    //list is empty
    if(top == NULL){
        printf("List is empty.\n");
        return 1;
    }
    struct node *del = top;
    top = top->next;
    free(del);
    return 1;
}
//insert 
int insert(int value,int loc){
if(loc==0){
	create(value);
	return 1;
}
	//find locatio n fin oluştur   fin nexti yeni 
	struct node *fin=top;
	fin=fin->next;
  
	
	struct node *n=(struct node *)malloc(sizeof(struct node));
	n->value=value;
	n->next=fin->next;
   fin->next=n;
	
	return 1;
}
//print list
int print(){
    //list is empty
    if(top == NULL){
        printf("List is empty.\n");
        return 1;
    }
    struct node *i = top;
    while(i != NULL){
        printf("%d ", i->value);
        i = i->next;
    }
    printf("\n");
    return 1;
}

//main
int main(){
    create(5);
    print();
    create(6);
    create(7);
    print();
    dlt();
    print();
    insert(4,0);
    print();
    insert(2,2);
    print();
    return 0;
}

