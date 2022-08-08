#include <iostream>
using namespace std;

class Human{
    private:

    public:
        int height;
        int weight;
        int age;

        int getAge(){
            return (*this).age;  
        }
        
        void setWeight(int weight){
            this->weight = weight;
        }
};

class Male: public Human{
    public:
        string color;

        void sleep(){
            cout << "Male is sleeping." << endl;
        }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl;

    Male sai;
    sai.sleep();
    sai.setWeight(69);
    cout << "age: " << sai.age << endl;
    cout << "height: " << sai.height << endl;
    cout << "weight: " << sai.weight << endl;
    cout << "color(Male): " << sai.color << endl;


    return 0;
}