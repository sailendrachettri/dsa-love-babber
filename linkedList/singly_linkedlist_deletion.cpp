#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        // constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        // destrocture
        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout << "Memory is free for node with value " << value << endl;
        }
};

void insertAtTail(Node *&tail, int data){
    Node *nodeToInsert = new Node(data);

    tail->next = nodeToInsert;
    tail = nodeToInsert;
}

void linkedListTraversal(Node *&head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    } cout <<endl;
}

void deleteNode(Node* &head, int position){
    // deleting the first node
    if(position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    } else {
        // deleting any node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while(cnt < position){ // <=
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    linkedListTraversal(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    deleteNode(head, 4);
    linkedListTraversal(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}