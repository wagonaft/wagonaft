#include <stdio.h>
#include <iostream>

using namespace std;

class troad
	{
	public:
	float length;
	int width;
	troad();
	};

troad::troad()
{
length = 0.0;
width = 0;}

int main()
{
	troad road;
std::cout<<"road.length ="<<road.length<<std::endl;
std::cout<<"road.width ="<<road.width<<std::endl;
road.length = 40.0;
road.width = 50;
std::cout<<"road.length ="<<road.length<<std::endl;
std::cout<<"road.width ="<<road.width<<std::endl;
return 0;
}
	