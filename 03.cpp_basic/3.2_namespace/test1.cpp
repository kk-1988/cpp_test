void func5();

namespace NS1
{
	void func2(void)
	{
		//func5()定义在默认的命名空间中
		::func5();
	}

	void func1(void)
	{
		func2();
	}

};

namespace NS2{extern void func3();};
using NS1::func1;		//第二种访问方式
//using namespace NS1;
//void NS2::func3();


using namespace NS2;

int main(void)
{
	//NS1::func1();		//第一种访问方法
	//func1();		//第二种访问方式
	//func2();
	func3();
	//NS2::func3();

	func5();

	return 0;
}

void func5()
{


}