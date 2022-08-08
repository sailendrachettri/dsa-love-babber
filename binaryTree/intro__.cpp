#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node *right;
    
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root){
    cout << "Enter the data for node: "; 
    int data; cin >> data;
    root = new node(data);

    if(data == -1)
        return NULL;
    
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderedTraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
 
    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        if(temp == NULL){ // level traversal complected
            cout << endl; // enter mar do
            if(!q.empty()){
                q.push(NULL);
            }
        } else {
            cout << temp-> data << " ";

            if(temp->left != NULL)
                q.push(temp->left);

            if(temp->right != NULL)
                q.push(temp->right); 
        }


    } 
    cout << endl;
}

void inOrderTraversal(node *root){
    // LNR - left -> node -> right
    // base case
    if(root == NULL)
        return;
    
    inOrderTraversal(root->left);
    cout << root->data << " ";

    inOrderTraversal(root->right);
}
    
void preOrderTraversal(node *root){
    // NLR -  node -> -> left -> right
    // base case
    if(root == NULL)
        return;
    
    cout << root->data << " ";

    preOrderTraversal(root->left);

    preOrderTraversal(root->right);
}
void postOrderTraversal(node *root){
    // LRN - left -> right -> node
    // base case
    if(root == NULL)
        return;
    
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout << root->data << " ";
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    node *root = NULL;
    root = buildTree(root);

    cout << "Printing data values" << endl << endl;
    levelOrderedTraversal(root);


    cout << endl << endl;
    cout << "Inorder traversal" << endl;
    inOrderTraversal(root);

    cout << endl << endl;
    cout << "Preorder traversal" << endl;
    preOrderTraversal(root);

    cout << endl << endl;
    cout << "Postorder traversal" << endl;
    postOrderTraversal(root);

    return 0;
}
