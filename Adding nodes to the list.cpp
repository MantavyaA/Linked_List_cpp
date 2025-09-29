#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
    
    Node(int data){
        val=data;
        next=NULL;
    }
};

int main() {
    Node*n1=new Node(15);
    Node*n2=new Node(25);
    Node*n3=new Node(35);
    
    n1->next=n2;
    n2->next=n3;
   
    
    Node*temp=n1;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    return 0;
}

// Expected Output:
15 25 35



