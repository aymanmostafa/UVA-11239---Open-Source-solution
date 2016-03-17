//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 11239 - Open Source
	string s, pro;
	set<pair<int, string>> res;
	map<string, int> mst;
	set < string > sett;
	map<string, set<string>> m;
	bool yea = true;
	while (getline(cin, s)) {
		if (s == "0")
			break;
		if (s == "1") {
			m[pro] = sett;
			for (auto i : m) {
				int c = 0;
				for (auto k : i.second)
					if (mst[k] == 1)
						c++;
				res.insert(make_pair(0 - c, i.first));
			}
			for (auto i : res)
				cout << i.second << " " << abs(i.first) << endl;
			res.clear();
			mst.clear();
			sett.clear();
			m.clear();
			yea = true;
			continue;
		}
		if (yea) {
			pro = s;
			yea = false;
		} else if (isupper(s[0])) {
			m[pro] = sett;
			sett.clear();
			pro = s;
		} else {
			if (sett.find(s) == sett.end()) {
				sett.insert(s);
				mst[s]++;
			}
		}
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
