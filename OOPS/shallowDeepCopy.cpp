#include <iostream>
using namespace std;

//Constructor allocates memory {copy constructor}

// shallow copy        | deep copy
//*same memory address.| *diffrent memory address
//*copies refrences to |
//original arry, Array | *create brand new copy of array
//Remains same.        |
//*compiler genrally   |
//creates shallow copy

// we need to define own copy construct when deep copy is needed.
// when class contains pointers to dynamically allocated memory.

class car{
    public:
        string name;
        string colour;
        int *mileage;
    
        car(string name, string colour){ //copy constructar
        this->name=name;
        this->colour=colour;
        mileage=new int; //dynamic allocation
        *mileage=12;
    }
    car(car &original){
        cout <<"copying original to new>>\n";
        name=original.name;
        colour=original.colour;
        mileage=original.mileage;
        // for creating deep copy (the alocation of memory will diffrent in heap)
        // mileage=int new;
        // *mileage=10;
    }


};

int main(){
    car c1("maruti 800", "blue");
    car c2(c1);
    cout << c2.name << endl;
    cout << c2.colour << endl;
    cout << *c2.mileage << endl;    //c2 is copy of c1
    *c2.mileage=10;                 //hence c2 and c1 have same points same memory location in heap
    cout << *c1.mileage << endl;
    return 0;

}
