#include<iostream>
using namespace std;

//Single Linked List Implementation
struct Node{
	int data;
	Node* next;
};
//Node *headg=NULL;
Node* Insert(Node* head,int x,int pos,int n){
	Node *temp1=new Node();
	temp1->data=x;
	temp1->next=NULL;
	if(pos==1)
	{
		temp1->next=head;
		head=temp1;
		return head;
	}
	if(pos>=n  )
	{
		cout<<"Invalid Position"<<endl;
		return NULL;
	}
	Node* temp2=head;
	for(int i=0;i<pos-2;i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	return head;
}
void Print(Node *head){
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main(){
Node *head = NULL;
int x;
int pos;
int n;
cout<<"Enter Number of Elements : "<<endl;
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter the Number to Insert : "<<endl;
cin>>x;
cout<<"Enter the Position to Insert : "<<endl;
cin>>pos;
head=Insert(head,x,pos,n);	
//Print(head);
}
Print(head);
}
