#include<iostream>
#include<climits>

using namespace std;

void input(int arr[][100],int row,int col);
void logic(int arr[][100],int row,int col);


int main(){

    int arr[100][100],row,col;
    cout<<"Enter the number of rows:";
    cin>>row;

    cout<<"Enter the number of coloumns:";
    cin>>col;

    input(arr,row,col);
    logic(arr,row,col);


    return 0;
}

void input(int arr[][100],int row,int col){
    for(int i =0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<"Enter the element at index "<<i <<"\t"<<j;
            cin>>arr[i][j];
        }
    }
}

void logic(int arr[][100],int row,int col){
    
    int oneCount = INT_MIN;//will store max number of 1s in a row;
    int rowNum=0;//will store index of max no. of 1s wali row

    for(int i =0;i<row;i++)
    {
        int count = 0;
        for(int j =0;j<col;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>oneCount){
            oneCount=count;
            rowNum=i;  
        }
    }

    cout<<rowNum;

}