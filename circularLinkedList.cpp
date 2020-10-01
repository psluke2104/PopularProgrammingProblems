#include <bits/stdc++.h> 
using namespace std;


struct Node{
	int data ;
	struct Node* next;
};
void insertAtBegin(struct Node **head , int data)
{
	
	if(head == NULL){
		struct Node* temp = new Node;
		temp ->data = data;
		temp ->next = NULL;
		(*head) = temp;
	}
	struct Node* temp = new Node;
	temp->data = data;
	temp->next = (*head);
	(*head)= temp;
	return;
	
}

void printMiddle(Node **head){
	struct Node* slow;
	struct Node* fast;
	if(head == NULL)return;
	 slow = (*head);
	  fast = (*head);
	while(fast != NULL && fast->next!= NULL){
		slow = slow->next;
		fast = fast->next->next;
		
	}
	cout<<(slow->data);
	
	
	
}
int main(){
	struct Node* head = NULL;
	insertAtBegin(&head , 1);
		insertAtBegin(&head , 2);
			insertAtBegin(&head , 4);
				insertAtBegin(&head , 8);
					insertAtBegin(&head , 16);
					insertAtBegin(&head , 16);
					insertAtBegin(&head , 16);
	
	printMiddle(&head);				
	
	
	
	
	
	
	
	
	return 0;
}

