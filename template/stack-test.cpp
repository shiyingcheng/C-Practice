/*
 * stack-test.cpp
 */

#include <string>
#include "stack.h"

using namespace std;

int main()
{
  Stack<string> s;

  s.push("one");
  s.push("two");
  s.push("three");
  s.push("four");

  while (!s.empty())
  {
    cout << s << endl;
    cout << "popped" << s.pop() << endl;
    s.reverse();
    cout << "reversed the slack: " << s << endl;
    cout << endl;
  }

  return 0;
}