#include <iostream>
using namespace std;

namespace NS
{
	void func1(void)
	{
		cout << "func1 from namespace NS" << endl;
	}

}

int main(void)
{
	cout << "hello cpp world!!!" << endl;
	//std::cout << "hello cpp world!!!!" << std::endl;
	return 0;
}
