#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int k){
    if(s>e)
        return false;

    int mid= e-(e-s)/2;
    if(arr[mid]==k)
            return true;
    if(arr[mid]>k){
        return binarysearch(arr,s,mid-1,k);
}    else{
 }           return binarysearch(arr,mid+1,e,k);
}
int main(){
    int arr[]={2,4,6,10,14,18};
    int size = 6;
    int key = 16;
    binarysearch(arr,0,5,18);
    cout<<binarysearch(arr,0,5,18)<<endl;
}
