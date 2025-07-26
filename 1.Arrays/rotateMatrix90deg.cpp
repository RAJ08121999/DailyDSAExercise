#include<iostream>
using namespace std;

void input(int arr[][100],int row,int col);
void logic(int arr[][100],int row,int col);
void display(int arr[][100],int row,int col);

int main(){
    int arr[100][100],row,col;
    cout<<"Enter the number of rows:";
    cin>>row;
    cout<<"Enter the number of cols:";
    cin>>col;
    input(arr,row,col);
    logic(arr,row,col);
    display(arr,row,col);
    return 0;
}

void input(int arr[][100],int row,int col){

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the element for index :"<<i <<"\t" <<j <<"\t";
            cin>>arr[i][j];
        }
    }
}

void logic(int arr[][100],int row,int col){

    //transpose
    for(int i =0;i<row;i++)
    {
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }



    //reverse all the rows of the matrix


    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col / 2; j++) {
            swap(arr[i][j], arr[i][col - 1 - j]);
        }
    }

}
void display(int arr[][100],int row,int col){

    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<< endl;
    }

}