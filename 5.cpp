//
//  main.cpp
//  suanfa7
//
//  Created by northmachine on 2018/4/9.
//  Copyright  2018�� northmachine. All rights reserved.
//

#include <iostream>
#include <iostream>
using namespace std;
bool get(int *a, int n, int x) {
	if (x >= n - 1)
		return true;
	else if (a[x] == 0)
		return false;
	else
		return get(a, n, a[x] + x);
}
int main() {
	cout << "��������Ҫ��������ĸ�����" << endl;
	int n;
	cin >> n;
	cout << "�������⼸����:" << endl;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (get(a, n, 0))
		cout << "���ռȶ������ܴﵽ���һ����." << endl;
	else
		cout << "���ռȶ������ܴﵽ���һ����." << endl;
	system("pause");
}