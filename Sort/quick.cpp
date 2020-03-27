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

int partition(int arr[], int start, int end){
        int pivot = arr[start];
        int cursor = start + 1;
        for(int j = start + 1 ; j <= end; j++){
            if(arr[j] <  pivot){
                    swap(arr, cursor, j);
                    cursor = cursor + 1;
            }
        }
        swap(arr, start, cursor-1);
        return cursor-1;
}

void quickSort(int arr[],int start, int end){

        if(start < end){
            int pivot = partition(arr, start, end);

            quickSort(arr, start, pivot-1);
            quickSort(arr, pivot+1, end);
        }
}


int main(){
    int arr[] = {19, 23,29, 2, 6, 4, 5, 0, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    print(arr, n);
    return 0;
}












//int partition (int arr[], int low, int high)
//{
//    int pivot = arr[high];
//    int i = (low - 1);
//    for (int j = low; j <= high - 1; j++)
//    {
//        if (arr[j] < pivot)
//        {
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}