#include <iostream>
#include <string>

using namespace std;

void main()
{
	string word = "MESSAGE";
	int m=5, b = 8;
	char arr[29];
	int index = 0;
	for(int i = 65; i <= 90; i++)
	{
		arr[index] = (char)i;
		index++;
	}
	// if you want to use . ? and ! in you alphabeth
	//arr[index] = '.';index++;
	//arr[index] = '?';index++;
	//arr[index] = '!';index++;
	/*string indexword="";
	for(int i=0;i<29;i++)
	{
		for(int j=
	}*/
	for(int i = 0; i < word.length(); i++)
	{
		int charIndex = 0;
		for(int j = 0; j < 26; j++)
		{
			if(word[i] == arr[j])
			{
				charIndex = j;
				break;
			}
		}
		int encrIndex = (charIndex*m) + b;
		while(encrIndex > 26)
		{
			encrIndex-=26;
		}
		word[i] = arr[encrIndex];
	}
	for(int i = 0; i < word.length(); i++)
	{
		cout << " "<<word[i];
	}
	cout<<endl;
	system("pause");
}
