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

int main()
{
	char word[10] = "car";
	cout <<"The length is: "<< new_strlen(word);
	return 0;
}