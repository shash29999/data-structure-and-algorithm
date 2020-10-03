// Inserting the Node at Begining
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* insertAtBeg(Node* Head, int x);
void Print(Node* Head);



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


Node* insertAtBeg(Node* Head, int x){    
    Node* temp = new (Node);
    temp->data = x;
    temp->link = NULL;
    if(Head != NULL) temp->link = Head;
    Head = temp;
    return Head;
}


int main()
{
    Node* Head = NULL;
    int n, x;
    cout<< "How many Numbers you want to Enter ? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout<< "Input the Number: ";
        cin >> x; 
        Head = insertAtBeg(Head, x);
        Print(Head);
    }  

}