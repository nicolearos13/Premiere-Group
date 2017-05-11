#include <algorithm>
#include <cstdlib>
#include <queue>
#include "variable.cc"
using namespace std;



int main()
{

int operand = 0;
string operation;
queue<char>operation;
queue<int>operand;

while (cin){

	cin >> ws; // eat any whitespace

int c = cin.peek();

if(c == EOF) return 0; // if it's the end of file, quit.

if(!isdigit(c)){ // is the next input a digit or not

	cin >> operation; // if not a digit, than must be operation or command
	operation.push(operation);

	if(operation == "QUIT" || operation == "quit") return 0;
	else if(operation == "LET"){ //where we assign variables values

	}
}

else if(isdigit(c)){

	cin >> operand; //if not a command/operat, must be an integer
	operand.push(operation);

}

else die();



	}
}
