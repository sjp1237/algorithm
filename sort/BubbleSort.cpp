#include"sort.hpp"


void BubbleSort(vector<int>& v)
{
    /*
    1.从前往后进行遍历，如果某个值比前面的一个值小，则交换则两个值的位置，并往后遍历，直到遍历到序列的最后一个值，序列的大小-1
    2.重复上面的步骤，直到序列为1
    */

   for(int i=v.size()-1;i>=1;i--)//每次序列的遍历
   {
     for(int j=1;j<=i;j++)
     {
        if(v[j-1]>v[j]){
            swap(v[j-1],v[j]);
        }
     }
   }
}