#include<iostream>
using namespace std;

void input(int arr[100][100],int row,int col);
int diaSum(int arr[100][100],int row,int col);

int main()
{
    int arr[100][100],row,col;
    cout<<"enter the number of rows:";
    cin>>row;
    cout<<"enter the number of cols:";
    cin>>col;

    input(arr,row,col);
    
    int sum=diaSum(arr,row,col);
    cout<<"the diagonal sum is:"<<sum <<endl;
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

int diaSum(int arr[100][100],int row,int col){
    
    int sum = 0; 
    for(int  i = 0 ; i<row;i++){
        
        for(int j = 0 ;j<col;j++)
        {
            if(i==j)
            {    
                cout<<arr[i][j]<<"\t";
                sum+=arr[i][j];
            }
        }
        cout<<endl;
    }
    return sum ;
}