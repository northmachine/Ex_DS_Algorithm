#include <iostream>
using namespace std;
int a = 0;
void fenjie(int i);
int main() {
	cout << "������һ����������" << endl;
	int n;
	cin >> n;
	fenjie(n);
	cout << "������" << n << "����" << a << "�ֲ�ͬ�ķֽ�ʽ." << endl;
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