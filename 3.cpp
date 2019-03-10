#include <iostream>
using namespace std;
int maxs(int n) {
	int i;
	for (i = 1; i*i <= n; i++);
	return i-1;
}
int solve(int n,int x,int *a) {
	//for (x = 1; x*x <= n; x++);
	if (0 == n)
		return 0;
	else if (a[n-1] != 0)
		return a[n-1];
	else {
		int c = 1 + solve(n - x*x, maxs(n - x*x),a);
		for (int i = x - 1; i > 0; i--) {
			int c2 = 1 + solve(n - i*i, maxs(n - i*i),a);
			if (c2 < c) {
				c = c2;

			}
		}
		a[n-1] = c;
		return c;
	}
}
int main() {
	cout << "输入一个整数：";
	int n;
	cin >> n;
	int *a = new int[n]();
	cout << "该整数能分解出的最少平方数为：" << solve(n, maxs(n),a) << endl;
	//cout << a[49] << endl;
	system("pause");
}

/*
12:

solve(3,1); -> solve(2,1) -> solve(1,1); ->

*/