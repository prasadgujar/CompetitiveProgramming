#include <cstdio>
#include <algorithm>
using namespace std;

struct flight
{
	int u0,t0,u1,t1;
	flight(){}
	flight(int u0_,int t0_){u0=u0_;t0=t0_;}
	void read()
	{
		scanf("%d%d%d%d",&u0,&t0,&u1,&t1);
	}
	bool operator<(const flight &a) const
	{
		return u0<a.u0 || u0==a.u0 && t0<a.t0;
	}
};

const int maxN = 10000;
flight a[maxN];
int mark[maxN];

int main()
{
	int TST;
	scanf("%d",&TST);
	for(int tst=0;tst<TST;tst++)
	{
		int n;
		scanf("%d",&n);
		int i;
		for(i=0;i<n;i++)
		{
			a[i].read();
			mark[i]=0;
		}
		sort(a,a+n);
		int u,t,u_end,t_end;
		scanf("%d%d%d%d",&u,&t,&u_end,&t_end);
		int cnt=0;
		int ans=-1;
		for(;ans<0;)
		{
			if(u==u_end && t<=t_end) ans=1; else
			{
				int i=lower_bound(a,a+n,flight(u,t))-a;
				if(i==n || mark[i] || a[i].u0!=u) ans=0; else
				{
					cnt++;
					mark[i]=1;
					u=a[i].u1;
					t=a[i].t1;
				}
			}
		}
		if(ans)
			printf("Yes %d\n",cnt);
		else
			puts("No");
	}
	return 0;
}
