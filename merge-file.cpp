#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdexcept>
using namespace std;

int main() {
	vector<string> files;
	files.push_back("a1.txt");
	files.push_back("b2.txt");
	files.push_back("c3.txt");

	vector<string>::const_iterator it = files.begin();
	string s;
	string string_out = "out.txt";
	fstream input,output;

	while (it != files.end())
	{
		input.open(it->c_str(), fstream::in);
		output.open(string_out.c_str(), fstream::app);
		/*
		if (!input)
			throw runtime_error("Input IO Error");
		if (!output)
			throw runtime_error("Input IO Error");
			*/
		// output file name
		output << *it << endl;
		while (getline(input, s))
		{
			cout << s << endl;
			output << s << endl << endl;
		}
		
		
		input.close();
		input.clear();
		output.close();
		output.clear();
		++it;
	}
	return 0;
}
