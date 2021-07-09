//   Count Matrix
#include <iostream>
#include <vector>

using namespace std;
vector <int> erkuakan(int num){ 
vector <int> arr;
	for(num;num>0;num/=2)
	{
		arr.push_back(num%2);
	}
return arr;
	}

int main() {

//Creat integers for count matrix:

	int sum = 0;
	int num = 0;
	cout << "Insert matrix line: "<<endl;
	int arr[5][5];

		for (int i = 0; i < 5; i++) {
			for (int j= 0; j < 5; j++) {
				int x;
				cin>>arr[i][j];
			}
		}

	//Counting insterted numbers in array:
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < i; j++) {
			sum += arr[i][j];
}
	}
		for (int j = 0; j < 5; j++) {
			for (int i = 0; i < j; i++) {
			num += arr[i][j];
			}
		}

		for (int  i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
			cout << arr[i][j]<< " ";
			}

			cout << endl;

		}


vector<int> ban=erkuakan(num);
for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
	}
}
	cout << num << endl;
	cout << sum << endl;
	return 0;
	}
