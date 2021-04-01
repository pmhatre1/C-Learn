#include <iostream>
#include <algorithm>
#include<map>
#include<vector>
#include<cmath>

using namespace std;

/*  TEMPLATES

Templates expanded at the compiler time. They are like macros. Compiler does type checking for templates.
Source code contains only function/class but compiled code contains multiple copies of same function/class.

Reference from https://www.geeksforgeeks.org/templates-cpp/

*/

template<typename T>
T myMax(T x, T y)
{
	return(x > y) ? x : y;
}


// T myMax<typename T>(T x, T y) Template syntax for calling. Ignore T, it's like function definition.

int main()
{
	cout << myMax<int>(3, 7) << endl;   // calling myMax for int
	cout << myMax<double>(3.0, 7.0) << endl;
	cout << myMax<char>('g', 'e') << endl;

	cout<< myMax<
}
