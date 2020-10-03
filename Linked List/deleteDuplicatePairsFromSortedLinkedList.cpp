/*
    Given a sorted linked list, delete all duplicates such that each element appear only once.
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* Merge2SortedLinkedList(Node* A, Node* B){
    Node* Head = NULL;
    if(A == NULL)   return B;
    else if(B == NULL)  return A;
    if(A->data > B->data){
        Head = B;
        Head->link = Merge2SortedLinkedList(A, B->link);
    }
    else{
        Head = A;
        Head->link = Merge2SortedLinkedList(A->link, B);
    }
    return Head;
}


void Print(Node* Head){
    Node* temp1 = Head;
    cout<< "The list is:  ";
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->link;
    }
    cout << endl;
}

// Inserting the Node at Begining
Node* insertAtBeg(Node* Head, int x){    
    Node* temp = new (Node);
    temp->data = x;
    temp->link = NULL;
    if(Head != NULL) temp->link = Head;
    Head = temp;
    return Head;
}
Node* deleteDuplicates(Node* head) {
    if(head == NULL)    return head;
    Node* a = head, *b = head->link;
    while(b){
        if(a->data < b->data){
            a->link = b;
            a = a->link;
            b = b->link;
        }  
        else{
            b = b->link;
        }
    }
    a->link = NULL;
    return head;
        
}



int main()
{   
    Node* Head1 = NULL, *Head2 = NULL;
    for(int i = 100; i > 0; i-= 10){
        int x = i;
        Head1 = insertAtBeg(Head1, x);
        
    }
    Print(Head1);
    for(int i = 100; i > 0; i-=10){
        int x = i; 
        Head2 = insertAtBeg(Head2, x);        
    }
    Print(Head2);  
    cout << "Merged List "<<endl;
    Node* Head = Merge2SortedLinkedList(Head1, Head2);
    Print(Head);
    Head = deleteDuplicates(Head);
    cout<<"After removal of Dulipcates " << endl;
    Print(Head);
    cout<<endl;
}
