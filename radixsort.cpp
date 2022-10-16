#include<iostream>
using namespace std;
int get_max(int a[], int size){
    int max=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
void count_sort(int a[],int size,int exp){
    int max=get_max( a, size);
    int count[max+1];
    int output[size];
     for (int i = 0; i <10; ++i)
  {
    count[i] = 0;
  }
    for(int i=0;i<size;i++){
        count[(a[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];

    }
    for(int i=size-1;i>=0;i--){
       output[count[(a[i]/exp)%10]-1] =a[i];
       count[(a[i]/exp)%10]--;

    }
    for( int i=0;i<size;i++){
        a[i]=output[i];
    }

}
void radixsort(int a[], int size)
{
    int max = get_max(a, size);
    for (int exp = 1; max / exp > 0; exp *= 10)
        count_sort(a, size, exp);
}
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<< " ";
    }
}
int main(){
    int a[]={170,45,75,90,802,24,2,66};
    int size=sizeof (a)/sizeof(a[0]);
    radixsort(a,size);
    print(a,size);
}


