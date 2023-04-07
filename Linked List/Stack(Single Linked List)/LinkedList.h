#pragma once
#include <malloc.h>


typedef struct Node Node;
struct Node {
	int Data;
	Node* Next;
};


void initNode(Node* node);

Node* newNode();

void freeNode(Node* node);

void freeAllNode(Node* HeadNode);

void insertNode(Node* dest, Node* newNode);
