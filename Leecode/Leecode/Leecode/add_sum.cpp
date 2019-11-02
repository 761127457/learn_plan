#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> tmp;
	vector<int>::iterator bgn = nums.begin();
	vector<int>::iterator idx = bgn;
	vector<int>::iterator later = bgn;
	for (idx = nums.begin(); idx < nums.end() - 1; idx++) {
		for (later = idx + 1; later < nums.end(); later++) {
			if (((*idx) + (*later)) == target) {
				tmp.push_back(idx - bgn);
				tmp.push_back(later - bgn);
				break;
			}
		}
	}
	return tmp;
}

int main()
{
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	vector<int> tmp = twoSum(nums, target);
	for (vector<int>::iterator itr = tmp.begin(); itr != tmp.end(); itr++) {
		cout << *itr << endl;
	}
	return 0;
}
