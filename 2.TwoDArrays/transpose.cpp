#include<iostream>
using namespace std;

void input(int arr[100][100],int row,int col);
void transpose(int arr[100][100],int row,int col);

int main()
{
    int arr[100][100],row,col;
    cout<<"enter the number of rows:";
    cin>>row;
    cout<<"enter the number of cols:";
    cin>>col;

    input(arr,row,col);

    cout<<"the transpose matrix is" <<endl;
    transpose(arr,row,col);
    
    return 0;
}

void input(int arr[100][100],int row,int col){
    for(int i = 0;i<row;i++)
    {
        for(int j =0;j<col;j++){
            cout<<"enter the elelemt for index :"<<i <<"\t" <<j <<"\t";
            cin>>arr[i][j];
        }
    }
}

void transpose (int arr[][100],int row,int col)
{
    for(int i = 0 ; i<col; i++)
    {
        for(int j =0; j<row;j++)
        {
            cout<<arr[j][i] <<"\t";
        }
        cout<<endl;
    }
}
