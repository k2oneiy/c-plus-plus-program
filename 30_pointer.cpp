#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 10;
	cout<<&a<<endl;
	int* pointer = &a;
	cout<<pointer;
	return 0;
	
}
