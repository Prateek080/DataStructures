/*
Input Arr1 = [2, 4, 6, 5, 0, 9]
Input Arr2 = [12, 34, 65, 59, 20, 99]
*/

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

void merge(int arr[], int start, int mid, int end){

    int i = start, j = mid + 1;

    int tempArr[end-start+1], k = 0;

    for(int p= start; p<=end; p++){
            if(i > mid)   //checks if first part comes to an end or not .
                  tempArr[k++] = arr[j++];

            else if(j > end)   //checks if second part comes to an end or not .
                  tempArr[k++] = arr[i++];

            else if( arr[ i ] < arr[ j ])     //checks which part has smaller element.
                   tempArr[ k++ ] = arr[ i++ ];

            else
                  tempArr[ k++ ] = arr[ j++];

    }

    for (int i=0 ; i< k ; i++) {
       // Now the real array has elements in sorted manner including both parts
         arr[start++] = tempArr[i] ;
    }
}

void mergeSort(int arr[],int start, int end){

        if(start < end){
            int mid = (start + end) / 2;
            mergeSort(arr, start, mid);
            mergeSort(arr, mid+1, end);
            merge(arr, start, mid, end);
        }
}


int main(){
    int arr[] = {19, 23,29, 2, 6, 4, 5, 0, 9};
    int x = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0, n-1);
    print(arr, n);
    return 0;
}
