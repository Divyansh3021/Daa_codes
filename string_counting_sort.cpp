#include <bits/stdc++.h>

using namespace std;

string countSort(string arr)
{
    int n = arr.length();
    int new_array[27] = {0};
    string final;
    int num = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        num = (int)arr[i] - 97;

        new_array[num]++;
    }

    for (int i = 0; i < 27; i++)
    {
        sum = sum + new_array[i];
        new_array[i] = sum;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        num = (int)arr[i] - 97;

        final[--new_array[num]] = arr[i];
    }
    return final;
}

int main(){
    string pass = "edsab";
    string ans = countSort(pass);
    cout << "hello" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i];
    }
    
    return 0;
}