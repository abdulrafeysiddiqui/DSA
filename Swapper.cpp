#include <iostream>

using namespace std;

int main(){
	
	int a = 5;
	
	int b = 3;
	
	cout << "Original Value for a: " << a << endl;
	
	cout << "Original Value for b: " << b << endl;
	
	a = a + b;
	
	b = a - b;
	
	a = a - b;
	
	cout << endl;
	
	cout << "The swapped value for a is: " << a << endl;
	
	cout << "The swapped value for b is: " << b << endl;
	
}
