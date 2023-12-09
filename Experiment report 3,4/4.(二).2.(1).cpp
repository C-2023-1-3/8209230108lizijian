#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2){
	for (int i = 0; i <= strlen(s2) - strlen(s1); i++)
	{
		char s3[60];
		s3[strlen(s1)] = '\0';
		strncpy_s(s3, s2 + i, strlen(s1));
		if (strcmp(s3, s1) == 0)
			return i;
	}
	return -1;
}
int main() {
	char s1[60], s2[60];
	cout << "Enter the first string: ";
	cin.get(s1, 60).get();
	cout << "Enter the second string :";
	cin.get(s2, 60).get();
	cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is " << indexof(s1, s2);

}


