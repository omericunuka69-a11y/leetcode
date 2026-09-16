#include<iostream>

#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
	int interval = 0;//interal前面按顺序排列,后面全是0
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0) {
			nums[interval] = nums[i];
			interval++;
		}	
	}for (int j = interval; j < nums.size(); j++) {
			nums[j] = 0;
	}


}



int main() {





	system("pause");
	return 0;
}