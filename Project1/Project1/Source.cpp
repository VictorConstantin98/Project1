#include <iostream>
using namespace std;
void main()
{
	//Compararea a doua numere
	/*int a;
	cout << "a= ";
	cin >> a;
	int b;
	cout << "b= ";
	cin >> b;
	if (a > b)
	{
		cout << a << " este mai mare ca " << b << endl;
	}
	else
	{
		cout << b << " este mai mare ca " << a << endl;
	}*/

	//If imbricat
	/*int nota;
	cout << "Nota este ";
	cin >> nota;
	if (nota < 5)
	{
		cout << "Repetent";
	}
	else
	{
		if (nota >= 5 && nota <= 9)
		{
			cout << "Bun";
		}
		else
		{
			cout << "Premiant";
		}
	}*/

	//Compararea a trei numere si identificarea maximului
	/*int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << "Maxim este " << a << endl;
	}
	else
	{
		if (a <= b && b >= c)
		{
			cout << "Maxim este " << b << endl;
		}
		else
		{
			cout << "Maxim este " << c << endl;
		}
	}*/

	//Interschimbarea a doua numere
	/*int a;
	int b;
	cin >> a >> b;
	int aux;
	aux = b;
	b = a;
	a = aux;
	cout << "a= " << a << " " << "b= " << b << endl;*/

	//Deplasare la dreapta(schimbarea unor valori intre ele)
	/*int a;
	int b;
	int c;
	int aux;
	cin >> a >> b >> c;
	aux = c;
	c = b;
	b = a;
	a = aux;
	cout << "a= " << a << " " << "b= " << b << " " << "c= " << c << endl;*/

	//Verificare daca un numar este pozitiv sau negativ
	/*int a;
	cout << "a= ";
	cin >> a;
	if (a < 0)
	{
		cout << a << " este negativ";
	}
	else
	{
		cout << a << " este pozitiv";
	}*/

	//Verificare daca un numar este par sau impar
	/*int a;
	cout << "a= ";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << a << " este par";
	}
	else
	{
		cout << a << " este impar";
	}*/

	//Interschimbarea a patru numere
	/*int a;
	int b;
	int c;
	int d;
	int aux;
	cin >> a >> b >> c >> d;
	aux = d;
	d = c;
	c = b;
	b = a;
	a = aux;
	cout << "a= " << a << " " << "b= " << b << " " << "c= " << c << " " << "d= " << d << endl;*/

	//int a;
	//int b;
	//int c;
	//int d;
	//cin >> a >> b >> c >> d;           // 5 8 6 2 => 8 5 2 6 
	//int aux1;
	//aux1 = d;
	//int aux2;
	//d = c;
	//c = aux1;
	//aux2 = b;
	//b = a;
	//a = aux2;
	//cout << "a= " << a << " " << "b= " << b << " " << "c= " << c << " " << "d= " << d << endl;
	
	//Sa se calculeze: b=b+a*2 si c=c+a daca inputul este par, daca nu, sa se calculeze: b=a+c si c=c*2+a
	/*int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a % 2 == 0)
	{
		b = b + a * 2;
		c = c + a;
	}
	else
	{
		b = a + c;
		c = c * 2 + a;
	}
	cout << "b= " << b << " " << "c= " << c << endl;*/

	//Verificare paritate/imparitate la ultima cifra a unui input
	/*int numar;
	cout << "Numar= ";
	cin >> numar;
	int b;
	b = numar % 10;
	if (b % 2 == 0)
	{
		cout << "par";
	}
	else
	{
		cout << "impar";
	}
	cout << endl;*/
	
	//Media a 5 numere stiind ca se elimina minimul si maximul (outlierii)
	/*float a;
	float b;
	float c;
	float d;
	float e;
	cin >> a >> b >> c >> d >> e;
	float min;
	min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	if (d < min) {
		min = d;
	}
	if (e < min) {
		min = e;
	}
	float max;
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	if (e > max) {
		max = e;
	}
	float media;
	media = (a + b + c + d + e - min - max) / 3;
	cout << "Media= " << media << endl;*/

	//Verificare daca 3 numere sunt laturile unui triunghi dreptunghic
	/*int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
		cout << "dreptunghic";
	}
	else
	{
		cout << "nu este dreptunghic";
	}*/
	
	//Sa se calculeze F atunci cand F este egal cu:
	/*int numar;
	cin >> numar;
	int f;
	if (numar < 5)
	{
		f = numar * numar - 3;
		cout << f;
	}
	else
	{
		if (5 >= numar && numar <= 25)
		{
			f = numar + 1;
			cout << f;
		}
		else
		{
			if (numar > 25)
			{
				f = numar * numar - 5 * numar + 6;
				cout << f;
			}
		}
	}*/
	
	//Verificare daca o nota este valida
	/*int nota;
	cout << "Nota este ";
	cin >> nota;
	if (nota >= 1 && nota <= 10)
	{
		cout << "Nota este valida";
	}
	else
	{
		cout << "Nota este invalida";
	}*/

	//Program care-i arata soferului viteza maxima admisa(50 localitate, 90 exterior si 130 autostrada)
	/*int vitezaInOras;
	cin >> vitezaInOras;
	int vitezaInExterior;
	cin >> vitezaInExterior;
	int vitezaPeAutostrada;
	cin >> vitezaPeAutostrada;
	if (vitezaInOras <= 50)
	{
		cout << "Viteza soferului este legala" << endl;
	}
	else
	{
		cout << "Viteza soferului este ilegala" << endl;
	}
	if (vitezaInExterior >= 51 && vitezaInExterior <= 90)
	{
		cout << "Viteza soferului este legala" << endl;
	}
	else
	{
		cout << "Viteza soferului este ilegala" << endl;
	}
	if (vitezaPeAutostrada >= 91 && vitezaPeAutostrada <= 130)
	{
		cout << "Viteza soferului este legala" << endl;
	}
	else
	{
		cout << "Viteza soferului este ilegala" << endl;
	}*/

	//Verificare total factura
	/*int produs1;
	int produs2;
	int produs3;
	int produs4;
	int produs5;
	int total;
	cin >> produs1 >> produs2 >> produs3 >> produs4 >> produs5;
	cin >> total;
	if (produs1 + produs2 + produs3 + produs4 + produs5 == total)
	{
		cout << "Totalul de " << total << " este corect" << endl;
	}
	else
	{
		cout << "Totalul de " << total << " este incorect " << endl;
	}*/

	//Program care verifica daca un utilizator este autentificat sau nu( cand este autentificat primeste 1, cand nu, -1)
	/*int a;
	cin >> a;
	if (a == 1) {
		cout << "Utilizatorul este autentificat";
	}
	else
	{
		if (a == -1)
		{
			cout << "Utilizatorul nu este autentificat";
		}
	}*/

	//Sa se calculeze c
	/*int a;
	int b;
	int c;
	cin >> a >> b;
	if (a > 4 && b > 5)
	{
		c = a * b;
		cout << c;
	}
	if (a <= 4 && b <= 5)
	{
		c = a + b;
		cout << c;
	}*/

	//Verificare factura
	/*int luna;
	cin >> luna;
	int total;
	cin >> total;
	cout << "Luna: " << luna << " " << "Total: " << total << endl;
	if (luna == 12 && total == 10)
	{
		cout << true;
	}
	else
	{
		cout << false;
	}*/

	//Minimul si maximul par dintre: 5 20 25 4 -2 -30 15 101 -31
	/*int a = 5;
	int b = 20;
	int c = 25;
	int d = 4;
	int e = -2;
	int f = -30;
	int g = 15;
	int h = 101;
	int i = -31;
	cout << a << b << c << d << e << f << g << h << i;
	int min;
	int aux;
	aux = 0;
	if (a % 2 == 0)
	{
		min = a;
		aux = 1;
	}
	if (aux == 1)
	{
		if ((b % 2 == 0)<min)
		{
			min = b;
		}
		else
		{
			if (b % 2 == 0)
			{
				min = b;
				aux = 1;
			}
		}
	}
	if (aux == 1)
	{
		if ((c % 2 == 0) < min)
		{
			min = c;
		}
		else
		{
			if (c % 2 == 0)
				min = c;
			aux = 1;
		}
	}
	if (aux == 1)
	{
		if ((d % 2 == 0) < min)
		{
			min = d;
		}
		else
		{
			if (d % 2 == 0)
			min = d;
			aux = 1;

		}
	}
	if (aux == 1)
	{
		if ((e % 2 == 0) < min)
		{
			min = e;
		}
		else
		{
			if (e % 2 == 0)
			{
				min = e;
				aux = 1;
			}
		}
	}
	if (aux == 1)
	{
		if ((f % 2 == 0) < min)
		{
			min = f;
		}
		else
		{
			if (f % 2 == 0)
			{
				min = f;
				aux = 1;
			}
		}
	}
	if (aux == 1)
	{
		if ((g % 2 == 0) < min)
		{
			min = g;
		}
		else
		{
			if (g % 2 == 0)
			{
				min = g;
				aux = 1;
			}
		}
	}
	if (aux == 1)
	{
		if ((h % 2 == 0) < min)
		{
			min = h;
		}
		else
		{
			if (h % 2 == 0)
			{
				min = h;
				aux = 1;
			}
		}
	}
	if (aux == 1)
	{
		if ((i % 2 == 0) < min)
		{
			min = i;
		}
		else
		{
			if (i % 2 == 0)
			{
				min = i;
				aux = 1;
			}
		}
	}
	cout << "Minim: " << min << endl;*/


}