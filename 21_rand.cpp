#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	srand(time(0));
	for(int i=0;i<=10;i++){
		cout<<(rand()%6)+1<<endl;
	}

	return 0;
}
