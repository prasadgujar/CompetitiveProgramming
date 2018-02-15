#include <stdio.h>

typedef long long LL;

struct sol
{
	int x,a,d;
	sol(){}
	sol(int x_,int a_,int d_){x=x_;a=a_;d=d_;}
	void print()
	{
		printf("%d %d %d\n",x+1,a,a+d);
	}
};

LL cnt(int w,int k)
{
	int x=w/k;
	int q=w/x;
	return LL(q-k+1)*(w%k+w%x+2)/2;
}

LL S(int n,int x)
{
	LL q=n/x;
	int r=n%x;
	return q*(q-1)/2*x+q*r+q;
}

sol nth_arithm_prog(int L,int R,int k,LL n)
{
	int w=R-L;
	int x=w/k;
	if(n>cnt(w,k)) return sol(x,0,0);
	int r=w%k;
	int lo=-1;
	int hi=r;
	while(lo+1<hi)
	{
		int a=(lo+hi)/2;
		LL s=S(r,x)-S(r-a-1,x)+a+1;
		if(s<n) lo=a; else hi=a;
	}
	int a=hi;
	n-=S(r,x)-S(r-a,x)+a;
	return sol(x,L+a,k+n-1);
}

int main()
{
	int TST;
	scanf("%d",&TST);
	for(int tst=0;tst<TST;tst++)
	{
		int L,R,k;
		LL n;
		scanf("%d%d%d%lld",&L,&R,&k,&n);
		sol ans=nth_arithm_prog(L,R,k,n);
		ans.print();
	}
	return 0;
}
