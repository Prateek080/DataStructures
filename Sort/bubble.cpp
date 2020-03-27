/*
Input Arr1 = [2, 4, 6, 5, 0, 9]
Input Arr2 = [12, 34, 65, 59, 20, 99]
*/

#include<iostream>
using namespace std;

void swap(int arr[], int min, int cur)
{
    int temp = arr[cur];
    arr[cur] = arr[min];
    arr[min] = temp;
}

void print(int arr[], int n){
        for(int i=0;i<n;i++){
            cout << arr[i] << ' ';
        }
        cout<<endl;
}

void bubbleSort(int arr[], int n){
        int i, j, cursor;

        for(int i = 0; i < n; i++){
              for(int j = 0; j< n-1-i; j++){
                    if(arr[j] > arr [j+1]){
                           swap(arr, j, j+1);
                    }
              }
        }
}


int main(){
      int arr[] = {19, 23,29, 2, 6, 4, 5, 0, 9};
    int x = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    print(arr, n);
    return 0;
}