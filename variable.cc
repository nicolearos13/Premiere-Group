#include "variable.h"

void die() { cout << "BAD INPUT"; exit(EXIT_FAILURE); }

int Var::get_val(char name) {
	if (!isalpha(name)) die();

	//should never get passed this if/else but just in case
	int holder = -1;
	auto search = vars.find(name);
	//if it can't find a var then it can add it
	if (search != vars.end()) {
		holder = search -> second;
		search -> second = holder + 1;
	}
	else die();

	return holder;
}

void Var::set_val(char name, int val) {
	if (!isalpha(name)) die();
	else if (val < 0 || val > 255) die();

	//if key exists then die
	if (vars.count(name) != 0) die();
	else vars.insert( {name, val} );
}
