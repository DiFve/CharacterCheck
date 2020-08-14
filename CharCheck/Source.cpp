#include<iostream>
#include<cstring>
using namespace std;
void checkWord(int count, int wordLength)
{
	if (-count == wordLength)	cout << "All Capital Letter";
	else if (count == wordLength)	cout << "All Small Letter";
	else cout << "Mix";
}
int main()
{
	char word[10000];
	cin >> word;
	int count = 0;
	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')		count++;
		else if (word[i] >= 'A' && word[i] <= 'Z')	count--;
	}
	checkWord(count, strlen(word));
	return 0;
}