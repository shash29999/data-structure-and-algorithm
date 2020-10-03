/*
    Reverse using recursion
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

void Print(Node* Head){
    cout<< "The list is:  ";
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}
// Reverse using recursion
Node* Reverse(Node* Head){
    if(Head->next == NULL)  return Head;
    Node* A = Reverse(Head->next);
    Node* B = Head->next;
    B->next = Head;
    Head->next = NULL;
    return A;
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
    cout << "-----------------------------------------------------------------------------------------------------------------"  <<endl;
    cout<< "After Reversing : \n";  
    Head =Reverse(Head);  
    Print(Head);
}