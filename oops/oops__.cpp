#include <iostream>
using namespace std;

class HeroClass{
    
    // properties 
    private:
        char level;
        int health;

    public:

    // ---------------setter and getter concept---------------
    // getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // setter
    void setHealth(int health){
        this->health = health;
    }

    void setLevel(char level){
        this->level = level;
    }
};


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl << endl;

/*
    // creating objects of the Hero class
    HeroClass sail;
    sail.setHealth(100);
    sail.setLevel('X');

    // cout << "size of h1: " << sizeof(sail) << endl;



    int health = sail.getHealth();
    char level = sail.getLevel();
    cout << "health is: " << health << "%" << endl;
    cout << "level is: " << level  << endl;
*/
/*

    // statically memeory allocation
    HeroClass sail;
    sail.setHealth(100);
    sail.setLevel('D');
    cout << "health is: " << sail.getHealth() << endl;
    cout << "level is: " << sail.getLevel() << endl << endl;
*/

    // dynamically memory allocation
    // HeroClass *sailPtr = new HeroClass;
    // (*sailPtr).setHealth(100);
    // (*sailPtr).setLevel('D');
    // cout << "health is: " << (*sailPtr).getHealth() << endl;
    // cout << "level is: " << (*sailPtr).getLevel() << endl;
    // OR
    HeroClass *sailPtr = new HeroClass();
    sailPtr->setHealth(100);
    sailPtr->setLevel('s');
    cout << "health is: " << sailPtr->getHealth() << endl;
    cout << "level is: " << sailPtr->getLevel() << endl;

    // 32 min complected
    


    return 0;
}