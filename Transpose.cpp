#include <iostream>

using namespace std;

int main(){
	
	cout << "-----------------------" << endl;
	
	cout << "Abdul Rafey Siddiqui" << endl;
	
	cout << "-----------------------" << endl;
	
	int arr[3][3];
	
	int transposition[3][3];
	
	cout << "Enter 2D Array's Elements: " << endl;
	
	for (int i = 0; i < 3; i++){
		
		for (int j = 0; j < 3; j++){
			
			cin >> arr[i][j];
		}
	}
	
	cout << endl;
	
	cout << "Original Array's Elements:" << endl;
	
	for (int i = 0; i < 3; i++){
		
		for (int j = 0; j < 3; j++){
			
			cout << arr[i][j];
			
			cout << " ";
		}
		
		cout << endl;
	}
	
	
	for (int i = 0; i < 3; i++){
		
		for (int j = 0; j < 3; j++){
			
			transposition[j][i] = arr[i][j];
		}
}

cout << endl;

cout << "The Transpostioned Array is:" << endl;
	
	for (int i = 0; i < 3; i++){
		
		for (int j = 0; j < 3; j++){
			
			cout << transposition[i][j];
			
			cout << " ";
		}
		
		cout << endl;
	}
	
}
