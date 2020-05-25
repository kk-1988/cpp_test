#include <iostream>
using namespace std;

//匿名命名空间声明
namespace
{
	extern void func2(void);	
}

namespace NS
{
	void func1(void)
	{
		//cout << "func1 from namespace NS" << endl;
		func2();
	}
};

int main(void)
{
	cout << "hello world!" << endl;
	NS::func1();
	
	return 0;
}