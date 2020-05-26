#include <iostream>

using namespace std;

namespace NS1
{
	namespace NS2
	{
		void func1(void)
		{
			cout << "NS1::NS2::func1" << endl;
		}	
	}	
	
	void func2(void)
	{
		//cout << "NS1::func2" << endl;
		NS2::func1();
	}
}

//using namespace NS1::NS2;

int main(void)
{
	//NS1::NS2::func1();
	NS1::func2();
	
	return 0;
}