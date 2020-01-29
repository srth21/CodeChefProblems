#include <iostream>
#include <string>
#include <bits/stdc++.h>

/*
Question Link : https://www.codechef.com/IARCSJUD/problems/BOOKLIST
*/
using namespace std;

int main()
{
   int len;
   cin>>len;
   
   int arr[len];
   for(int i=0;i<len;i++)
   {
       cin>>arr[i];
   }
   
   int n;
   cin>>n;
   
   for(int i=0;i<n;i++)
   {
       int k;
       cin>>k;
       
       int currLen = len-i;
       
       cout<<arr[k-1]<<endl;
       
       for(int j=k-1;j<currLen-1;j++)
       {
           arr[j] = arr[j+1];
       }
   }
   
}