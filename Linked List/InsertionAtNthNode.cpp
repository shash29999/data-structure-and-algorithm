// Inserting the Node at nth Position
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
    Node* temp1 = Head;
    cout<< "The list is:  ";
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}

int main(){
    Node* Head = NULL;
    int n, x, pos;
    cout<< "How many Numbers you want to Enter ? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout<< "Input the Number: ";
        cin >> x;
        cout<< "Input the Position: ";
        cin >> pos; 
        Head = Insert(Head, pos, x);
        Print(Head);
    }

}