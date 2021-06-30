#include<bits/stdc++.h>
using namespace std;
int count(vector<int> a,int n,int key)
{
   if(n==0)
        return 0 ;
   else
   {
       int j=n-1,i=0;
    while(i<j)
    {
    if(a[i]==key)
    {
    swap(a[i],a[j]);
    j--;
    }
    else
        i++;
    }
    return i+1;
   }
}
int main()
{
    int n,key;
    cin>>n>>key;
  vector<int> a(n);
  for(int i=0;i<n;i++)
        cin>>a[i];
cout<<count(a,n,key);

}
