#include<iostream>
using namespace std;
int partition(int a[],int lb,int ub)
{
    int start=lb;
    int end=ub;
    int pivot=a[lb];
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>=pivot)
        {
            end--;
        }
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
    }
    if(start>end)
    {
        int temp=pivot;
        pivot=a[end];
        a[end]=temp;

        return end;
    }
    void quicksort(int a[],int lb,int ub)
    {
        if(lb<ub)
        {
            int loc = partition(a,lb,ub);
            quicksort(a,lb,loc-1);
            quicksort(a,loc+1,ub);
        }
    }
    void print(int a[],int lb,int ub)
    {
        for(int i=0; i<ub; i++)
        {
            cout<<a[i]<< " ";
        }

    }

    int main()
    {
        int a[8]= {7,6,10,5,9,2,15,11};
        int lb=0;
        int ub=7;
        quicksort(a,0,7);
        print(a,0,7)
    }

