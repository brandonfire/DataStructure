#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
typedef struct Dlist {
	struct Dlist *Prev;
	struct Dlist *Next;
	int Ddata;
} Node;

Node * head = NULL;
Node * tail = NULL;
Node * CreatNewNode(int x);

void AddTail(int n);
void AddHead(int n);
void creatlist(int len);
void Print();
void RPrint();

#endif
