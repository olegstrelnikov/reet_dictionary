/*
 * test.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: Oleg Strelnikov
 */

#include <iostream>
#include <string>

#include <reet/dictionary.hpp>

namespace {

std::map<int, std::string> g() {
	std::map<int, std::string> result;
	result[1] = "One";
	result[3] = "Three";
	return result;
}

reet::Dictionary<int, std::string> d(g(), "__unknown__");

}

const char* toStr(int n) {
	return d.get(n).data();
}

int main() {
	int n[] = { 0, 1, 2, 3, 2, 4, 3 };
	for (size_t i = 0; i < sizeof(n) / sizeof(*n); ++i) {
		std::cout << n[i] << " ==> \"" << toStr(n[i]) << "\"\n";
	}
	return 0;
}
