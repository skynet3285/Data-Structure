#include <stdio.h>
#include "Stack.h"


int main(void)
{
	Node* HeadNode = newNode();
	
	push(HeadNode, 1);
	push(HeadNode, 2);
	push(HeadNode, 5);

	for (int i = 0; i < 3; ++i)
	{
		printf("%d \n", pop(HeadNode));
	}

	freeAllNode(HeadNode);
	return 0;
}

