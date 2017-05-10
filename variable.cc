#include "variable.h"

void die() { cout << "BAD INPUT"; exit(EXIT_FAILURE); }

int Variable::get_val(char name) {
	if (!isalpha(name)) die();

	int holder = -1;
	auto search = vars.find(name);
	if (search != vars.end()) {
		holder = search -> second;
		search -> second = holder + 1;
	}
	else die();

	return holder;
}

void Variable::set_val(char name, int val) {
	if (!isalpha(name)) die();
	else if (val < 0 || val > 255) die();

	if (vars.count(name) != 0) die();
	else vars.insert( {name, val} );
}
