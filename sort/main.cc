#include"sort.hpp"


int main()
{
    vector<int> v={12,3,4,9,3,4,5,6100,2,3};
   // QuickSort(v);
   // BubbleSort(v);
   InsertSort(v);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}