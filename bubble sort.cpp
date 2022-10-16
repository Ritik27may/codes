#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"the element " <<i+1<<" of the array is"<<endl;
        cin>>arr[i];
    }

    int counter =1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }

        }
        counter++;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
