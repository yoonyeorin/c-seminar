#include <iostream>
using namespace std;

int sum(int n, int m){
	cout << n + m << endl;
	return 0;
}

int main(){
	//1��
	//cout << "Hello World" << endl;

	//return 0;

	//2��
	//int n, i, j;

	//cin >> n;

	//for (i = 1; i <= n; i++)
	//{
		//for (j = 1; j <= i; j++)
		//{
			//cout << "*";
		//}
		//cout << '\n';
	//}

	//return 0;

	//3��
	int n, m;

	cin >> n >> m;
	sum(n, m);
	
	cout << n - m << endl;
	cout << n * m << endl;
	cout << n / m << endl;

	return 0;
}