#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
        }

        ~Node(){
            int value = this->data;
            if(this != NULL){
                delete next;
                next = NULL;
            }
            cout << "Memory is free for node with value " << value << endl;
        }
};

void insertNode(Node *&tail, int element, int data){
    // empty list
    if(tail == NULL){
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;

    } else {
        // non-empty list
        Node *curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void linkedListTraversal(Node *tail){
    Node *temp = tail;

    if(temp == NULL){
        cout << "List is empty :(" << endl;
        return;
    }

    do{
        cout << tail->data  << " ";
        tail = tail->next;

    } while(tail != temp);

    cout << endl;
}

void deleteNode(Node *&tail, int element){
    if(tail == NULL){
        cout << "List is empty, please check again." << endl;
        return;

    } else {
        Node *prev = tail;
        Node *curr = prev->next;

        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node case
        if(curr == prev){
            tail = NULL;
        }

        // >= 2 node case
        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool detectLoop(Node *head){
    if(head == NULL){
        return false;
    }

    map<Node *, bool> visited; 
    Node *temp = head;

    while(temp != NULL){
        if(visited[temp] == true){
            return true;

        } 
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    Node *tail = NULL;
    insertNode(tail, 5, 3);
    linkedListTraversal(tail);
    
    insertNode(tail, 3, 5);
    linkedListTraversal(tail);

    // insertNode(tail, 5, 7);
    // linkedListTraversal(tail);

    // insertNode(tail, 5, 6);
    // linkedListTraversal(tail);

    // insertNode(tail, 3, 4);
    // linkedListTraversal(tail);

    // deleteNode(tail, 3);
    // linkedListTraversal(tail);
    

    return 0;
}