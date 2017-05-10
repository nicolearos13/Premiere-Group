#include "variable.h"

void die() { cout << "BAD INPUT"; exit(EXIT_FAILURE); }

int Var::get_val(const char name) {
	if (!isalpha(name)) die();

	//should never get passed this if/else but just in case I'll init it to -1
	int holder = -1;
	//if it can't find a var then it can add it
	auto search = vars.find(name);
	if (search != vars.end()) {
		holder = search -> second;
		search -> second = holder + 1;
	}
	else die();

	return holder;
}

void Var::set_val(const char name, const int val) {
	if (!isalpha(name)) die();
	else if (val < 0 || val > 255) die();

	//if key exists then die
	if (vars.count(name) != 0) die();
	else vars.insert( {name, val} );
}
