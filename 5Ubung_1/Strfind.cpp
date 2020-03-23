#include <iostream>
using namespace std;

char* returned_word(const char* word, const char* word2) 
{
    int i = 0;
	while (i < strlen(word2))
	{
		int v = i;
		int w = 0;
		while ((w < strlen(word)) && (word2[i] == word[w]))
		{
			w++; i++;
		}
		if (w == strlen(word))
		{
			return const_cast<char*>(&word2[v]);
		}
		i++;
	}
	return NULL;
}
	
int main()
{
	char word[10] = "as", word2[10] = "masiasin";
	cout<< returned_word(word, word2);
}