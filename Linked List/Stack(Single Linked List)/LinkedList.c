#include "LinkedList.h"


void initNode(Node* node)
{
	node->Data = 0;
	node->Next = NULL;
}

Node* newNode()
{
	Node* temp = (Node*)malloc(sizeof(Node));

	initNode(temp);
	return temp;
}

void freeNode(Node* node)
{
	free(node);
}

void freeAllNode(Node* HeadNode)
{
	Node* curNode = HeadNode;
	Node* delNode = NULL;

	while (curNode->Next != NULL)
	{
		delNode = curNode;
		curNode = curNode->Next;

		freeNode(delNode);
	}
	freeNode(curNode);
}

void insertNode(Node* dest, Node* newNode)
{
	Node* temp = dest->Next;
	dest->Next = newNode;
	newNode->Next = temp;
}
