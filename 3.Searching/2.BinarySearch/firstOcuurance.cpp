//find first occurance of an element in a sorted array;
//jab bhi sorted array ho hamesa binary search lagane ka kosis karo

// Time Complexity=O(log base 2 n)


#include<iostream>
using namespace std;

void input(int arr[],int size);
int search(int arr[],int size,int key);

int main()
{   
    int arr[100],size,target;

    cout<<"Enter the size of the array";
    cin>>size;

    input(arr,size);

    cout<<"Enter the key to search";
    cin>>target;

    int yes = search(arr,size,target);

    if(yes==-1){
        cout<<"element not found " <<endl;
    }
    else{
        cout<<"element found at index"<<yes<<endl;
    }

    return 0;
}


void input(int arr[],int size){
    for(int i = 0 ; i<size;i++)
    {
        cout<<"Enter array element for index"<<"\t"<<i <<"\t";
        cin>>arr[i];
    }
    cout<<endl;
}

int search(int arr[],int size,int key){

    int left=0,right=size-1,mid=(left+right)/2;

    //int mid = left+(right-left)/2 
    
    // its the best practice to save from overflow qki esa scenario ho sakta hai jab left+right ka sum interger k capacity ko overflow kar de tab app crash ho jayega

    int ans=-1;

    for(int  i = 0; left<=right; i++)
    {
        if(arr[mid]==key)
        {   
            //ans store karlo
            ans=mid;
            //firse left me jaao taki first occurance mile
            right=mid-1;
        }
        else if(arr[mid]<key)
        {   //right me jao
            left=mid+1;
        }
        else if(arr[mid]>key)
        {   
            //left me jao
            right=mid-1;
        }

        //mid ko update karo
        mid=(left+right)/2;
    }

    return ans;
}

