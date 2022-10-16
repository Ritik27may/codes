#include<iostream>
using namespace std;
void sequence(int a[],int n,int k){
    for(int i=0;i<(n-n/k);i++){
        if(a[i]>a[(i+n/k)]){
            int temp=a[i];
            a[i]=a[(i+n/k)];
           a[(i+n/k)]=temp;
        }
    }

}
void print(int a[],int n){
    for(int i=0;i<n;i++){
     cout<<a[i]<< " ";
    }

}

void shellsort(int a[],int n){
    for(int k=2;n/k>0;k*=2){
        sequence(a,n,k);
    }

}
int main(){
    int a[]={9,8,3,7,5,6,4,1};
    int size=sizeof (a)/sizeof(a[0]);
    shellsort(a,size);
    print(a,size);
}
