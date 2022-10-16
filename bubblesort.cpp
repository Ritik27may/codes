#include<iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    int count=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {   count=count+1;
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<count<<endl;
}
void print(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
}
int main()
{
    int a[]= {10,15,1,2,9,16,11};
    int size=sizeof (a)/sizeof(a[0]);
    bubblesort(a,size);
    print(a,size);
}
