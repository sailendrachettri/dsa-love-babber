#include <iostream>
using namespace std;

class Hero{
    private:
        int health;
        char level;
    
    public:
        Hero(int health){
            cout << "address of this: " << this << endl;
            this->health = health; // (*this).health
            this->level = level; // (*this).level 
        }
        Hero(int health, char level='z'){
            cout << "address of this: " << this << endl;
            this->health = health; // (*this).health
            this->level = level; // (*this).level 
        }

        void printData(){
            cout << "health is: " << health << endl;
            cout << "level is: " << level << endl;
        }

};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl;

    Hero *sail = new Hero(100, 'p');
    cout << "address of sail: " << sail << endl;
    // Hero *sail = new Hero(100);
    sail->printData(); // (*sail).printData();
    return 0;
}