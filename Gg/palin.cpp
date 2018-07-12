using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ss;
    ss = s;
    reverse(ss.begin(),ss.end());
    if(s==ss)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<'\n';
    }
}
int main() {
	//code 
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}