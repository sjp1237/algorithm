#include"sort.hpp"

void _MergeSort(vector<int>& v,vector<int>& tmp,int left1,int right1,int left2,int right2)
{
    /*
    1.判断[left1,right1] [left2,right2]区间是否有效
    */
    if(left1>right1||left2>right2)
    {
        return;
    }
    int mid1=left1+(right1-left1)/2;
    int mid2=left2+(right2-left2)/2;
    _MergeSort(v,tmp,left1,mid1,mid1+1,right1);
    _MergeSort(v,tmp,left2,mid2,mid2+1,right2);

    int start=left1;
    int start0=start;
    while(left1<=right1&&left2<=right2)
    {
        if(v[left1]<v[left2]){
            tmp[start++]=v[left1++];
        }
        else{
            tmp[start++]=v[left2++];
        }
    }

    while(left1<=right1)
    {
        tmp[start++]=v[left1++];
    }

    while(left2<=right2)
    {
        tmp[start++]=v[left2++];
    }

    while(start0<start){
        v[start0++]=tmp[start0];
    }
}
void MergeSort(vector<int>& v)
{
    /*
    
    */
   vector<int> tmp;
   tmp.resize(v.size());
   int mid=(v.size()-1)/2;
   _MergeSort(v,tmp,0,mid,mid+1,v.size()-1);
}