#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        // constructor
        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }

        // destructor
        ~Node(){
            int value = this->data;
            if(next != NULL){
                delete next;
                next = NULL;
            }
            cout << "Memory is free for node with value " << value << endl;
        }
};

void linkedListTraversal(Node *head, Node* tail){

    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
    
    // cout << "head: " << head->data << endl;
    // cout << "tail: " << tail->data << endl;
}

void reversedTraversal(Node *head, Node *tail){
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    cout << "reversed traversal of linkedlist" << endl;
    Node *temp = tail;

    while(tail != NULL){
        cout << tail->data << " ";
        tail = tail->prev;
    } cout <<endl;
}

void insertAtTail(Node *&head, Node *&tail, int data){
    if(tail == NULL){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;

    } else {
        Node *nodeToInsert = new Node(data);
        tail->next = nodeToInsert;
        nodeToInsert->prev = tail; 
        tail = nodeToInsert;
    }
}

void insertAtHead(Node *&head, Node* &tail, int data){
    if(head == NULL){
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    } else {
        Node *nodeToInsert = new Node(data);
        nodeToInsert->next = head;
        head->prev = nodeToInsert;
        head = nodeToInsert;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    // insertin at first position
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // insert at end
    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    // insert inbetween
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int lengthOfLinkedList(Node *head){
    Node *temp = head;
    int length = 0;

    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

void deleteNode(Node* &head, int position){
    // deleting the first node
    if(position == 1){
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    } else {
        // deleting any node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->prev = NULL;

        delete curr;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;


    Node *head = NULL;
    Node *tail = NULL;
    
    // insertAtTail(tail, 20);
    // insertAtTail(tail, 30);
    // insertAtTail(tail, 40);

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    linkedListTraversal(head, tail);

    // int length = lengthOfLinkedList(head);
    // linkedListTraversal(head);
    // reversedTraversal(tail);
    // cout << "head: " << head->data << endl;
    // cout << "tail: " << tail->data << endl;
    // cout << "length: " << length << endl;


    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl << endl;
    // linkedListTraversal(head, tail);
    int position = 4;
    int value = 5;
    insertAtPosition(head, tail, position, value);
    linkedListTraversal(head, tail);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl << endl;

    deleteNode(head, 3);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl << endl;

    return 0;
}

