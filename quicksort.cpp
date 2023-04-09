#include <iostream>
#include<vector>
using namespace std;
void quicksort(vector<int>&nums,int s,int e){
  if(s>=e){
    return;
  }
  int pivot=nums[s];
  int count=0;
  for(int i=s+1;i<=e;i++){
    if(nums[i]<pivot){
      count++;
    }
  }
  swap(nums[s+count],nums[s]);
  int index=s+count;
  int i=s;
  int j=e;
  while(i<index && j>index){
    while(nums[i]<pivot){
      i++;
    }
    while(nums[j]>pivot){
      j--;
    }
    if(i<index && j>index){
      swap(nums[i],nums[j]);
    }
    i++;
    j--;
    }
    quicksort(nums,s,index-1);
    quicksort(nums,index+1,e);
  }
int main() {
   vector<int>nums{8,3,4,28,20,2,5,30};
   int s=0;
   int e=nums.size()-1;
   quicksort(nums,s,e);
   for(int i=0;i<nums.size();i++){
     cout<<nums[i]<<" ";
   }
}
