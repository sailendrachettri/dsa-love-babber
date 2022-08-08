#include <iostream>
using namespace std;

class TrieNode
{
    public:
        char data;
        TrieNode *children[26];
        bool isTerminal;

        TrieNode(char data)
        {
            this->data = data;
            for(int i = 0; i < 26; i++)
            {
                children[i] = NULL;
                isTerminal = false;
            }
        }
};

class Trie
{
    public:
        TrieNode *root;

        Trie(){
            root = new TrieNode('\0');
        }

        void insertUtil(TrieNode *root, string word)
        {
            // base case
            if(word.length() == 0)
            {
                root->isTerminal = true;
                return;
            }

            // ASSUMTION - words will be in capital letters
            int index = word[0] - 'A';
            TrieNode *child;

            if(root->children[index] != NULL)
            {
                child = root->children[index];
            }
            else
            {
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }

            // recursive call
            insertUtil(child, word.substr(1));

        }

        void insertWord(string word)
        {
            insertUtil(root, word);
        }

    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if(word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        // present case
        if(root->children[index] != NULL)
            child = root->children[index];
        else
            return false;
        
        // recursive call
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word); 
    }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

    Trie *t = new Trie();
    // (*t).insertWord("abcd");
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout << "Present or Not: " << t->searchWord("TIM") << endl;

    return 0;
}