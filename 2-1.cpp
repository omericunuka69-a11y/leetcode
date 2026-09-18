#include<iostream>
using namespace std;
struct ListNode {//链表节点结构体
	int val;//当前节点存储得数
	ListNode* next;//指向下一个节点的指针
	//构造函数
	ListNode():val(0),next(nullptr){}
	ListNode(int x):val(x),next(nullptr){}
	ListNode(int x,ListNode *next):val(x),next(){}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* dummy = new ListNode();
	ListNode* cur = dummy;
	int carry = 0;
	while (l1 != nullptr  l2 != nullptr || carry != 0) {
		int v1



	}






}



int main() {






	system("pause");
	return 0;
}