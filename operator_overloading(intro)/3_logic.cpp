#define _USE_MATH_DEFINES
#include<iostream>
//#include<corect_math_defines.h>
#include<math.h>

/*class Point
{
private:
	int x;
	int y;
public:
	Point(int x,int y):
		x{x},
		y{y}
	{}
	bool operator==(const Point& p)
	{
		return this->x == p.x && this->y == p.y;
	}
};
class Rect
{
private:
	Point p;
	int w;
	int h;

public:
	Rect(const Point& p,int w,int h):
		p{p},
		w{w},
		h{h}
	{}
	int getArea() const
	{
		return w * h;
	}
};

class Circle
{
private:
	int r;
	Point center;

public:
	Circle(int r,int x,int y):
		r{r},
		center{x,y}
	{}
	double getArea() const
	{
		return M_PI* this->r* this->r;
	}
	bool operator==(const Circle& b)
	{
		return this->r == b.r && this-> center == b.center;
	}
};
bool operator>(const Circle& a, const Rect& b)
{
	return a.getArea() > b.getArea();
}
bool operator>(const Rect& b, const Circle& a)
{
	return !(a > b); 
}

int main()
{
	Circle a{4,1,1};
	Circle b{ 4,1,1 };
	Circle c{ 4,0,1 };

	std::cout << (a == b) << '\n';
	std::cout << (c == b);

	Circle a{ 3,4,5 };
	Rect b{ {2,7},2,4 };

	std::cout << (a > b) << '\n';
	std::cout << (b > a) << '\n';
}*/

/*class Account
{
private:
	int sum;
public:
	explicit Account(int sum=1):
		sum{sum}
	{}
	int getSum() const 
	{
		return this->sum;
	}
	// крутая перегрузка 
	// левый через зыс, правый константная сссылка 
	bool operator>(const Account& b) const 
	{
		return this->sum > b.sum;
	}
	bool operator<(const Account& b) const
	{
		//return this->sum < b.sum;
		return !((*this) > b);
	}
	bool operator>=(const Account& b) const
	{
		return this->sum > b.sum || this->sum==b.sum;
	}
	bool operator<=(const Account& b) const
	{
		//return this->sum < b.sum || this->sum == b.sum;
		return!(*this >= b);
	}
	bool operator==(const Account& b) const
	{
		return this->sum == b.sum;
	}
	bool operator!=(const Account& b) const
	{
		return this->sum != b.sum;
	}
	//extra
	bool operator==(int val)
	{
		return this->sum == val;
	}


};
bool operator!=(const Account& b, int val)
{
	return b.getSum() != val;
}
int main()
{
	//Circle a{4};
	//std::cout << a.getArea();
	Account a{ 1001 };
	Account b{ 3000 };
	Account c{ 3000 };

	std::cout << (a > b)<<'\n';
	std::cout << (a < b) << '\n';
	std::cout << (b >= a)<<'\n';
	std::cout << (b >= c) << '\n';

	std::cout << (a == 1000) << '\n'; //~~~a.operator ==(1000)

	std::cout << (b != 4000);
}*/