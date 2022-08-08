#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }

};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Let's get started" << endl;

    // creating object of student class
    Student sai;

    return 0;
}