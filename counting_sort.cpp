#include <bits/stdc++.h>

using namespace std;

void countingSort(int a[] , int n){
    int new_array[10] = {0} , sum = 0 , final[10] = {0};
    for (int i = 0; i < n; i++)
    {
        new_array[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + new_array[i];
        new_array[i] = sum;
    }
    for (int i = n-1; i >= 0; i--)
    {
        new_array[a[i]]--;
        final[new_array[a[i]]] = a[i];
    }
    
    // printing
    for (int i = 0; i < n; i++)
    {
        cout << final[i] << ",";
    }
    

}

int main(){
    cout << "hello there" << endl;

    int arr[10] = {9,9,1,2,5,6,7,1,4,8};

    countingSort(arr , 10);

    return 0;
}