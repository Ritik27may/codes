#include <iostream>
#include<vector>
using namespace std;
void mergearray(vector<int>&nums,int s,int e){
  int mid=(s+e)/2;
  int len1=mid-s+1;
  int len2=e-mid;
  vector<int>left;
  vector<int>right;
  int k=s;
  for(int i=0;i<len1;i++){
    left.push_back(nums[k]);
    k++;
  }
  k=mid+1;
  for(int i=0;i<len2;i++){
    right.push_back(nums[k]);
    k++;
  }
  int i=0,j=0;
  int mainindex=s;
  while(i<len1 && j<len2){
    if(left[i]>right[j]){
      nums[ mainindex++]=right[j++];
    }
    else{
      nums[ mainindex++]=left[i++];
    }
  }
  while(i<len1){
    nums[ mainindex++]=left[i++];
  }
  while(j<len2){
    nums[ mainindex++]=right[j++];
  }
}
void mergesort(vector<int>&nums,int s,int e){
   if(s>=e){
     return;
   }
   int mid=s+(e-s)/2;
   mergesort(nums,s,mid);
   mergesort(nums,mid+1,e);
   mergearray(nums,s,e);
}
// inplace mergesort
void mergearray_inplace(vector<int>&nums,int s,int e){
  int mid=((s+e)/2);
  int j=mid+1;
  int i=s;
  if(nums[mid]<=nums[j]){
    return;
  }
 while(i<=mid && j<=e){
   if(nums[i]<=nums[j]){
     i++;
 }
 else{
   int start=j;
   int value=nums[j];
   while(start!=i){
     nums[start]=nums[start-1];
     start--;
   }
   nums[i]=value;
   i++;
   j++;
    }
  }
}

int main() {
   vector<int>nums{38,52,3,9,9,20,3,3};
   int s=0;
   int e=nums.size()-1;
   mergesort(nums,s,e);
   for(int i=0;i<nums.size();i++){
     cout<<nums[i]<<" ";
   }
}
