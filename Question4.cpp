#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

/*
Question Link : https://www.codechef.com/IARCSJUD/
*/
int main()
{
   int len;
   cin>>len;
   
   int kingVisits;
   cin>>kingVisits;
   
   int arr[len];
   int kingarr[kingVisits];
   
   int currLenOfArr = 0;
   int currLenOfKingVisits = 0;
   
   for(int i=0;i<len+kingVisits;i++)
   {
       int ele;
       cin>>ele;
       
       if(ele == -1)
       {
           kingarr[currLenOfKingVisits] = i - currLenOfKingVisits;
           currLenOfKingVisits++;
       }
       else
       {
           arr[currLenOfArr] = ele;
           currLenOfArr++;
       }
   }
   
   for(int i=0;i<kingVisits;i++)
   {
       int kingPos = kingarr[i];
       int max = arr[0];
       int idx = 0;
       
       for(int j =0; j<kingPos;j++)
       {
           if(arr[j] > max)
           {
               max = arr[j];
               idx = j;
           }
       }
       
       cout<<max<<endl;
       arr[idx] = -1;
   }
}