#include<iostream>

using namespace std;

class rectangletype
{
	friend ostream& operator<<(ostream&, const rectangletype&);
	friend istream& operator>>(istream&, rectangletype&);
	
	public:
		void setdimension(double l,double w);
		double getlength() const;
		double getwidth() const;
		double area() const;
		double perimeter() const;
		rectangletype operator+(const rectangletype&) const;
		rectangletype operator*(const rectangletype&) const;
		const rectangletype& operator=(const rectangletype&);
		void setlist();
	private:
		double length;
		double width;
		int *list;
};

void rectangletype::setlist()
{
	for(int i=0;i<5;i++){
		list[i]=i;
	}
}

void rectangletype::setdimension(double l,double w)
{
	if(l>=0){
		length=l;
	}
	else
	 length=0;
	if(w>=0){
		width=w;
	}
	else
	 width=0;
}
double rectangletype::getlength() const
{
	return length;
}
double rectangletype::getwidth() const
{
	return width;
}
double rectangletype::area() const
{
	return length*width;
}
double rectangletype::perimeter() const
{
	return 2*(length+width);
}
rectangletype rectangletype::operator+(const rectangletype& rect) const
{
	rectangletype temp;
	temp.length=length+rect.length;
	temp.width=width+rect.width;
	return temp;
}
rectangletype rectangletype::operator*(const rectangletype& rect) const
{
	rectangletype temp;
	temp.length=length*rect.length;
	temp.width=width*rect.width;
	return temp;
}
const rectangletype& rectangletype::operator=(const rectangletype& rect)
{
	if(this != &rect){
		delete [] list;
		length=rect.length;
		width=rect.width;
		list= new int[5];
		for(int i=0;i<5;i++){
			list[i]=rect.list[i];
		}
	}
	return *this;
}

ostream& operator << (ostream& osobject, const rectangletype& rect)
{
	osobject<<"length="<<rect.length
	        <<"; width="<<rect.width<<endl;
	for(int i=0;i<5;i++){
		osobject<<rect.list[i]<<" ";
	}
	return osobject;
}
istream& operator >> (istream& isobject,rectangletype& rect)
{
	isobject >> rect.length >> rect.width;
	return isobject;
}

int main()
{
	rectangletype a,b,c;
	a.setlist();
	c=b=a;
	
}
