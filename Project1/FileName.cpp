#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int N, M;
	int min = 100, max = 0, sum = 0;
	vector<int> iters;

	do {
		cout << "2~100까지 입력한다." << endl;
		cin >> N;
	} while (N < 2 && N > 100);

	for (int a = 0; a < N; a++)
	{
		cin >> M;
		iters.push_back(M);
	}
	for (int iter : iters) {
		//for(auto iter = iters.begin(); iter < iters.end(); iter++){
		max = max > iter ? max : iter;
		min = min < iter ? min : iter;
	}
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	cout << "max-min = " << max - min << endl;
	cout << "Test Test" << endl;

}
