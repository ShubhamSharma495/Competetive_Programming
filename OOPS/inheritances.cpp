#include <iostream>
using namespace std;

//Inheritance -> when properties & member functions of base class 
//are passed on the derived class.
//parent class private entities stay private even in child class
class animal{
    public:
        string color;
        void eat(){
            cout<<"eats\n";

        }
        void breathe(){
            cout << "breathes\n";
        }

};

//Type 1 : single inheritance -> only one class is inherited

class fish : public animal{
    public:
        int fins;
        void swim(){
            cout <<"Swims\n";
        }
};

//Type 2 : multi-level inheritance -> have multiple child class 

class mammal : public animal{
    public:
        string bloodType;
        mammal(){
            bloodType="warm";
        }
};

class dog : public mammal{
    public:
        void taiwag(){
            cout<<"a dog wags its tail\n";
        }

};

//TYPE 3: Multiple inheritance -> a child calss take inheritance from multiple parent class

class teacher{
    public:
        int salary;
        string subject;
};

class student{
    public:
        int rolling;
        float cgpa;
};

class TA : public teacher, public student{ //multiple inheritance accesing
    public:
        string name;
};

//Type 4: Hierachial inheritance -> multiple child class inherit same parent class

//Type 5: hybrid inheritance -> above types all in one

int main(){
    fish f1;
    
    //functions from child class
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();

    //functions from parent class
    f1.eat();
    f1.breathe();

    cout<<"type-2 multi-leveling\n";

    dog d1;
    d1.eat();
    d1.breathe();
    d1.taiwag();
    cout << d1.bloodType<< endl;

    return 0;
}