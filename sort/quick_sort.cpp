
#include"sort.hpp"
#include<algorithm>



//hoare法
void hoare(vector<int>& v,int start,int end)
{
    /*1.
   1. 如果start>=end 则说明该序列只有一个元素，或者该区间无效，无需再递归
   2. 设定基准值
   3.右指针先移动，找到比基准值小的值
   4.左制作移动，找到比基准值大的值，交换左右指针指向的值。
   5.重复上面的情况，直到left ==right ，最后交换基准值和 left指针指向的位置
   6.递归[start,left-1] [left+1，end]
    */
  if(start>=end){
    return;
  }

  int tmp=v[start];
  int left=start;
  int right=end;

  while(left<right){
     while(left<right&&v[right]>tmp){
        right--;
     }

     while(left<right&&v[left]<=tmp){
        left++;
     }

     swap(v[left],v[right]);
  }
  swap(v[start],v[left]);
  hoare(v,start,left-1);
  hoare(v,left+1,end);
}

void QuickSort(vector<int>& v)
{
   hoare(v,0,v.size()-1);
}


