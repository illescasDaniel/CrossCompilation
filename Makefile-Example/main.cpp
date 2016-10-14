#include <iostream>
#include <vector>
#include "Human.h"

using namespace std;

int main(int argc, char *argv[]) {
	
	vector<int> numbers = {1,2,3,4};
	
	for(auto&& number: numbers) {
		cout << number << ' ';
	}
	cout << endl;
	
	//
	
	Human daniel;
	
	cout << daniel.age << endl;
}