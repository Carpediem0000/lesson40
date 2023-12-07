#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> words;

	string text;
	cout << "Enter text: ";
	getline(cin, text);
	text += " ";

	// Hello ITStep hello friends hello world
	while (text.find(" ") != -1)
	{
		int pose = text.find(" ");
		string word = text.substr(0, pose);
		word[0] = tolower(word[0]);
		cout << word << endl;
		text.erase(0, pose + 1);

		if (words.find(word) == words.end())
		{
			//words.insert(pair<string, int>(word, 1));
			words[word] = 1;
		}
		else
			words[word]++;
	}

	map<string, int>::iterator it = words.begin();
	for ( it; it != words.end(); ++it)
	{
		cout << "'" << it->first << "' = " << it->second << endl;
	}
}