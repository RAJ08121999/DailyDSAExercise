#include<iostream>
using namespace std;

void input(int arr[][100],int row,int col);
void rowSum(int arr[][100],int row,int col);

int main(){
    int arr[100][100],row,col;
    cout<<"enter the number of rows:";
    cin>>row;
    cout<<"enter the number of cols:";
    cin>>col;
    input(arr,row,col);
    cout<<"row sum is:"<<endl;
    rowSum(arr,row,col);

    return 0;
}

void input(int arr[][100],int row,int col){
    for(int i =0;i<row;i++)
    {
        for(int j=0;j< col;j++)
        {   
            cout<<"enter the element for index "<<i <<"\t" <<j <<endl;
            cin>>arr[i][j];
        }
    }
}

void rowSum(int arr[][100],int row,int col){
    for(int i = 0 ;i<row;i++)
    {
        int sum=0;
        for(int j = 0;j<col;j++)
        {   
            cout<<arr[i][j] << "\t";
            sum+=arr[i][j];
        }
        cout<<"="<<"\t"<<sum ;
        cout<<endl;
    }
}