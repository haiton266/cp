#include<bits/stdc++.h>
long a[10000],b[1000];
using namespace std;
void mergeSort(int l, int r){
	if (l<r){
		int i,j;
		int m = (l+r)/2;
		mergeSort(l,m);mergeSort(m+1,r);
		for (i=l;i<=m;i++) b[i]=a[i];
		for (j=m+1;j<=r;j++) b[r+m+1-j]=a[j];
		i = l; j = r;
		for (int k=l;k<=r;k++) 
			if (b[i]<b[j])
				{a[k] = b[i];i++;}
			else 
				{a[k] = b[j];j--;}
	}
}
int main(){
int n;cin >> n;
int i;
for (i=1;i<=n;i++) cin >> a[i];
mergeSort(1,n);
for (int i=1;i<=n;i++) cout << a[i] << " ";
return 0;
}
