/*
    Swap Nodes in Pairs in Linked List Iteraytive and Recursive
*/
#include<bits/stdc++.h>
using namespace std;

struct  Node
{
    int data;
    Node* next;
};

Node* Insert(Node* Head, int pos, int val){
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;    
    Node* temp1;
    temp1 = Head;      
    
    if(Head == NULL){
        
        Head = temp;
    }
    else
    {
        for(int i = 1; i < pos-1; i++){
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;        
    }   
    return Head;   
}

// Print Using Recursion !!!!!!!!!!
void Print(Node* Head){
    if(Head == NULL)    return;
    cout << Head->data << " ";
    Print(Head->next);
}
// recursive O(n)
Node* swapPairsRecursive(Node* head) {
    if(head == NULL || head->next == NULL)  return head;
    Node* a, *b, *c, *current;
    a = head;
    b =a->next;
    c =b->next;
        
    b->next = a;
    current = b;
    a->next = swapPairsRecursive(c);
    return current;
}

// Iterative O(n)
Node* swapPairsI(Node* head) {
    if(head == NULL || head->next == NULL)  return head;
    Node* current = head, *Next = head->next,*prev;
    current->next = Next->next;
    prev = Next->next = current;
    current = current->next;
    head = Next;
    while(current && current->next){
        Next = current->next;
        current->next =Next->next;
        Next->next = current;
        prev->next = Next;
        prev = current;
        current = current->next;
    }
    return head;
}

int main(){
    srand(time(NULL));
    Node* Head = NULL;
    int n, x;
    cout<< "How many Numbers you want to Enter ? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        x = rand()%100;
        Head = Insert(Head, i+1, x);
    }
    Print(Head);
    cout << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------"  <<endl;
    Head = swapPairsI(Head);  
    Print(Head);
    cout << endl;
}