#include <iostream>

using namespace std;

int main(){
	
	cout << "-----------------------" << endl;
	
	cout << "Abdul Rafey Siddiqui" << endl;
	
	cout << "-----------------------" << endl;
	
	int arr[15];
	
	int count[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		
	cout << "Enter Array's Elements: " << endl;
	
	for (int i = 0; i < 15; i++){
			
			cin >> arr[i];
		}
		
	for (int i = 0; i < 15; i++){
		for (int j = 0; j < 15; j++){
			
			if (arr[i] == arr[j]){
				
				count[i] += 1;
			}
		}
	}
	
	for (int i = 0; i < 15; i++){
		
		cout << endl;
		
		cout << "The " << arr[i] << " element has appeared " << count[i] << " times." << endl;
		
		cout << endl;
	}
	}
