void func5(void);

namespace NS1
{
	void func2(void)
	{
		//::符号表示func5定义和声明在默认的命名空间中，也可以省略?
		//func5();
		::func5();
	}
	
	void func1(void)
	{
		func2();
	}
};

using NS1::func1;			//第二种namespace使用方法
//using namespace NS1;		//第三种namespace使用方法
namespace NS2{void func3(void);};
//namespace NS2{extern void func3(void);};

using namespace NS2;

//以下main函数和上面的NS1是在两个namespace中，main函数相当于在默认的namespace中
int main(void)
{
	//NS1::func1();			//第一种namespace使用方法
	//func1();				
	//NS1::func2();	
	//func3();
	//func5();
	return 0;
}

//默认命名空间
void func5(void)
{
	
}
