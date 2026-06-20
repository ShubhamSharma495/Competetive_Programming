#include <iostream>
using namespace std;

int TililingProblem(int n){
    if(n==0||n==1) return 1;
    //Vertical
    int ans1=TililingProblem(n-1);
    //Horizontal
    int ans2=TililingProblem(n-2);

    return ans1+ans2;
}

int main(){
    cout<<TililingProblem(4);

}