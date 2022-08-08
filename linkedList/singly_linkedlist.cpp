#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void linkedListTraversal(Node *&head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    } cout << endl;
}

int sizeOfLinkedList(Node *&head){
    int count = 0;
    Node *temp = head;

    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtHead(Node *&head, int data){
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = head;
    head = nodeToInsert;
}

void insertAtTail(Node *&tail, int data){
    Node *nodeToInsert = new Node(data);
    tail->next = nodeToInsert;
    tail = nodeToInsert;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;    
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

/*
    // linkedListTraversal(head);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    linkedListTraversal(head);
*/

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    linkedListTraversal(head);

    // int size = sizeOfLinkedList(head);
    insertAtPosition(head, tail, 6, 15);
    linkedListTraversal(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;


    return 0;
}