#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
using namespace std;

int main(){
	ofstream odd("odd.txt");
	ofstream even("even.txt");

	istream_iterator<int> it(cin);
	istream_iterator<int> eof;
	
	ostream_iterator<int> output_odd(odd, " ");
	ostream_iterator<int> output_even(even, " ");
	while (it != eof)
	{
		if (*it % 2 != 0){
			*output_even++ = *it++;
		}
		else
		{
			*output_odd++ = *it++;
		}
	}
	odd.close();
	even.close();

	return 1;
}
