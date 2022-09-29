DOUBLY LINKED LIST
The doubly linked list had two pointers.

In this case, each node is having 3 parts:-
a) the data part
b) Pointer to its previous node
c) Pointer to its next node

The first node will have null beacuse there is no previous node.

How to represent the node of a doubly linked list in a programm:-

Struct node
{
	int data;
Struct node *next;
Struct node *prev;
}
