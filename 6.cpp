
//
//  main.cpp
//  suanfa8
//
//  Created by northmachine on 2018/4/9.
//  Copyright  2018年 northmachine. All rights reserved.
//

#include <iostream>
using namespace std;
void exchange(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}
void quicksort(int s[], int l, int r)
{
	if (l< r)
	{
		int i = l, j = r, x = s[l];
		while (i < j)
		{
			while (i < j && s[j] >= x)
				j--;
			if (i < j)
				s[i++] = s[j];
			while (i < j && s[i]< x)
				i++;
			if (i < j)
				s[j--] = s[i];
		}
		s[i] = x;
		quicksort(s, l, i - 1);
		quicksort(s, i + 1, r);
	}
}
int suanfa8(int *a, int n) {
	quicksort(a, 0, n - 1);
	int r = -a[0];
	for (int i = 0; i<n; i++)
		r += (a[i] * (n - i));
	return r;
}
int main() {
	cout << "请输入你要输入的数的个数：" << endl;
	int n;
	cin >> n;
	cout << "请输入这几个数:" << endl;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout <<"合成所需最少能量为：" <<suanfa8(a, 4) << endl;
	system("pause");
}