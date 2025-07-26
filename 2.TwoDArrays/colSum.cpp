#include<iostream>
using namespace std;

void input(int arr[100][100],int row,int col);
void colSum(int arr[100][100],int row,int col);

int main()
{
    int arr[100][100],row,col;
    cout<<"enter the number of rows:";
    cin>>row;
    cout<<"enter the number of cols:";
    cin>>col;

    input(arr,row,col);
    cout<<"the coloumn sum is:"<<endl;
    colSum(arr,row,col);

    return 0;
}

void input(int arr[100][100],int row,int col){
    for(int i = 0;i<row;i++)
    {
        for(int j =0;j<col;j++){
            cout<<"enter the elelemt for index :"<<i <<"\t" <<j ;
            cin>>arr[i][j];
        }
    }
}

void colSum(int arr[100][100],int row,int col){
    for(int j =0;j<col;j++)
    {
        int sum = 0;
        for(int i = 0; i<row; i++)
        {   
            cout<<arr[i][j]<<"\t";
            sum+=arr[i][j];
        }
        cout<<"="<<"\t"<<sum ;
        cout<<endl;
    }
}