#include<iostream>
using namespace std;


void input(int arr[][100],int row,int col);
bool search(int arr[][100],int row,int col,int key);

int main()
{   
    int arr[100][100], row,col;

    cout<<"Enter the number of row"<<endl;
    cin>>row;
    cout<<"Enter the number of coloumn"<<endl;
    cin>>col;

    arr[row][col];

    input(arr,row,col);

    int key;
    cout<<"enter the key to search:";
    cin>>key;
    if(!search(arr,row,col,key)){
        cout<<"element not found in the array"<<endl;
    }

    return 0;
}

void input(int arr[][100],int row,int col){
    for(int i =0 ; i< row;i++){
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the element for " <<i << " " <<"row" <<"\t" <<j <<" " <<"col"<<endl;
            cin>>arr[i][j];
        }
    }
}

bool search(int arr[][100],int row,int col,int key){
    for(int i =0; i<row;i++)
    {
        for(int j =0 ; j<col;j++)
        {
            if(arr[i][j]==key)
            {   
                cout<<"element found at position " << "\t "<< i << "\t" <<j <<endl;
                return true;
            }
        }
    }
    return false;
}