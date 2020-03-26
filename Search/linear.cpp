/*
Input Arr1 = [2, 4, 6, 5, 0, 9]
s = 0;
output = 4;


Input Arr2 = [12, 34, 65, 59, 20, 99]
s = 99;
output = 5;
*/

#include<iostream>
using namespace std;

int linearSearch(int arr[], int x, int length){
    for (int i = 0; i < length ; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 5, 0, 9};
    int x = 0;
    int len = 6;

    int result = linearSearch(arr, x, len);
    cout<<result<<endl;
}