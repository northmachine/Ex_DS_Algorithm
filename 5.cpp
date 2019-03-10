//
//  main.cpp
//  suanfa7
//
//  Created by northmachine on 2018/4/9.
//  Copyright  2018年 northmachine. All rights reserved.
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
	cout << "请输入你要输入的数的个数：" << endl;
	int n;
	cin >> n;
	cout << "请输入这几个数:" << endl;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (get(a, n, 0))
		cout << "按照既定规则能达到最后一个数." << endl;
	else
		cout << "按照既定规则不能达到最后一个数." << endl;
	system("pause");
}