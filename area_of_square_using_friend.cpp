#include<iostream>
using namespace std;
class square_box
{
     public:
	 float edge_l;
	 public:
	 friend void getarea(square_box obj);
};
void  getarea(square_box obj)
	 {
	 	cout<<"enter the length of a edge of a square : ";
	 	cin>>obj.edge_l;
	 	cout<<"Area of the square is : ";
	 	cout<<obj.edge_l*obj.edge_l<<" units";
	 }
int main()
{   square_box v;
    getarea(v);
	return 0;
}