#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
};

void push(Node** head_ref, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref) ;
	(*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data){
	if(prev_node==NULL){
		cout<<"the given node cannot be NULL";
		return;
	}
	Node* new_node= new Node();
	new_node->data= new_data;
	new_node->next= prev_node->next;
	prev_node->next=new_node;
}
void atEnd(Node** head_ref, int new_data){
	Node* new_node = new Node();
	Node *last = *head_ref;
	new_node->data= new_data;
	new_node->next=NULL;
	if(*head_ref==NULL){
		*head_ref= new_node;
		return;
	}
	while(last->next !=NULL){
		last=last->next;
		
		last->next=new_node;
		return;
	}
}
void printList(Node* n ){

while(n!= NULL){
	cout<< n->data<<" ";
	n = n->next;
}
}
int main(){
	
	Node* head = NULL;
	Node* second= NULL;
	Node* third= NULL;

	head = new Node();
	second = new Node();
	third = new Node();
	
	head->data= 1;
	head->next= second;
	
	second->data= 2;
	second->next = third; 
	third->data= 3;
	third->next= NULL;
	push(&head, 4);
	insertAfter(head->next, 5);
	atEnd(&head,6);
	
	
	printList(head);
	return 0;
}

