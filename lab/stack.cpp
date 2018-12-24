
#include "stack.hpp"

char stack::top() {
    return stack[topID];
}

void stack::push(char value) {
    if (stack.size() == stack.capacity())
        stack.resize(stack.capacity() + 10);
    
    stack[++topID] = value;
}

char stack::pop() {
    return stack[topID--];
}

int stack::size() {
    return topID + 1;
}

bool stack::isEmpty() {
    return topID == EMPTY_IN;
}

