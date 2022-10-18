#include <iostream>
#include <stack>
using namespace std;

int main() {
  // create a stack called stack
    stack<int> stack;
    // store the values 21, 22, 24, 25
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    // then pop tw ovalues
    stack.pop();
    stack.pop();
    // print the stack values
    while (!stack.empty()) {
        cout << stack.top() <<" ";
      //pop the stack created
        stack.pop();
    }
}