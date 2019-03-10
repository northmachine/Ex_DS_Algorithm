#include <iostream>
#include <string>
using namespace std;
bool isPal(string a) {
	for (int i = 0; i <= (int)(a.length() / 2)-1; i++)
		if (a[i] != a[a.length() - 1- i])
			return false;
	return true;
}
void seprate(string a, int *c, int *t) {
	for (int i = 0; i < a.length(); i++) {
		if (isPal(a.substr(0, i + 1)))
			c[i] = 0;
		else
			c[i] = i + 1;
		for (int j = i; j >= 0; j--) {
			if (isPal(a.substr(j, i + 1 - j))) {
				c[i] = (c[i] < c[j - 1] + 1) ? c[i] : (0 == j ? 0 : ((c[j - 1] + 1)));
				t[i] = j;
			}
		}
	}
}
void printStr(string s, int *t,int l) {
	if (l >= 0) {
		printStr(s.substr(0,t[l]), t, t[l] - 1);
		for (int i = 0; i < s.substr(t[l], l + 1 - t[l]).length(); i++)
			cout << s.substr(t[l], l + 1 - t[l])[i];
		cout << ' ';
	}
	else
		return;
}
int main() {
	cout << "请输入一个字符串：" << endl;
	string a;
	cin >> a;
	int *c = new int[a.length()]();
	int *t = new int[a.length()]();
	seprate(a, c, t);
	cout << "这个字符串能分割" << c[a.length() - 1] << "次能成为数目最少的回文串." << endl;
	//for (int i = 0; i < a.length(); i++)
	//	cout << t[i] << ' ';
	//cout << endl;
	printStr(a, t, a.length() - 1);
	cout << endl;
	system("pause");
}