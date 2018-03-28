#include <stdio.h>
#include <math.h>
#include <bits/stdc++.h>
int getmid(int s, int e)
{
    return s + (e - s) / 2;
}

int getsumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
    {
        return st[si];
    }

    if (se < qs || ss > qe)
    {
        return 0;
    }

    int mid = getmid(ss, se);

    return getsumUtil(st, ss, mid, qs, qe, 2 * si + 1) +
           getsumUtil(st, mid + 1, se, qs, qe, 2 * si + 2);
}
void updatevalueUtil(int *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
    {
        return;
    }

    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getmid(ss, se);
        updatevalueUtil(st, ss, mid, i, diff, 2 * si + 1);
        updatevalueUtil(st, mid + 1, se, i, diff, 2 * si + 2);
    }
}

void updatevalue(int a[], int *st, int n, int i, int new_val)
{
    if (i < 0 || i > n - 1)
    {
        return;
    }
    int diff = new_val - a[i];
    a[i] = new_val;
    updatevalueUtil(st, 0, n-1, i, diff, 0);
}
int getsum(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        return -1;
    }
    return getsumUtil(st, 0, n - 1, qs, qe, 0);
}
int constructSgUtil(int a[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = a[ss];
        return a[ss];
    }

    int mid = getmid(ss, se);
    st[si] = constructSgUtil(a, ss, mid, st, si * 2 + 1) +
             constructSgUtil(a, mid + 1, se, st, si * 2 + 2);
}
int *constructsg(int a[], int n)
{
    int x = (int)(ceil(log2(n))); //height of tree
    int max_size = 2 * (int)pow(2, x) - 1;
    int *st = new int[max_size];
    constructSgUtil(a, 0, n - 1, st, 0);
    return st;
}
int main()
{
    // int n,q;
    //int a[] = {1, 3, 5, 7, 9, 11};
    //int n = sizeof(a) / sizeof(a[0]);
    //int *st = constructsg(a,n);
    int n, q;
    //cin>>n>>q;
    scanf("%d%d", &n, &q);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        //cin>>a[i];
        scanf("%d", &a[i]);
    }
    int *st = constructsg(a, n);
    for (int i = 1; i <= q; i++)
    {
        int t;
        //cin>>t;
        scanf("%d", &t);
        if (t == 1)
        {
            int x, y;
            scanf("%d%d", &x, &y);
            //cin>>x>>y;
            //a[x] = y;
            updatevalue(a, st, n, x, y);
        }
        else
        {
            int l, r;
            scanf("%d%d", &l, &r);
            //cin>>l>>r;
            //int sum = 0;
            //l--;
            //r--;
            /*for(int j=l;j<=r;j++)
	        {
	            sum +=a[j];
	        }
	        cout<<sum<<'\n';*/
            printf("%d\n", getsum(st, n, l, r));
        }
    }
    return 0;
}