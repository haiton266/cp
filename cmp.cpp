#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll ri = 1e4;
const ll le = 1;
// Tên chương trình
const string NAME = "template";
// Số test kiểm tra
const int NTEST = 100;
// REMEMBER CREAT ct.exe & trau.exe
int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp(("input.inp"));
        // Sinh test
        // inp << 1 << endl;
        ll n = 1 + (ll)(rand()) % 1234;
        ll s = 1 + (ll)(rand()) % 10017;
        inp << n << " " << s << endl;
        for (int i = 1; i <= n; i++)
            inp << (ll)(rand()) % 117 << " ";
        inp << endl;
        // Finished
        inp.close();
        system(("ct.exe"));
        system(("trau.exe"));
        if (system(("fc output.out answer.ans")) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}