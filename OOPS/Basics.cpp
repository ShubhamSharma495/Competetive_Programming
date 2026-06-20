#include <iostream>
using namespace std;

class student {
    string name;
    float cgpa;

    float percentage(){
        cout << float (cgpa*10) << "%\n" ;
    }
};

class user{
    string username;
    string password;
    string ID;
    void deactivate(){
        cout<<"Account Deactivated"<<endl;
    }
};

int main(){
    student s1;
    cout << sizeof(s1)<< endl;
    return 0;
}