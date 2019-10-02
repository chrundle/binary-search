#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int l,int r,int key)
{
	while(l<=r)
	{
		int m;
		m=l+(r-l)/2;
		if(key==a[m])
			return m;
		else if(key<a[m])
			r=m-1;
		else
			l=m+1;
	}
	return -1;
}
int main()
{
	int n,key,i,res;

	//Enter size fo an array
	cin >> n;

	//Enter array elements
	int a[n];
	for(i=0;i<n;i++)
        cin>>a[i];

    //Enter key
	cin>>key;

	//Binary Search
	res=binary_search(a,0,n-1,key);

	//Found at the index
	if(res!=-1)
		cout<<res<<endl;
	else
		cout<<key<<"not found"<<endl;
	return 0;
}
