// AlgorithmTest.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "SortedInsert.h"

#include <iostream>
#include <cstdio>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, length;
	cin >> n;
	cin >> length;
	for (int i = 0; i < n; i++) {
		Node *head = nullptr;
		for (int j = 0; j < length; j++) {
			int num;
			cin >> num;
			cout << num << ", ";
			head = SortedInsert(head, num);

		}
		cout << endl;
		printList(head);
	}

	//SortedInsert();
    return 0;
}

