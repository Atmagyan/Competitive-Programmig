// Chef_Rainbow_Array.cpp

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(t)               int x; cin>>x; while(x--)
// mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;

    
void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main(int argc, char const *argv[])
{
	w(t){

		int n;

		cin>>n;

		vi arr(n);

		loop(i, 0, n-1){
			cin>>arr[i];
		}

		int p1 = 0;
		int p2 = n-1;

		bool flag = true;

		if(arr[p1]!=1){
			flag = false;
		}else{
			while(p1<p2){
				if(arr[p1]!=arr[p2]){
					flag = false;
					break;
				}
				if(arr[p1]!=arr[p1+1] and arr[p1]+1!=arr[p1+1]){
					flag = false;
					break;
				}
				p1 += 1;
				p2 -= 1;
				
			}
			if(arr[p1]!=7){
				flag = false;
			}
		}
		if(flag == true){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	
	}
	return 0;
}