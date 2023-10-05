

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



*************************** next example ************************************


#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* Link;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->value << endl;
        n = n->Link;
    }
}

int main() {


    int Arr[] = { 4, 6, 3, 7, 55, 23, 63 };
    int size = sizeof(Arr) / sizeof(Arr[0]);  // 28 / 4

    cout << "sizeof Arr " << sizeof(Arr) << endl;
    cout << "sizeOf Arr[0] " << sizeof(Arr[0]) << endl;

    cout << "size of Arr[] " <<  size << endl; // 7


    const int SIZE = 7;
    Node nodes[SIZE];  // Declare an array of Node objects

    int values[] = { 4, 6, 3, 7, 55, 23, 63 };  // Values to be assigned to nodes

    for (int i = 0; i < SIZE; i++) {
        nodes[i].value = values[i];
        nodes[i].Link = (i < SIZE - 1) ? &nodes[i + 1] : NULL;
    }

    printList(nodes);  // Pass the address of the first node in the array

    return 0;
}
    
