#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100], rows, cols;
    cout << "Enter the no. of rows: " << flush;
    cin >> rows;
    cout << "Enter the no. of cols: " << flush;
    cin >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin>>matrix[i][j];
        }
    }


    cout<<"\nThe sparse matrix is: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if(matrix[i][j]!=0){
                cout<<"ROW: "<<i<<"\t"<<"COL: "<<j<<"\t"<<"VAL: "<<matrix[i][j];
            }
            cout<<endl;
        }
    }

    
}