/*Complete the method/function so that it converts dash/underscore delimited words into camel casing. 
The first word within the output should be capitalized only if the original word was capitalized 
(known as Upper Camel Case, also often referred to as Pascal case). The next words should be always 
capitalized.*/
#include<iostream>
#include<string>
using namespace std;

string to_camel_case(string text) 
{
  int strSize = text.length();
  for(int i=0;i<strSize;i++)
  {
    if(text.at(i)=='_'||text.at(i)=='-')
    {
        text.erase(text.begin()+i);
        text.at(i) = toupper(text.at(i));
        strSize--;
        i--;
    }
  }
  return text;
}
int main()
{
    string rawText;
    cout<<"Enter raw text: ";
    getline(cin,rawText);
    string camText = to_camel_case(rawText);
    cout<<camText;
    return 0;
}