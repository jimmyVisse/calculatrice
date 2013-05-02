#include <iostream>

using namespace std;

int main()
{
	cout << "Entrez une operation (+ - * /)" << endl;
	
	char c;
	cin >> c;
	
	cout << "Entrez le premier terme : ";
	float a;
	cin >> a;
	
	cout << "Entrez le second terme : ";
	float b;
	cin >> b;
	
	if(c == '+')
	{
		float resultat = a + b;
		cout << "a + b = " << resultat << endl;
	}
	else if(c=='-')
	{
		float resul = a-b;
		cout << "a - b = " << result << endl;
	}
	
	//TODO : Voir le bug tracker
	
	return 0;
}
	
