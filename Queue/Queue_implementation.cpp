#include <bits/stdc++.h> 
using namespace std; 

struct node 
{ 
	int data; 
	node* next; 
	node(int d) 
	{ 
		data = d; 
		next = NULL; 
	} 
}; 

struct Queue { 
	node *front, *rear; 
	Queue() 
	{ 
		front = rear = NULL; 
	} 
	void enQueue(int x) 
	{ 

		 
		node* temp = new node(x); 

		 
		if (rear == NULL) { 
			front = rear = temp; 
			return; 
		} 

		 
		rear->next = temp; 
		rear = temp; 
	} 

	 
	void deQueue() 
	{ 
		 
		if (front == NULL) 
			return; 

	 
		node* temp = front; 
		front = front->next; 

	
		if (front == NULL) 
			rear = NULL; 

		delete (temp); 
	} 
}; 


int main() 
{ 

	Queue q; 
	q.enQueue(10); 
	q.enQueue(20); 
	q.deQueue(); 
	q.deQueue(); 
	q.enQueue(30); 
	q.enQueue(40); 
	q.enQueue(50); 
	q.deQueue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
} 
