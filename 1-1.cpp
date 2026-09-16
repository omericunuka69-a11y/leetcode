#include<iostream>
#include<vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target)
{

	for (int i = 0; i < nums.size(); i++) {

		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				/*cout << "[" << i << "," << j << "]" << endl;*/
				return{ i,j };
			}
		}
	}
	return{};
}


int main() {
	int n;//确定数组长度
	cin >> n;
	vector<int>arr(n);//定义一个数组
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	vector<int>arri=twoSum(arr, target);
	cout <<"[" << arri[0] <<"," << arri[1]<<"]";


	system("pause");
	return 0;

}