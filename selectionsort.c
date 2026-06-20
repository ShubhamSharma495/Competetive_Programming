#include <stdio.h>
#include <limits.h>

void sel(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min = INT_MAX;
        int minidx = -1;

        for(int j = i; j <= n-1; j++){
            if (min > arr[j]){
                min = arr[j];
                minidx = j;
            }
        }

        // swap arr[i] and arr[minidx]
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {1,2,8,9,7};
    int n = 5;

    sel(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}