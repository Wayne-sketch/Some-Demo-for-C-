#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v)
{	//利用迭代器打印 v
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// int main()
// {
// 	vector<int> v1;                       //调用1
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		v1.push_back(i);//向v1末尾添加数据
// 	}
// 	vector<int> v2(v1.begin(), v1.end());//调用2
// 	vector<int> v3(5, 5);                //调用3
// 	vector<int> v4(v3);                  //调用4
// 	cout << "打印v2: ";
// 	printVector(v2);
// 	cout << "打印v3: ";
// 	printVector(v3);
// 	cout << "打印v4: ";
// 	printVector(v4);
//     return 0;
// }

// int main()
// {
// 	vector<int> v1,v2;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		v1.push_back(i);
// 	}
// 	v2 = v1;                        //调用1，赋值运算符重载
// 	vector<int> v3,v4;
// 	v3.assign(v1.begin(), v1.end());//调用2，区间赋值
// 	v4.assign(5, 9);                //调用3
// 	cout << "打印v2: ";
// 	printVector(v2);
// 	cout << "打印v3: ";
// 	printVector(v3);
// 	cout << "打印v4: ";
// 	printVector(v4);
//     return 0;
// }

// int main()
// {
// 	vector<int> v1;
// 	if (v1.empty())//调用1，如果容器为空，则给其赋值
// 	{
// 		for (int i = 0; i < 5; ++i)
// 		{
// 			v1.push_back(i);
// 		}
// 	}
// 	cout << "打印v1: ";
// 	printVector(v1);
// 	cout << "v1的容量为：" << v1.capacity() << endl;//调用2
// 	cout << "v1的大小为：" << v1.size() << endl;//调用3

// 	//重新指定容器大小使其变长
// 	v1.resize(10);       //调用4，增加的长度默认值为0
// 	cout << "调用4,增加长度后,打印v1: ";
// 	printVector(v1);
// 	v1.resize(15, 9);    //调用5，增加的长度赋值为9
// 	cout << "调用5,增加长度后,打印v1: ";
// 	printVector(v1);
// 	//重新指定容器大小使其变短
// 	v1.resize(10);       //调用4，删除了上一步中最后赋值为9的5个长度
// 	cout << "调用4,减小长度后,打印v1: ";
// 	printVector(v1);
// 	v1.resize(5, 9);     //调用5，删除了上一步中默认值为0的5个长度
// 	cout << "调用5,减小长度后,打印v1: ";
// 	printVector(v1);
//     return 0;
// }

// int main()
// {
// 	vector<int> v1;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		v1.push_back(6);//调用1，尾部插入元素6
// 	}
// 	cout << "打印v1: ";
// 	printVector(v1);
// 	v1.pop_back();//调用2，删除最后一个元素
// 	cout << "调用2，删除最后一个元素后，打印v1: ";
// 	printVector(v1);
// 	v1.insert(v1.begin(),20);//调用3，在首位插入20
// 	cout << "调用3，在首位插入20，打印v1: ";
// 	printVector(v1);
// 	v1.insert(v1.end(), 3, 20);//调用4，在尾部插入3个20
// 	cout << "调用4，在尾部插入3个20，打印v1: ";
// 	printVector(v1);
// 	v1.erase(v1.begin()); //调用5，在首位删除一个元素
// 	cout << "调用5，在首位删除一个元素，打印v1: ";
// 	printVector(v1);
// 	v1.erase(v1.begin(),v1.end()); //调用6，删除首位到末尾所有元素，也就是删除全部元素
// 	cout << "调用6，删除首位到末尾所有元素，打印v1: ";
// 	printVector(v1);
// 	v1.clear();//调用7，清空所有元素
//     return 0;
// }

// int main()
// {
// 	vector<int> v;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		v.push_back(i);
// 	}
// 	//利用at访问v
// 	cout << "调用1，打印v: ";
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout << v.at(i) << " ";//调用1
// 	}
// 	cout << endl;
// 	//利用[]访问v
// 	cout << "调用2，打印v: ";
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout << v[i] << " ";//调用2
// 	}
// 	cout << endl;
// 	cout << "容器中第一个元素是：" << v.front() << endl;//调用3
// 	cout << "容器中最后一个元素是：" << v.back() << endl;//调用4
//     return 0;
// }

// int main()
// {
// 	vector<int> v1,v2;
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		v1.push_back(i);
// 		v2.push_back(9 - i);
// 	}
// 	cout << "交换前：" << endl;
// 	printVector(v1);
// 	printVector(v2);
// 	cout << "交换后：" << endl;
// 	v1.swap(v2);   //调用互换函数
// 	printVector(v1);
// 	printVector(v2);
//     return 0;
// }

// int main()
// {
// 	vector<int> v;
// 	for (int i = 0; i < 1000; ++i)
// 	{
// 		v.push_back(i);
// 	}
// 	cout << "初始时：" << endl;
// 	cout << "v的容量：" << v.capacity() << endl;
// 	cout << "v的大小：" << v.size() << endl;
	
// 	cout << "重新指定空间后：" << endl;
// 	v.resize(10);
// 	cout << "v的容量：" << v.capacity() << endl;
// 	cout << "v的大小：" << v.size() << endl;

// 	//巧用swap收缩内存
// 	cout << "swap收缩内存后：" << endl;
// 	vector<int>(v).swap(v);   //vector<int>(v) 是创建一个匿名对象，并拷贝v的数据
// 	                          //以此匿名对象与v交换，交换完后系统自动删除匿名对象
// 	cout << "v的容量：" << v.capacity() << endl;
// 	cout << "v的大小：" << v.size() << endl;
//     return 0;
// }

int main()
{
	vector<int> v1,v2;
	v2.reserve(10000);//给v2设置预留空间,v1不设置

	//对比v1,v2，系统需要动态扩容多少次
	int num1 = 0;//扩容次数
	int num2 = 0;
	int capacity1 = 0;  //容量大小
	int capacity2 = 0;
	for (int i = 0; i < 10000; ++i)
	{
		v1.push_back(i);
		if (capacity1 != v1.capacity())//计算扩容次数,当容量不相等时，证明系统扩容了
		{
			capacity1 = v1.capacity();
			++num1;
		}

		v2.push_back(i);
		if (capacity2 != v2.capacity())
		{
			capacity2 = v2.capacity();
			++num2;
		}
	}
	cout << "系统对v1扩容" << num1 << "次" << endl;
	cout << "系统对v2扩容" << num2 << "次" << endl;
    return 0;
}
