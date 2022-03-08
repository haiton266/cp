#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100001],f[100001];
ll n,m;
map<ll,ll> mark;
ll ln = 100000;

void update(ll i){
	while (i <= ln){
		f[i] = f[i] + 1;
    	i = i + (i & -i);
	}
}
ll fenwick_tree(ll left, ll right){
	ll sum=0;
	while (left<=right){
		if (right - (right&-right) + 1 >=left){
			sum = sum + f[right];
			right = right - (right&-right);
		}
		else {
//			sum+=mark[right];
			right--;
		}
	}
	return sum;
}
void solve(){
	ll ans = 0;m = 0;
	for (ll i=1;i<=ln;i++) f[i] = 0;
	
    for (ll i = n; i >=1; i--) {
        ans += fenwick_tree(1,a[i]-1);
        update(a[i]);
    }
    cout << ans << endl;
}
int main(){
	cin >> n;
	for (int i=1;i<=n;i++) cin >> a[i];
//	fenwich_tree();
	solve();
//	cout << "van ok";
	return 0;
}
