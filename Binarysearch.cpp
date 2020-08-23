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

int less_than_equal(vector<int> &a,int &n,int &x)
{
	int l=-1,r=n;
	while(r>l+1)
	{
		int m = (l+r)/2;
		if(a[m] > x)
		{
			r=m;
		}
		else 
		{
			l=m;
		}
	}
	return l;
}

int greater_than_equal(vector<int> &a,int &n,int &x)
{
	int l=-1,r=n;
	while(r>l+1)
	{
		int m = (l+r)/2;
		if(a[m] < x)
		{
			l=m;
		}
		else
		{
			r=m;
		}
	}
	return r;
}

int if_equal(vector<int> &a,int &n,int &x)
{
	int l=0,r=n-1,ok=0;
	while(r>l)
	{
		int m = (l+r)/2;
		if(a[m] > x)
		{
			l=m;
		}
		else if(a[m] < x)
		{
			r=m;
		}
		else
		{
			ok=1;
			break;
		}
	}
	return ok;
}

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for (size_t i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int index;
	for(int i=0;i<k;i++)
	{
		int x;
		cin>>x;
		index=less_than_equal(a,n,x);
		if(index==-1)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<index+1<<endl;
		}
	}
	return 0;
}