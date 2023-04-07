#include "Stack.h"


void insertHeadToNode(Node * HeadNode, Node * newNode)
{
	insertNode(HeadNode, newNode);
}

int pop(Node* HeadNode)
{
	Node* popNode = HeadNode->Next;
	if (popNode == NULL)
	{
		printf("Stack is Empty \n");
		return -9999999999;
	}

	else
	{
		int popTemp = popNode->Data;

		HeadNode->Next = popNode->Next;

		freeNode(popNode);

		return popTemp;
	}
}

void push(Node* HeadNode, int Data)
{
	Node* nNode = newNode();

	nNode->Data = Data;

	insertHeadToNode(HeadNode, nNode);
}
