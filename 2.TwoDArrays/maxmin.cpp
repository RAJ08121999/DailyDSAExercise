#include<iostream>
#include<climits>

using namespace std;

void input(int arr[100][100],int row,int col);

int main()
{
    int arr[100][100],row,col;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of coloumns:"<<endl;
    cin>>col;
    input(arr,row,col);
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i =0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>largest)
            {
                largest=arr[i][j];
            }
            if(arr[i][j]<smallest)
            {
                smallest=arr[i][j];
            }
            
        }
        
    }
    cout<<"largest element is:"<<largest <<endl;
    cout<<"smallest element is:"<<smallest <<endl;
}

void input(int arr[100][100],int row,int col){
    for(int i = 0 ;i<row;i++)
    {
        for(int j = 0; j<col;j++)
        {   
            cout<<"Enter element for index "<<"\t" <<i <<"\t" <<j <<endl;
            cin>>arr[i][j];
        }
    }
}