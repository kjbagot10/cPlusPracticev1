#include <iostream>

using namespace std; // removes need to put std etc;

int main() 
{
	int a = 1;
	int b =2 ;
	int a_prev = a;
	a = b;
	b = a_prev;
	
	cout << a;
	cout << b;
	return 0;
}


