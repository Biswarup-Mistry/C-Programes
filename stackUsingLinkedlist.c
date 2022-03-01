//stack data structure using singly linked list in C language
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<stdbool.h>

struct node{
	int data;
	struct node *next;
};
	
struct node *last=NULL;
	
bool isEmpty(struct node* head){
	if(head==NULL){
		return(true);
	}
	else
		return(false);
}

struct node* getnode(struct node* head,int data){
	struct node* new=malloc (sizeof(struct node));
	new->data=data;
	new->next=NULL;
	head=new;
	last=new;	
	return(head);
}

struct node*  insert(struct node* head,int data){
	if(isEmpty(head)==true){
		head=getnode(head,data);
	}	
	else{
		struct node* new=malloc (sizeof(struct node));
		new->data=data;
		new->next=NULL;
		last->next=new;
		last=new;	
	}
	return(head);
}

struct node* delet(struct node* head){
	if(isEmpty(head)){
		printf("Empty Stack...\n");
	}
	else if(head->next!=NULL){
		struct node* ptr1=head;
		struct node* ptr2=ptr1;
		while(ptr1->next!=NULL){
			ptr2=ptr1;
			ptr1=ptr1->next;
		}
		printf("Deleted Data : %d\n",ptr1->data);
		ptr2->next=NULL;
		//last=ptr2;
		free(last);
		last=ptr2;
	}
	else if(head==last){
		printf("Deleted Data : %d\n",head->data);
		free(head);
		head=NULL;
		last=NULL;
	}
	return(head);
}

void display(struct node* head){
	struct node* ptr=malloc(sizeof(struct node));
	ptr=head;
	if(!isEmpty(head)){
		while(ptr!=NULL){
			printf("[%d]-->",ptr->data);
			ptr=ptr->next;
		}
		printf("[/]\n");
	}
	else{
		printf("Empty Stack...\n");
	}
}

int main(){
	int n,data,p;
	printf("\n\tStack Using Linked List\n");
	struct node *head=NULL;
	//struct node *last=NULL;
	do{
		printf("0.Exit\n1.Enter the Elements into the Stack\n2.Delete Element form Stack\n3.Display the Stack\n");
		scanf("%d",&p);
		switch(p){
			case 0:
			break;
			case 1:
			printf("Enter the Element :\n");
			scanf("%d",&data);
			head=insert(head,data);	
			break;
			case 2:
			head=delet(head);	
			break;
			case 3:
			display(head);
			break;
			default:	
			printf("Wrong Choise... Enter Again...\n");
			break;
		}
	}while(p!=0);
	return 0;
}