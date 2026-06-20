#include <iostream>
using namespace std;

int pairsum(int arr[], int target, int n){
    
    for(int i=0;i<n;i++){
        int s=target-arr[i];
        for(int j=0;j<n;j++){
            if(s==arr[j]){
                cout<<arr[i]<<" " << arr[j]<< endl;
                break;
            }
        }
    }

}

int main(){
    int arr[]={1,3,5,9,12,15};
    int n=6;
    pairsum(arr,10,6);
    return 0;
}