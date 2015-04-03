#include<iostream>
using namespace std;
class shape{
	private:
		string color;
		bool filled;
		public:
		shape();
		shape(string , bool);
		string getColor();
        void setColor(string);
        bool isFilled();
        void setFilled(bool);
        string toString();

		
};
