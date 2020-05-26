#include <iostream>

using namespace std;

namespace NS1
{
	extern void func2(void);
	
	namespace NS2
	{
		void func2(void)
		{
			
			cout << "NS1::NS2::func2" << endl;
		}
		
		void func1(void)
		{
			//cout << "NS1::NS2::func1" << endl;
			func2();
		}	
	}	
	
	void func2(void)
	{
		
		cout << "NS1::func2" << endl;
	}
}

//using namespace NS1::NS2;

int main(void)
{
	NS1::NS2::func1();
	//NS1::func2();
	
	return 0;
}