#include<vector>
#include<map>
#include<string>
#include<sstream>
#include <iostream>
#include<cctype>
#include<set>
using namespace std;

void read(string s) {
	char word;
	istringstream str(s);

	map<char, int> howmany;

	while (str >> word)
	{
		howmany[tolower(word)]++;

	}
	map <char, int > ::iterator it;
	for (it = howmany.begin(); it != howmany.end(); it++) {
		cout << it->first << " - > " << it->second << endl;
	}
}

int main()
{
	string sentence = "Free your mind and the rest will follow";
	read(sentence);
}




