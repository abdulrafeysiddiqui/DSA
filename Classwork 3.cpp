#include <iostream>

using namespace std;

class MyArray{
	
int size;

int index=0;

int* arr;

public:
	
MyArray(int capacity){
	
arr=new int[capacity];

size=capacity;

}

void display(){
	
for(int i=0; i<size; i++){
	
cout<<*(arr+i)<<" ";

}

}

void fillArray(int val){
	
if(index!=size){
	
*(arr+index)=val;

index++;

}

else{
	
cout<<"Array is full"<<endl;

}

}

};

int main(){

MyArray arr(5);

arr.fillArray(8);

arr.fillArray(1);

arr.fillArray(9);

arr.fillArray(4);

arr.fillArray(5);

arr.fillArray(6);

arr.display();
}

