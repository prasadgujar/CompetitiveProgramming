#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fast ios::sync_with_stdio(false);
#define fastio cin.tie(0);
ll n, m, type, l, r, value, a[100100];
struct node
{
    ll sum;
    ll val;
} segtree[600600];

void build(ll pos, ll st, ll en)
{
    segtree[pos].sum = 0; // initialize the sum to 0
    if (st > en)
    {
        return; //out of league
    }
    if (st == en) // completely within the range
    {
        segtree[pos].val = st;
        return;
    }
    ll mid = (st + en)>> 1;
    build(2 * pos, st, mid);         //build left subtree
    build(2 * pos + 1, mid + 1, en); //build right subtree
}

void update(ll pos, ll st, ll en, ll l, ll r, ll valu)
{
    if (st > en || l > en || r < st || l > r)
        return;
    if (st == en)
    {
        segtree[pos].sum += abs(segtree[pos].val - valu);
        segtree[pos].val = valu;
        return;
    }
    ll mid = (st + en) >> 1;
    update(2 * pos, st, mid, l, r, valu);
    update(2 * pos + 1, mid + 1, en, l, r, valu);
    segtree[pos].sum = segtree[2 * pos].sum + segtree[2 * pos + 1].sum;
}

ll query(ll pos, ll st, ll en, ll l, ll r)
{
    if (st > en || l > r || l > en || r < st) // out of league
    {
        return 0;
    }
    if (l <= st && en <= r) // completely fall with in range
    {
        return segtree[pos].sum;
    }
    ll mid = (st + en) >>1;
    ll query1 = query(2 * pos, st, mid, l, r);
    ll query2 = query(2 * pos + 1, mid + 1, en, l, r);
    return (query1 + query2);
}
int main()
{
    fast;
    fastio;
    cin >> n >> m;
    build(1, 1, n);
    while(m--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            cin >> value;
            update(1, 1, n, l, r, value);
        }
        else
        {
            ll ans = query(1, 1, n, l, r);
            cout << ans << '\n';
        }
    }
}