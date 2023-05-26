#include"sort.hpp"

void InsertSort(vector<int>& v)
{
    /*
    1.从前往后遍历数值，将数值插入到有序序列中正确的位置。
    2.升序序列，对升序序列中从后往前查找，找到比将要插入数值还要大的值
    3.把将插入的数值插入到后面
    4.一个一个往后移动
    */

   if(v.size()<=1){
    return;
   }

   // 2 3 5 4 
   // 2 3 5 5
   // 2 3 4 5 
   // 2 1
   // 2 
   for(int i=1;i<v.size();i++)
   {
      int tmp=v[i];
      for(int j=i-1;j>=0;j--){
        if(j==0&&v[j]>tmp){
            v[j+1]=v[j];
            v[j]=tmp;
            break;
        }
        if(tmp>=v[j])
        {
            v[j+1]=tmp;
            break;
        }
        else {
            v[j+1]=v[j];
        }
      }
   }
}