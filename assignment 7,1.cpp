#include<iostream>
using namespace std;

class shape{
	public:
		void get_data(){
			double x,y;
			cin>>x>>y;
			dim1=x;dim2=y;
		}
		virtual void display_area()=0;
		shape(double a=0,double b=0):dim1(a),dim2(b){}
		virtual ~shape(){}
	protected:
		double dim1,dim2;
};

class triangle: public shape{
	public:
		void display_area(){
		   double ar=(dim1*dim2)/2;
		   cout<<"The area of the triangle with the given dimensions is "<<ar<<"\n";
		}
		~triangle(){}
};

class rectangle: public shape{
	public:
		void display_area(){
		   double ar=dim1*dim2;
		   cout<<"The area of the rectangle with the given dimensions is "<<ar<<"\n";
		}
		~rectangle(){}
};

int main()
{
  cout<<"Choose the shape for which the area is to be calculated\n1.Triangle\n"
            <<"2.Rectangle\nYour choice:";
  int c;cin>>c;
  if(c==1){
	shape *a=new triangle;
	cout<<"Enter the base and height of the triangle:";
	a->get_data();
	a->display_area();
  }
  else{
	shape *b=new rectangle;
	cout<<"Enter the length and breath of the rectangle:";
	b->get_data();
	b->display_area();
  }
  return 0;
}
