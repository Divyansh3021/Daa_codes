#include <bits/stdc++.h>

using namespace std;

const int row = 3 , col = 3;

class Matrix
{
private:
    int arr[row][col];
public:
    Matrix(/* args */);
    ~Matrix();
    void read(){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "enter the val of " << i <<"," <<j << "-> ";
                cin >> arr[i][j];
                cout << endl;
            }
            cout << endl;
        }
        
    }

    void show(){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "the val of " << i <<"," <<j << "is -> " << arr[i][j];
                cout << endl;
            }
            cout << endl;
        }
    }

    void add(){
        // adding identity matrix
        int iden_mat[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = arr[i][j] + iden_mat[i][j];
            }
        }
        cout << "the added matrix is " << endl;
        show();
    }

    void transpose(){
        for (int i = 0; i < row; i++)
        {
            for (int j = i+1; j < col; j++)
            {
                swap(arr[i][j] , arr[j][i]);
            }  
        }
        cout << "the transposed matrix is " << endl;
        show();
    }

    void mul(){
        int rand_mat[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};
        int result[3][3];

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    result[i][j] = arr[i][k] * rand_mat[k][j];
                }
                
            }
            
        }
        cout << "the mul matrix is " << endl;
        //show
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "the val of " << i <<"," <<j << "is -> " << result[i][j];
                cout << endl;
            }
            cout << endl;
        }
        
    }
};

Matrix::Matrix(/* args */)
{
}

Matrix::~Matrix()
{
}

int main(int argc, char const *argv[])
{
    cout << "assigh here";
    return 0;
}
