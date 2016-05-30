#include "list.h"

Node * CreatNewNode(int x){
	Node * newnode = (Node *)malloc(sizeof(Node));
	newnode->Ddata = x;
	newnode->Prev = NULL;
	newnode->Next = NULL;
	return newnode;
}

void AddTail(int n){
	Node * new;
	new = CreatNewNode(n);
	if(head==NULL){
		head = new;
		tail = new;
	} else {
		//Node * tem = tail;
		tail->Next=new;
		new->Prev=tail;
		tail = new;
	}
}
void AddHead(int n){
	Node * new;
	new = CreatNewNode(n);
	if(head==NULL){
		head=new;
		tail=new;
	} else {
		head->Prev = new;
		new->Next=head;
		head=new;
	}
}
void creatlist(int len){
	int i;
	for(i=0;i<len;i++){
		AddHead(i);
	}
}

void Print(){
	Node * tem;
	tem = head;
	if (head==NULL){
		return;
	}
	while(tem!=NULL){
		printf("%d,\n",tem->Ddata);
		tem=tem->Next;
	}
}
void RPrint(){
	Node * tem;
	tem = tail;
	if (head==NULL){
		return;
	}
	while(tem!=NULL){
		printf("%d,\n",tem->Ddata);
		tem=tem->Prev;
	}
}
int main(int argc, char** argv){

	creatlist(100);
	Print();
	RPrint();
}
