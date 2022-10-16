
#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
       int temp=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
       j--;
       }
       arr[j+1]=temp;
    }

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[]={2,1,41,23};
    int size = sizeof(a)/sizeof(a[0]);
    insertionsort(a,size);
    print(a,size);
}

