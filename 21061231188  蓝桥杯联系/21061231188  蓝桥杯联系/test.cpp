#include <iostream>
using namespace std;
#include <vector>



void test1(int n)
{
	vector<int> Tree(n,1);


	for (int i = 0; i < (n + 1) / 2; i++) {
		Tree[i] = (n - i) * 2;
		Tree[n - i + 1] = Tree[i];
	}

	for (int i = 0; i < n; i++) {
		cout << Tree[i];
		if (i != n) cout << "\n";
	}








}





const int N = 1e4 + 10;

int a[N], n;

int main()
{
	cin >> n;
	for (int i = 1; i <= (n + 1) / 2; i++) {
		a[i] = (n - i) * 2;
		a[n - i + 1] = a[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i];
		if (i != n) cout << "\n";
	}

	return 0;
}