#pragma once
#include <string>
#include <iostream>
#include <regex>
using namespace std;

int main()
{

	regex r(".*\.(cpp|cxx|cc)$", regex::icase);
	regex r("[[:alnum:]] + \\.(cpp|cxx|cc)$", regex::icase);


	smatch results;
	string filename;

	while (cin >> filename)
	{
		if (regex_search(filename, results, r))
		{
			cout << results.str() << endl;
		}
		cout << "next" << endl;
	}


}
