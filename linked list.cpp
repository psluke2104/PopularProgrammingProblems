#include <bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	Node *next;
	
	Node(int x){
		
		key = x;
		next = NULL;
		
	}
};

 Node *insertAtBegin(Node *head , int key){
	
	Node *temp = new Node(key);
	temp -> next = head;
	return temp;
}

Node *insertAtEnd(Node *head , int key){
	Node *temp = new Node(key);
	
	if(head==NULL)
	return new Node(key);
	while(temp->next !=NULL){
		temp = temp -> next;
	}
	temp ->next = new Node(key);
	return temp;
	

	
	
}



 void printList(Node *head){
 	Node *curr = head;
while(curr != NULL){
	cout<<curr->key<<" -> ";
	curr = curr->next;
} 	
 }
 
 
 
 int main(){
 	Node *head = NULL;
 	
	 head = insertAtBegin(head , 20);
	 head = insertAtBegin(head , 230);
	 head = insertAtBegin(head , 202);
	 head = insertAtEnd(head , 80);
	 printList(head);
 	

 	
 	
 	
 }

