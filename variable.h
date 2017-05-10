#pragma once

//welcome to matthew land

#include <iostream>
#include <unordered_map>
using namespace std;

class Var {
	unordered_map<char, int> vars;

	public:
		int get_val(const char name);
		void set_val(const char name, const int val);
};
