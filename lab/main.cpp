//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <fstream>
#include "stack.hpp"
 
using namespace std;
 
bool Brackets(char open, char closing)
{
     return
            (open == '(' && closing == ')') ||
            (open == '[' && closing == ']') ||
            (open == '{' && closing == '}');
}
 
bool BalancedParentheses(string b)
{
	stack aStack = stack();
	const char *strData = b.data();
	const int strSize = b.size();
    for (int i = 0; i < strSize; i++)
    {
		if (b[i] == '(' || b[i] == '['|| b[i] == '{') 
            aStack.push(b[i]);
        else if (b[i] == ')' || b[i] == ']'|| b[i] == '}')
        {
            if (aStack.isEmpty() || !Brackets(aStack.top(), b[i]))
                return false;
            else
                aStack.pop();
        }
    }
    return aStack.isEmpty();
}
 
int main(int argc, const char * argv[])
{
	//if (argc)
    
    if (argc == 1) 
	{
        cout<<("\nNAME\n    BSC - brackets sequence cheker\nSYNOPSIS\n    ./bsc [file_path]\nDESCRIPTION\n    For input file checks correct or not brackets sequence.\n")<<endl;
        return 1;
    }
    
    if (argc == 3) 
	{
        cout<<("Incorrect count of input parameters.\n")<<endl;
        return 1;
    }
    
    ifstream file(argv[1]);
    
    if (!file.is_open()) 
	{
        cout<<("File at given file path doesn't exsist. Please, check file path.\n")<<endl;
        return 1;
    }
	/*	
    string str;
    cin >> str;
	if str
	string sf;
    ifstream inf;*/
    
   // inf.open ( "test1_Correct.txt" );
    string line;
    getline ( file, line, '\0' );
 
    //inf.close();

    if (BalancedParentheses(line))
        cout << "Correct!" << endl;
    else
        cout << "No correct!" << endl;
    system("pause");
    return 0;
}