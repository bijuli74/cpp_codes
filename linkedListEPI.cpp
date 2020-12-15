#include<bits/stdc++.h>
using namespace std;



typename <typedef T>
struct ListNode {
	T data;
	shared_ptr<ListNode<T>> next;
};

typedef shared_ptr<ListNode<int>> sptr;

sptr OverlappingNoCycleLists(sptr L1, sptr L2){
	int len1 = Length(L1), len2 = Length(L2);
	
	advListbyK(abs(L1-L2), len1> len2 ? &L1 : &L2);
	
	while(L1 && L2 && L1 != L2){
		L1 = L1->next, L2 = L2->next;
	}
	
	return L1;
}

int Length( sptr L){
	int len = 0;
	while(L){
		++len, L = L->next;
	}
	
	return len;
}

sptr advListbyK(int k, sptr* L){
	while(k--){ 
		*L = *L->next;
	}
}


	
		
	
	
