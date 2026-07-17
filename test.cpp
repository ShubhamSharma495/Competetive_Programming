#include <bits/stdc++.h>
#include <vector>
using namespace std;


int rotateArray(vector<int>& nums, int k) {
    int n=nums.size();
    for(int i=0;i<k;i++){
        int temp=nums[0];
        for(int i=0; i<n;i++){
            swap(nums[i], nums[i+1]);
        }
        nums[n-1]=temp;
    }   
    for(int i=0; i<n;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int> a = {1,2,3,4,5};
    int k=4;
    rotateArray(a, k);
    return 0;
}