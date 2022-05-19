/*9.	Write a program that outputs the first N natural numbers in a rectangle with a given width (W).
        The width is the number of symbols (not numbers) in a line!
        Numbers are printed in ascending order sequentially in horizontal direction until line is complete and the sequence continues on the next line,
        etc. No spaces. The text on the console shall look as a rectangular block (the last line may be incomplete).
        N and W are entered by the user.*/

#include <iostream>
#include<string>
#include <algorithm>
using namespace std;


int main()
{

	int n;
	int w;
	cout << "Input numbers: " << endl;
	cin >> n;
	cout << "Input width: " << endl;
	cin >> w;
	string wStr = to_string(w);
	string var;
	int counter = 0;
	for (size_t i = 0; i <= n; i++)
	{
		var = to_string(i);
		for (size_t j = 0; j < var.size(); j++)
		{
			counter++;
			cout << var[j];
			if (counter == w) {
				cout << endl;
				counter = 0;
			}
		}
	}
}



