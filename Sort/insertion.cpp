/*
Input Arr1 = [2, 4, 6, 5, 0, 9]
Input Arr2 = [12, 34, 65, 59, 20, 99]
*/

#include<iostream>
using namespace std;

void print(int arr[], int n){
        for(int i=0;i<n;i++){
            cout << arr[i] << ' ';
        }
        cout<<endl;
}

void insertionSort(int arr[], int n){
        int i, j, cursor;

        for(int i=1; i < n; i++){
               cursor = arr[i];
               j=i-1;
               while(j >= 0 && arr[j] > cursor){
                    arr[j+1] = arr[j];
                    j=j-1;
               }
               arr[j+1] = cursor;
        }
}


int main(){
      int arr[] = {19, 23,29, 2, 6, 4, 5, 0, 9};
    int x = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    print(arr, n);
    return 0;
}