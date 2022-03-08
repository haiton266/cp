#include <bits/stdc++.h>
using namespace std;
struct ss{
	int a;
	int b;
};
bool cmp(ss x, ss y) // cmp tuc la vi du
{
       return x.a > y.a; // Muc dich la x.a>y.a tuc la sap xep giam dan theo a
};
int main(){
ss t[100];
int n=2;
t[1].a=1;t[1].b=2;
t[2].a=2;t[2].b=223;
sort(t+1,t+n+1,cmp);
cout << t[1].a << " " << t[1].b << endl;
cout << t[2].a << " " << t[2].b;

}
