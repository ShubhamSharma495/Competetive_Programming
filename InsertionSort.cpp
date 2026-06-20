#include <iostream>
using namespace std;



void sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0&& arr[prev]>curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}

void inst(int arr[], int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[]={1,2,8,9,7};
    int n=5;
    sort(arr,n);
    inst(arr, n);
}