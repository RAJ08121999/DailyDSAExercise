#include<iostream>
using namespace std;

void input(int arr1[][100],int row,int col);
void sum(int arr1[][100],int arr2[][100],int result[100][100], int row,int col);
int main()
{
    int row,col;
    cout<<"enter the number of rows";
    cin>>row;

    cout<<"enter the number of coloumns";
    cin>>col;

    int arr1[100][100];
    int arr2[100][100];
    int result[100][100];
    cout<<"enter the elements for matrix 1"<<endl;
    input(arr1,row,col);
    cout<<"enter the elements for matric 2"<<endl;
    input(arr2,row,col);
    cout<<"the sum of the array1 and array2 is:"<<endl;
    sum(arr1,arr2,result,row,col);
}

void input(int arr1[][100],int row,int col){
    for(int i = 0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"enter the element for index "<<"\t" <<i <<"\t" <<j <<"\t";
            cin>>arr1[i][j];
        }
    }
}

void sum(int arr1[][100],int arr2[][100],int result[][100],int row,int col){
    for(int i =0;i<row;i++)
    {
        for(int j = 0 ;j <col;j++)
        {
            result[i][j]=arr1[i][j]+arr2[i][j];
            cout<<result[i][j] <<"\t";
        }
        cout<<endl;
    }

}