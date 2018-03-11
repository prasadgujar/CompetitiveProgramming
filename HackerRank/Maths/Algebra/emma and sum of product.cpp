#include<iostream>
#include<vector>
#include<cmath>
#include<complex>
using namespace std;
#define PB push_back
const double PI = 4*atan(1);
typedef complex<double> base;
vector<base> omega;
long long FFT_N,mod=100003;
void init_fft(long long n)
{
  FFT_N  = n;
  omega.resize(n);
  double angle = 2 * PI / n;
  for(int i = 0; i < n; i++)
    omega[i] = base( cos(i * angle), sin(i * angle));
}
void fft (vector<base> & a)
{
  long long n = (long long) a.size();
  if (n == 1)  return;
  long long half = n >> 1;
  vector<base> even (half),  odd (half);
  for (int i=0, j=0; i<n; i+=2, ++j)
    {
      even[j] = a[i];
      odd[j] = a[i+1];
    }
  fft (even), fft (odd);
  for (int i=0, fact = FFT_N/n; i < half; ++i)
    {
      base twiddle =  odd[i] * omega[i * fact] ;
      a[i] =  even[i] + twiddle;
      a[i+half] = even[i] - twiddle;
    }
}
void multiply (const vector<long long> & a, const vector<long long> & b, vector<long long> & res)
{
  vector<base> fa (a.begin(), a.end()),  fb (b.begin(), b.end());
  long long n = 1;
  while (n < 2*max (a.size(), b.size()))  n <<= 1;
  fa.resize (n),  fb.resize (n);

  init_fft(n);
  fft (fa),  fft (fb);
  for (size_t i=0; i<n; ++i)
    fa[i] = conj( fa[i] * fb[i]);
  fft (fa);
  res.resize (n);
  for (size_t i=0; i<n; ++i)
    {
      res[i] = (long long) (fa[i].real() / n + 0.5);
      res[i]%=mod;
    }
}
int main()
{
  int t,n,i,p,l,k,q;
  long long x;
  vector<long long> inp,res;
  vector<vector<long long> > calc[20];
  cin>>n;
  p=0;l=n;
  for(i=0;i<n;i++)
    {
      inp.clear();
      cin>>x;
      inp.PB(1);
      inp.PB(x);
      calc[0].PB(inp);
    }
  while(l>1)
    {
      p++;
      for(i=0;i<l/2;i++)
        {
          calc[p].PB(res);
          multiply(calc[p-1][2*i],calc[p-1][2*i+1],calc[p][i]);
        }
      if(l%2)
        calc[p].PB(calc[p-1][l-1]);
      l=calc[p].size();
    }
  cin>>q;
  while(q--)
    {
      cin>>k;
      cout<<calc[p][0][k]<<endl;
    }
  return 0;
}
