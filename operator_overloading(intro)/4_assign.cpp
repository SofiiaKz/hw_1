#include<iostream>
// assign - присваивание 
//class Point
//{
//private:
//	int* x;
//	int* y;
//public:
//	Point(int x = 0, int y = 0) :
//		x{ new int {x} },
//		y{ new int {y} }
//	{}
//	// конструктор копирования 
//	Point(const Point& p):
//		x{ new int {*p.x} },
//		y{ new int {*p.y} }
//	{}
//	// оператор присваивания копированием 
//	Point& operator=(const Point& p)
//	{
//		//защита от самоприсваивания 
//		if (this == &p)
//			return *this;
//
//		*this->x = *p.x;
//		*this->y = *p.y;
//
//		return *this;
//	}
//	~Point()
//	{
//		if (this->x != nullptr)
//			delete x;
//		if (this->y != nullptr)
//			delete y;
//	}
//};
//int main()
//{
//	Point a{ 2,3 };
//
//	Point b{ a };
//
//	Point c{};
//	c = b;
//	c = c;
//
//}