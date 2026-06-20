#include <iostream>
#include <vector>
using namespace std;

int firstOccrance(const vector<int> arr, int target, int i){  //const is use so that recursive calls dont make copies of arr again and again and load up memory
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstOccrance(arr,target,(i+1));
}
int lastOccrance(const vector<int> arr, int target, int i){  //const is use so that recursive calls dont make copies of arr again and again and load up memory
    if(i==0){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return lastOccrance(arr,target,(i-1));
}

//Method 2

int lastOccr(const vector<int> arr, int target, int i){  //const is use so that recursive calls dont make copies of arr again and again and load up memory
    if(i==arr.size()){
        return -1;
    }
    int idx=lastOccr(arr,target,(i+1));
    if(idx==-1 && arr[i]==target){
        return i;
    }
    return idx;
}

int main(){
    vector<int> arr={1,2,4,5,4,7};
    cout<<firstOccrance(arr,4,0)<<endl;
    cout<<lastOccrance(arr,8,arr.size());
}