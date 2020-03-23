#include <iostream>
using namespace std;

int new_strlen(char* word)
{
	int length = 0, i = 0;
	while (word[i] != '\0')
	{
		length = length + 1;
		i++;
	}
	return length;
}

char* new_strcpy(char* word, char* word1)
{
	int i;
	int length = new_strlen(word), length1 = new_strlen(word1);

	for (i = 0; i < length1; i++)
	{
		word[i] = word1[i];
	}
	
	word[i++] = '\0';

	return word;
}

int main()
{
	char word[10] = "Motor", word1[10] = "Bike";
	cout << "The length is: " << new_strlen(word) << endl;

	cout << "The word became: " << new_strcpy(word, word1);
	return 0;
}