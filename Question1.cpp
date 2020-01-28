#include <iostream>
#include <bits/stdc++.h>


/*
Link for Question : https://www.codechef.com/IARCSJUD/problems/LEADGAME

*/
using namespace std;

int main()
{
   int n; 
   
   cin>>n;
   
   int maxDiff = INT_MIN;
   int player;
   
   int p1Score = 0;
   int p2Score = 0;
   
   for(int i=0;i<n;i++)
   {
       int s1, s2;
       
       cin>>s1>>s2;
       
       p1Score += s1;
       p2Score += s2;
       
       int diff = p1Score>p2Score ? p1Score-p2Score : p2Score - p1Score;
       if (diff > maxDiff)
       {
           maxDiff = diff;
           player = p1Score > p2Score ? 1 : 2;
       }
   }
   
   cout<<player<<" "<<maxDiff;
}