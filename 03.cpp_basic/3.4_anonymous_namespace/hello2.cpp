#include <iostream>
using namespace std;

//匿名命名空间(从现象看跟全局命名空间一样)
namespace
{
	void func2(void)
	{
		cout << "func2 from anonymous namespace" << endl;		
	}	
};