#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
	//int val = 18,val2 = 19;
	
	//cout << "hello cpp." << "0x" << hex << val << "--" << dec << val2 << endl;
	
	double a = 1234.56789;
	
	//setprecision 用来表示占用了多少位
	cout << setprecision(9) << a << endl;
	
	return 0;
}