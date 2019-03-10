#include <iostream>
using namespace std;
int a = 0;
void fenjie(int i);
int main() {
	cout << "请输入一个正整数：" << endl;
	int n;
	cin >> n;
	fenjie(n);
	cout << "正整数" << n << "共有" << a << "种不同的分解式." << endl;
	system("pause");
}
void fenjie(int n) {
	if (n == 1) {
		a++;
		return;
	}
	else {
		for (int i = 2; i <= n; i++) {
			if (n%i == 0)
				fenjie(n / i);
		}
	}
}