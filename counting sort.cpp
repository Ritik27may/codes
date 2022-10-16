#include<iostream>
using namespace std;
int getmax(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
void countsort(int a[],int n){
    int max= getmax(a,n);
    int arr[max+1];
      for (int i = 0; i<=max; i++)
  {
    arr[i] = 0;
  }
    int output[n];
    for(int i=0;i<n;i++){
        arr[a[i]]++;
    }
    for(int i=1;i<=max;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=n-1;i>=0;i--){
        output[arr[a[i]]-1]=a[i];
        arr[a[i]]--;
    }
    for(int i=0;i<n;i++){
        a[i]=output[i];
    }

}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
}
int main(){
    int a[]={45,23,1,6,3};
    int size=sizeof (a)/sizeof(a[0]);
    countsort(a,size);
    print(a,size);
}


