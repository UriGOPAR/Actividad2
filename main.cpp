// =================================================================
//
// File: main.cpp
// Author:
// Date:
//
// =================================================================
#include <iostream>
#include <vector>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include <fstream> 

using namespace std;

int main(int argc, char* argv[]) {
	ifstream input;
	ofstream output;

	vector<int> vecuno;
	vector<int> vecdos;
	vector<int> vectres;

	if (argc!=3){
		cout<<"ERROR"<<endl;
		return -1;
	}
	input.open(argv[1]);
	if (!input.is_open()) {
        cout << argv[0] << ": File \"" << argv[1] << "\" not found\n";
        return -1;
    }
	output.open(argv[2]);
	

	return 0;
}
