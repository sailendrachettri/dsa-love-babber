#include <iostream>
#include <queue>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
    
        Node(int data)
        {
            this->data = data;
            this->left = left;
            this->right = right;
        }
};

void inOrderTraversal(Node *root){
    // LNR - left -> node -> right
    // base case
    if(root == NULL)
        return;
    
    inOrderTraversal(root->left);
    cout << root->data << " ";

    inOrderTraversal(root->right);
}
    
void preOrderTraversal(Node *root){
    // NLR -  node -> -> left -> right
    // base case
    if(root == NULL)
        return;
    
    cout << root->data << " ";

    preOrderTraversal(root->left);

    preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root){
    // LRN - left -> right -> node
    // base case
    if(root == NULL)
        return;
    
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout << root->data << " ";
}

void levelOrderedTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
 
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if(temp == NULL)
        { // level traversal complected
            cout << endl; // enter mar do
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp-> data << " ";

            if(temp->left != NULL)
                q.push(temp->left);

            if(temp->right != NULL)
                q.push(temp->right); 
        }
    } 
    cout << endl;
}

Node* insertIntoBST(Node* root, int data)
{
    // base case
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(data > root->data)
        root->right = insertIntoBST(root->right, data);
    else
        root->left = insertIntoBST(root->left, data);
    
    return root;
    
}

void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while(data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int minVal(Node *root)
{
    Node *temp = root;

    while(temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp->data;
}

int maxVal(Node *root)
{
    Node *temp = root;

    while(temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp->data;
}

Node *deleteFromBST(Node *root, int value)
{
    // base case
    if(root == NULL)
        return NULL;
    
    if(root->data == value)
    {
        //0 child case
        if(root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }
        
        //1 child case
        // left
        if(root->left != NULL and root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right
        if(root->left == NULL and root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        //2 child case
        if(root->left != NULL and root->right != NULL)
        {
            int mini = minVal(root->right);
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if(root->data > value)
    {
        root->left = deleteFromBST(root->left, value);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, value);
        return root;
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    Node *root = NULL;

    cout << "Enter data to create BST: " << endl;
    takeInput(root);
    cout << "Data Inserted" << endl;

    cout << "Printing the BST" << endl;
    levelOrderedTraversal(root);

    cout << endl << "Inordered traversal" << endl;
    inOrderTraversal(root);
    cout << endl << "Preordered traversal" << endl;
    preOrderTraversal(root);
    cout << endl << "Postordered traversal" << endl;
    postOrderTraversal(root);

    cout << endl << "Min value is " << minVal(root) << endl;
    cout << "Min value is " << maxVal(root) << endl;

    deleteFromBST(root, 30); // deletion

    cout << "Printing the BST" << endl;
    levelOrderedTraversal(root);

    cout << endl << "Inordered traversal" << endl;
    inOrderTraversal(root);
    cout << endl << "Preordered traversal" << endl;
    preOrderTraversal(root);
    cout << endl << "Postordered traversal" << endl;
    postOrderTraversal(root);

    cout << endl << "Min value is " << minVal(root) << endl;
    cout << "Min value is " << maxVal(root) << endl;


    return 0;
}