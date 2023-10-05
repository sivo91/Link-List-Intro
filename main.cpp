

#include <iostream>
using namespace std;


class Node
{
public: 
    int value;
    Node* Link; // or Next
};


void printList(Node*n)
{
    while (n!= NULL) {
        cout << n->value << endl;
        n = n->Link;
   }
}


int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    
    head->value = 31;
    head->Link = second;

    second->value = 14;
    second->Link = third;

    third->value = 35;
    third->Link = NULL;

    printList(head);

    return 0;
}


/*
 31
 14
 35
*/
