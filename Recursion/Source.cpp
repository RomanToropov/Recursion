#include<iostream>
using namespace std;
//#define fakt
//#define POWER
#define FIBONACCI_1
void elevator(int floor);
long long int factorial(long long int n);
double Power(double a, int n);
void Fibonacci(int n, int a = 0, int b = 1);

void main()
{
	setlocale(LC_ALL, "ru");
#ifdef DEBUG
	cout << "Hello World";
	main();
#endif // DEBUG
#ifdef fakt

	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // fakt
#ifdef fakt
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	cout << n << "! = " << factorial(n) << endl;
#endif // fakt

#ifdef POWER
	int a;
	int n;
	cout << "Введите основание и показатель степени: "; cin >> a >> n;
	cout << Power(a, n) << endl;
#endif

	int n;
	cout << "До какого предельного значения нужно вывести ряд Фибоначчи: "; cin >> n;
	Fibonacci(n);
	cout << endl;
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "v ope: " << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor-1);
	cout << floor << endl;
}

long long int factorial(long long int n)
{
	if (n == 0)return 1;
	int f = n * factorial(n - 1);
	return f;

	//return (n == 0) ? 1 : n * factorial(n - 1);
}

double Power(double a, int n) //n-1;когда степень ноль стоп.
{
	/*if (n == 0)return 1;
	if (n < 0)
	{
		double N = 1 / a * Power(a, n + 1);
		return N;
	}
	else
	{
		int N = a * Power(a,n - 1);
		return N;
	}*/
	return n == 0 ? 1 : n > 0 ? a * Power(a, n - 1) : 1 / a * Power(a, n + 1);
}

void Fibonacci(int n, int a, int b)
{

	if (a > n)return;
	cout << a << "\t";
	Fibonacci(n, b, a + b);
}
