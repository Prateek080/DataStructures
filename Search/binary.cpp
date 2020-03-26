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

int binarySearch(int arr[], int start, int end, int x){
     if (end >= start)
       {
            int mid = start + (end - start)/2;

            // If the element is present at the middle itself
            if (arr[mid] == x)  return mid;

            // If element is smaller than mid, then it can only be present
            // in left subarray
            if (arr[mid] > x) return binarySearch(arr, start, mid-1, x);

            // Else the element can only be present in right subarray
            return binarySearch(arr, mid+1, end, x);
       }

       // We reach here when element is not present in array
       return -1;
}

int main(){
    int arr[] = {0, 1, 2, 4, 6, 9};
    int x = 4;
    int len = 6;

    int result = binarySearch(arr, 0, len - 1, x);
    cout<<result<<endl;
}