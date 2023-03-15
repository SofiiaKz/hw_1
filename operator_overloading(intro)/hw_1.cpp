#include<iostream>
using namespace std;

//constexpr size_type max_size() const;
//typedef std::array<int, 4> Myarray;
//int main()
//{
//	Myarray c0 = { 0, 1, 2, 3 };
//
//	// display contents " 0 1 2 3"
//	for (const auto& it : c0)
//	{
//		std::cout << " " << it;
//	}
//	std::cout << std::endl;
//
//	// display (maximum) size " 4"
//	std::cout << " " << c0.max_size();
//	std::cout << std::endl;
//
//	return (0);
//}
//

class SmartArray
{
	int* p, size;
public:
	SmartArray(int n)
	{
		p = new int[n];
		for (int i = 0; i < n; i++)
			*(p + i) = 0;
		size = n;
	}
	~SmartArray()
	{
		delete p;
	}
	void getArray()
	{
		for (int i = 0; i < size; i++)
		{
			cout << *(p + i) << "  ";
		}
		cout << endl;
	}
	int& operator[](int i)
	{
		if (i < 0)
		{
			cout << "Array index can't be negative...\n";
		}
		else if (i >= 0 && i < size)
			return *(p + i);
		else
		{
			int* new_p = new int[i + 1];
			for (int j = 0; j < i; j++)
				*(new_p + j) = 0;
			for (int j = 0; j < size; j++)
			{
				*(new_p + j) = *(p + j);
			}
			size = i;
			delete[] p;
			p = new_p;
			return *(p + i);
		}
	}
	SmartArray& operator=(const SmartArray& rhs)
	{							// Check for self-assignment!
		if (this == &rhs)      // Same object?
			return *this;        // Yes, so skip assignment, and just return *this.
		else
		{
			this->size = rhs.size;
			this->p = new int[this->size];
			for (int i = 0; i < size; i++)
			{
				*(this->p + i) = *(rhs.p + i);
			}
			return *this;
		}
	}

	bool operator==(int i)
	{
		if (*p == i)
			return true;
		else
			return false;
	}
};

int main()
{
	SmartArray obj1(8), obj2(5);
	obj1.getArray();
	obj1[5] = 6;
	obj1[2] = obj1[5];
	obj1.getArray();
	if (obj1[2] == obj1[1])
		cout << "true\n";
	else
		cout << "false\n";
	if (obj1[2] == obj1[5])
		cout << "true\n";
	else
		cout << "false\n";
	obj1[15]; // incrementing the size of obj1 to 15
		obj1.getArray();
	obj1[11] = 9;
	obj1.getArray();
	obj2 = obj1;			//size of obj2 gets automatically incremented to match the size of obj1
	obj2.getArray();
	obj2[3] = 15;
	obj2.getArray();
	int x = obj2[3];
	cout << x;
	system("pause");

	return 0;
}