#include<bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int T,n,a[N];
signed main(){
	cin>>T;
	while(T--){
		cin>>n;int sum=0,ans=0,f=0;
		for(int i=1;i<=n;++i)cin>>a[i];a[n+1]=0;
		sort(a+1,a+n+1);int now=1;
		for(int i=1;i<=n+1;++i){
			while(now<=n&&a[now]<i)sum+=a[now]-1,f+=a[now]-1,++now;
			if(a[now]!=i){
				if(a[now]>i)sum+=a[now]-i;
				else{
					ans=i;
					for(int j=now;j<=n;++j)sum+=a[j]-1,f+=a[now]-1;
					break;
				}
			}
			if(now<=n)++now;
		}
		if(sum>=ans&&sum-ans<=f)++ans;
		cout<<ans<<'\n';
	}
	return 0;
}
