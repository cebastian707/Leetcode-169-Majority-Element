/*BY::Cebastian Santiago
* Leetcode 169
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>


int majorityElement(std::vector<int>& nums) {
	//sort the vector 
	std::sort(nums.begin(), nums.end());
	std::map<int, int> hash;
	int max = 0;

	//insert the elements into the hash
	for (auto i : nums){
		hash[i]++;
	}

	//grab the most ferquent element that appears
	for (auto i : hash){
		max = std::max(max, i.second);
	}

	//grab the element and return it
	for (auto i : hash){
		if (max == i.second){
			return i.first;
		}

	}
	return 0;
}



int main(int arg, char* argv[]) {
	std::vector<int> num = { 3,2,3 };


	std::cout << majorityElement(num) << std::endl;


	return 0;
}