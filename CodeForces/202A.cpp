//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : problem/202/A. LLPS
//============================================================================

#include <bits/stdc++.h>

#define ll long long
using namespace std;
string largestPalinSub(string s)
{
    string res;

    char mx = s[0];

    // Find the largest character
    for (int i = 1; i < s.length(); i++)
        mx = max(mx, s[i]);

    // Append all occurrences of largest character
    // to the resultant string
    for (int i = 0; i < s.length(); i++)
        if (s[i] == mx)
            res += s[i];

    return res;
}
int main()
{
	string s, res;
	cin >> s;
	res = largestPalinSub(s);
	cout<<res<<endl;
	return 0;
}
