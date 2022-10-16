#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{

    int n;
    cout<<"enter number of elements of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<< " of the array is"<<endl;
        cin>>arr[i];

    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<linearsearch( arr, n,key)<<endl;
    return 0;
}
