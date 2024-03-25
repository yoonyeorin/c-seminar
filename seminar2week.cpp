#include <iostream>
#include <string>
using namespace std;

//void sumVoid(int a, int b){
//	cout << a + b;
//}
//
//int sumInt(int a, int b){
//
//	return a + b;
//}
//
//int main(){
//	int n, m;
//
//	cin >> n >> m;
//	cout << sumInt(n, m);
//	return 0;
//}

//int max(int a, int b){
//	if (a > b)
//	{
//		return a;
//	}
//	else if (a < b)
//	{
//		return b;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main(){
//	int n, m;
//
//	cin >> n >> m;
//
//	cout << max(n, m);
//
//	return 0;
//}

//void star(int a)
//{
//	int i, j;
//	int s = 1;
//	for (i = 0; i < a; i++)
//	{
//		for (int h = 0; h < a - i - 1; h++)
//		{
//			cout << ' ';
//		}
//		for (j = 0; j < s; j++)
//		{
//			cout << '*';
//		}
//		cout << '\n';
//		s += 2;
//	}
//}
//int main(){
//	int n;
//
//	cin >> n;
//
//	star(n);
//
//	return 0; 
//}
class Item{
	public: Item(){
				itemName = "null";
				price = 0;
	}
			string itemName;
			int price;


};
int main(){

	Item item;

	cout << item.itemName;
	cout << item.price;

	cout << endl << endl;

	item.itemName = "피바라기";
	item.price = 3400;

	cout << item.itemName;
	cout << item.price;

	return 0;
}