#include <iostream>
using namespace std;

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

    }

    ~car(){                         // If we allocate memory then have to delocate it
        cout<<"deleting object..\n";
        if(mileage !=NULL){
            delete mileage;
            mileage=NULL;
        }
    }


};

int main(){
    car c1("maruti 800", "blue");
    
    cout << c1.name << endl;
    cout << c1.colour << endl;
    cout << *c1.mileage << endl;    
    return 0;

}