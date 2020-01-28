#include <iostream>
#include <string>
#include <bits/stdc++.h>

/*
Question Link : https://www.codechef.com/IARCSJUD/problems/LONGPALI
*/

using namespace std;

void checkForLongestSubPalindrome(int len, string str)
{
    int palindrome[len][len];
    
    int start,end;
    
    for (int i=0;i<len;i++)
    {
        palindrome[i][i] = 1;
        start = i;
        end = i;
    }
    
    for(int i=1;i<len;i++)
    {
        palindrome[i-1][i] = str[i] == str[i-1] ? 1 : 0;
        if (palindrome[i-1][i])
        {
            start = i-1;
            end = i;    
        }
    }
    
    for(int i=3;i<=len;i++)
    {
        for(int j=0;j<len-i+1;j++)
        {
            int k = j+i-1;
            if(palindrome[j+1][k-1] == 1 && str[j] == str[k])
            {
                palindrome[j][k] = 1;
                start = j;
                end = k;
            }
            else
            {
                palindrome[j][k] = 0;
            }
        }
    }
    
    cout<<end-start+1<<endl;
    for(int p=start;p<=end;p++)
    {
        cout<<str[p];
    }
    cout<<endl;
}

int main()
{
   int len;
   string str;
   
   cin>>len;
   cin>>str;
   
   checkForLongestSubPalindrome(len,str);
}