#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int count = 0; int n1 = 1; int n2 = 1;
	while (count < size1 + size2) {
		if (n1>size1||(list1[n1] > list2[n2] && n2 <=size2)) {
			list3[count] = list2[n2];
			n2++;
		}
		else {
			list3[count] = list1[n1];
			n1++;
		}
		count++;
	}
}
int main() {
	int m;
	cout << "Enter list1:";
	cin >> m; int* list1 = new int[m + 1];
	for (int i = 1; i < m + 1; i++) {
		cin >> list1[i];
	}
	int n; 
	cout << "Enter list2:";
	cin >> n; int* list2 = new int[n + 1];
    for (int i = 1; i < n+1; i++) {
		cin >> list2[i];
	}
	int* list3 = new int[m + n];
	merge(list1, m, list2, n, list3);
	cout << "The merged list is ";
	for (int i = 0; i < m + n; i++) {
		cout << list3[i]<<" ";
	}
	delete[]list1;
	delete[]list2;
	delete[]list3;
	return 0;
}