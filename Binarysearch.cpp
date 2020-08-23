#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define ff first
#define ss second
#define pb push_back
#define pp pop_back

using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int x;

	for(int i=0;i<k;i++)
	{
		cin>>x;
		int max=n-1,min=0,mid;
		while(max>=min)
		{
			mid=(max+min)/2;
			if(a[mid]>x)
				max=mid-1;
			else if(a[mid]<x)
				min=mid+1;
			else 
				break;
		}
		// cout<<mid<<a[mid]<<endl;
		if(a[mid]==x)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}