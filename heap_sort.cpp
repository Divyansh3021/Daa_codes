#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[] , int n , int i){

    int largest = i;

    // left chid
    int l = 2*i+1;

    // right child
    int r = 2*i+2;

    if(l < n  && arr[l] > arr[largest]){
        largest = l;
    }
    if(r < n && arr[r] > arr[largest]){
        largest = r;
    }

    // if largest is not same or is not the root so
    if(largest != i ){
        // swap root with the largest.
        swap(arr[i] , arr[largest]);

        // again heapifing the changed tree
        heapify(arr , n , largest);
    }
}

void heapSort(int arr[] , int  n){
    for (int i = n/2-1; i >= 0; i--)
    {
        heapify(arr , n , i);
    }
    for (int i = n-1; i > 0; i--)
    {
        // largest goes to the back
        swap(arr[0] , arr[i]);

        // main point 
        // 1. the size of the array is now i 
        // 2. we will set the largest element arr[0] so that there is heapify in full array
        heapify(arr , i , 0);
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr , n); 
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    
    return 0;
}
