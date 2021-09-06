# include<bits/stdc++.h>
using namespace std;
#define inf 100000000
#define int long long
#define ll long long
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define repn(i,a,b) for(int i = a-1; i >=0; i--)
#define prDouble(x) cout << fixed << setprecision(10) << x
#define endl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
signed main()
{
    fast_io;
    int p,q,w,h,i,j,k,l,m,r,n,t,x,a,b,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        swap(a,b);
        x=a-b;
        int pre[100005];
        pre[1]=1;
        for(i=2;i<=100005;i++)
        {
            pre[i]=pre[i-1]+i;
        }
        if(a==b)
        {cout<<0<<endl;continue;}
        //for(i=1;i<=10;i++)
          //  cout<<pre[i]<<"   ";
        for(i=1;i<=100005;i++)
        {
            if((pre[i]+x)%2==0 && (abs(pre[i]-x)%2==0) && pre[i]>=x)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
