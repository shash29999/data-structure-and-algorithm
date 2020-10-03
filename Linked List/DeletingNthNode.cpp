// Deleting the nth node
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

Node* Delete(Node* Head, int pos){
    Node* temp = Head;
    if(pos == 1){
        Head = temp->next;
        delete(temp);
        return Head;
    }
    for(int i = 0; i< pos -2; i++){
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
    return Head;

}

int main(){
    srand(time(NULL));
    Node* Head = NULL;
    int n, x, pos = 0, wish = 1;
    cout<< "How many Numbers you want to Enter ? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        pos++;
        x = rand()%100;
        Head = Insert(Head, pos, x);
        Print(Head);
    }

    while (wish != 0)
    {
        cout<< "which node u want to delete: ";
        cin >> pos;
        Head = Delete(Head, pos);
        Print(Head);
        cout << "Do you wish to delete more ?: ";
        cin >> wish;
    }
    
}