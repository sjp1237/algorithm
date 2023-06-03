#include<string>
using namespace std;
#include<iostream>



/*
242. 有效的字母异位词
给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词

示例 1:
输入: s = "anagram", t = "nagaram"
输出: true
示例 2:
输入: s = "rat", t = "car"
输出: false
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
        1.定义arr1，arr2分别统计s,t各个字符串中出现的字符个数
        2.下标0代表字符'a'，arr1[0]代表s字符串中'a'字符出现的个数
        3.对比arr1和arr2中各个字符相同，如果都相同，则为异位词，否则返回false
         时间复杂度:O(N)
         空间复杂度：O(1)
        */
        int arr1[26]={0};
        for(int i=0;i<s.size();i++)
        {
            arr1[s[i]-'a']++;
        }

        int arr2[26]={0};
        for(int i=0;i<t.size();i++)
        {
            arr2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }
};