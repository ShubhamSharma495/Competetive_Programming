#include <iostream>
using namespace std;

//ability of object to take on diffrent forms or behave in diffrent ways depending on the context they are used.

// *compile time polymorphism 
//1)Function Overloading -> name same parameter diffrent
//2)Operator Overloading -> (+,-,*,/ type) make function to performe operations of diffrent sets of a data like complex (real to real & img to img)

class print{
    public:
        void show(int x){
            cout<<"int "<<x<<endl;
        }
        void show(string str){
            cout<<"string "<<str<<endl;
        }

};

//2)operator overloading ->
 
class complex{
    int real;
    int img;
    public:
        complex(int r, int i){
            real =r;
            img=i;
        }
        void shownum(){
            cout<<real<<"+"<<img<<"i\n";
        }
        
        // made a operator to add diffrent complex number

        void operator + (complex &c2){
            int resreal=this->real+c2.real;
            int resimg=this->img+c2.img;
            complex c3(resreal,resimg);
            cout<<"result ";
            c3.shownum();
        }
};

int main(){
    // function overloading compile time polymorphism
    print obj1;
    obj1.show(25);
    obj1.show("abcd");

    //operator overloading compile time polymorphism
    complex c1(1,2);
    complex c2(3,4);
    c1.shownum();
    c2.shownum();

    //operator overloading compile time polymorphism
    c1+c2;
}

//*run time polymorphism

