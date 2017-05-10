#pragma once

//welcome to matthew land

#include <iostream>
#include <unordered_map>
using namespace std;

class Var {
	unordered_map<char, int> vars;

	public:
		int get_val(char name);
		void set_val(char name, int val);
};
