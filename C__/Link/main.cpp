#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void F1 (int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
	
}

void F1 (float *a, float *b)
{
	float c;
	
	c = *a;
	*a = *b;
	*b = c;
	
}
int main(int argc, char** argv) 
{
	int x = 5, y = 1;
	float d = 2.5, n = 3.5;
	int &a = x;
	int &b = y;
	
	F1 (a, b);
	cout << "X" << x << endl;
	cout << "y" << y << endl;
	
	F1 (&d, &n);
	cout << "d" << d << endl;
	cout << "n" << n << endl;
	
	return 0;
}
