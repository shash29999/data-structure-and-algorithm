/*
    Merge 2 Sorted Linked List Iteratively and Recursively
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
// Recursive Function
Node* Merge(Node* A, Node* B){
    Node* List = NULL;
    if(A == NULL)   return B;
    if(B == NULL)   return A;
    if(A->data <= B->data){
        List = A;
        List->next = Merge(A->next, B);
    }
    else{
        List = B;
        List->next = Merge(A, B->next);
    }
    return List;
}
// Iterative Function
Node* Merge2SortedLinkedList(Node* A, Node* B){
    Node* Head = NULL;
    if(A == NULL)   return B;
    else if(B == NULL)  return A;
    if(A->data > B->data){
        Head = B;
        Head->next = Merge2SortedLinkedList(A, B->next);
    }
    else{
        Head = A;
        Head->next = Merge2SortedLinkedList(A->next, B);
    }
    return Head;
}


void Print(Node* Head){
    Node* temp1 = Head;
    cout<< "The list is:  ";
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}

// Inserting the Node at Begining
Node* insertAtBeg(Node* Head, int x){    
    Node* temp = new (Node);
    temp->data = x;
    temp->next = NULL;
    if(Head != NULL) temp->next = Head;
    Head = temp;
    return Head;
}

int main()
{   
    Node* Head1 = NULL, *Head2 = NULL;
    for(int i = 100; i > 0; i-= 10){
        int x = i;
        Head1 = insertAtBeg(Head1, x);
        
    }
    Print(Head1);
    for(int i = 60; i > 0; i-=10){
        int x = i; 
        Head2 = insertAtBeg(Head2, x);        
    }
    Print(Head2);  
    cout << "Merged Array "<<endl;
    Node* Head = Merge2SortedLinkedList(Head1, Head2);
    Print(Head);
}
