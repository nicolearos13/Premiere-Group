#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;



int main()
{

int operand = 0;
string operation;

while (cin){

	cin >> ws; // eat any whitespace

int c = cin.peek();

if(c == EOF) return 0; // if it's the end of file, quit.

if(!isdigit(c)){ // is the next input a digit or not

	cin >> operation;

	if(operation == "QUIT" || operation == "quit") return 0;

}

else{

	cin >> operand;


}




	}
}
