#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       int min=i;
       for(int j=i+1;j<n;j++){
          if(arr[min]>arr[j]){
            min=j;
          }
       }
       int temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp;

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
    selectionsort(a,size);
    print(a,size);
}

