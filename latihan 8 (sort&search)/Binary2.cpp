#include <bits/stdc++.h>
using namespace std;
bool vowel(int vo)
{
	
	if (vo == 0 || vo == 4 || vo == 8 || vo == 14 || vo == 20)
		return true; 
	else
		return false;
}

bool check(string s, int k)
{
	vector<int> cnt(26, 0);
	for (int i = 0; i < k - 1; i++) {
		cnt[s[i] - 'a']++;
	}
	
	for (int i = k - 1; i < s.size();
		i++) {
		cnt[s[i] - 'a']++;
		int flag1 = 0;
		for (int j = 0; j < 26; j++) {
			if (vowel(j) == false
				&& cnt[j] > 0) {
				flag1 = 1;
				break;
			}
		}
		if (flag1 == 0)
			return true;
		
		cnt[s[i - k + 1] - 'a']--;
	}

	return false;
}


int longestSubstring(string s)
{
	int l = 1, r = s.size();
	int maxi = 0;

	
	while (l <= r) {
		int mid = (l + r) / 2;
		if (check(s, mid)) {
			l = mid + 1;
			maxi = max(maxi, mid);
		}
		else
			r = mid - 1;
	}
	return maxi;
}


int main()
{
	string s = "sedrewaefhoiu";
	cout << longestSubstring(s);

	return 0;
}
