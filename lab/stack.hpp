
#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
#include <vector>
class stack {
    const short EMPTY_IN = -1;
    int topID = EMPTY_IN;
    std::vector<char> stack = std::vector<char>();
    
public:
    char top();
    void push(char value);
    char pop();
	    int size();
    bool isEmpty();
};

#endif
