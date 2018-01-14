#include<bitset>
#include<iostream>
using namespace std;

int main()
{
	enum Color {red,yellow,green,blue,white,black,numColors};

	bitset<numColors> usedColors;
	usedColors.set(red);
	usedColors.set(blue);

	cout<<"bitfield of used Color"<<usedColors<<endl;
	cout<<"number of used Colors"<<usedColors.count()<<endl;
	cout<<"bitfield  of unused Colors"<<~usedColors<<endl;

	if(usedColors.any())
	{
		for(int c=0;c<numColors;++c)
		{
			if(usedColors[(Color)c])
			{
				cout<<usedColors[(Color)c];
			}
		}
	}

}
