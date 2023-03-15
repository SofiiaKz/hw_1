#include<iostream>
// Значение num должно находится в пределах от 0 до 8
/*class Box
{
private:
	int num;

public:
	Box( int num=0):
		num{num}
	{}
	int getNum() const  { return this->num; }
	Box& operator++() //префиксная - быстрее
	{
		if (this->num == 8)
			this->num = 0;
		else
			++this->num;

		return *this;
	}
	Box operator++(int) // постфиксная 
	{
		Box temp{ this->num };
		++(*this);
		return temp;
	}
	Box& operator--() //префиксная 
	{
		if (this->num == 0)
			this->num = 8;
		else
			--this->num;

		return *this;
	}
	
	Box operator--(int) //префиксная 
	{
		Box temp{ this->num };
		--(*this);
		return temp;
	}

	void show()
	{
		std::cout << "num= " << this->num << '\n';
	}
};
Box operator+(const Box& a, const Box& b)
{
	return Box{ a.getNum() + b.getNum() };
}
int main()
{
	//Box a{ 0 };
	//--a;
	//a++;
	//a.show();

	Box a{ 4 };
	Box b{ 5 };

	Box c{ ++a + b++ };
	c.show();
}*/

/*class Block
{
private:
	int* arr{nullptr};
	int count{};
public:
	Block(int count) :
		arr{ new int[count] {} }, // TODO: check if pisitiv
		count{count}
	{}
	Block(const Block& obj) :
		arr{ new int[obj.count] },
		count{ obj.count }
	{
		for (int i{}; i < obj.count; ++i)
			arr[i] = obj.arr[i];
	}

	Block& operator++()
	{
		if (arr != nullptr)
		{
			for (int i{}; i < this->count; ++i)
				++(this->arr[i]);
		}
		return *this;
	}
	Block operator++(int)
	{
		Block tmp{ *this };
		++(*this);
		return tmp;
	}
	void show()
	{
		for (int i{}; i < this->count; ++i)
			std::cout << this->arr[i] << ' ';
		std::cout << "\n\n";
	}
	~Block()
	{
		if (this->arr != nullptr)
			delete[] this->arr;
	}
};
int main()
{
	Block a{ 10 };
	++a;

	a.show();

	return 0;
}*/