// is parallelogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
bool isParallelogram(std::vector<int> arr)
{
	sort(arr.begin(), arr.end());
	if ((arr[0] == arr[1]) && (arr[2] == arr[3]) && (arr[0] != 0 && arr[2] < 180 && arr[0] + arr[3] == 180 && arr[1]>0))
		return true;
	return false;
}
int main()
{
	vector<int>arr{ -90,270,270,-90 };
	
	cout << isParallelogram(arr);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
