#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text[4];
	unsigned int max = 0;
	unsigned int i = 0;
	for (i = 0; i < 4; i++)
	{
		cout << "Textzeile = ? ";
		getline(cin, text[i]);
		if (text[i].size() > max)
		{
			max = text[i].size();
		}
		if (text[i].size() == 0)
		{
			break;
		}
	}
	for (int j = 0; j < i; j++)  //for Schleife bricht nach den vierten Druchlauf mit i = 5 ab.
	{
		int l = 0; //vorher errechnet, führt in Visual studio nicht zum Fehler, unter Linux jedoch zu coredump
		for (int k = 0; k < max; k++)
		{
			if (text[j].size() + k < max)
			{
				cout << "#";
			}
			else
			{
				cout << text[j].at(l); // errechnung war: text[j].at(k - max + text[j].size())
				l++; //Notlösung
			}
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}