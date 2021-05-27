#include<iostream>

using namespace std;

int func(int v)
{
	if(v < 1)
		return 0;
		
	//cout << v << endl;
		
	func(v - 1);
	
	cout << v << endl;
}

int main()
{
	func(10);
}*/


/*#include<iostream>

using namespace std;

int fact(int i)
{
	if(i >=  1)
		return i*fact(i-1);
	else
		return 1;
}

int main()
{
	cout << fact(3);
	return 0;
}*/


/*#include<iostream>

using namespace std;

void fun1()
{
	cout << "fun1";
}

void fun2()
{
	cout << "fun2";
	fun1();
	//cout << "fun2";
}

void fun3()
{
	cout << "fun3";
	fun2();
	//cout << "fun3";
}

void fun4()
{
	cout << "fun4";
	fun3();
	//cout << "fun4";
}

void fun5()
{
	cout << "fun5";
	fun4();
	//cout << "fun5";
}

int main()
{
	fun5();
	return 0;
}
