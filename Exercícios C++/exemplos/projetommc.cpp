#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mmc(int num1, int num2, int aux, int d);

int main(int argc, char** argv) {
int num1, num2 = 0;
	int aux = 1;
	int d = 2;
		
	cout<< "Progrma que calcula MMC entre dois numeros.";
	cout<< "\nDigite o primeiro numero: ";
	cin>> num1;
	
	cout<< "\nDigite o segundo numero: ";
	cin>> num2;
	cout<< "\n";
	
	cout<< "O MMC entre " << num1 <<" e " << num2 << " eh " << mmc(num1, num2, aux, d);
	
	cout<< "\n";
	system ("pause");
	return 0;
}

int mmc(int n1, int n2, int aux, int d)
{
	if ((n1 == 1) && (n2 == 1))
	{
		return aux;
		
	}
	else
	{
		if (((n1 % d) == 0) && ((n2 % d) == 0))
		{
			return mmc((n1 / d), (n2 / d), (aux * d), d);
		
		}
		
		if (((n1 % d)== 0) && ((n2 % d) != 0))
		{
			return mmc((n1 / d), (n2), (aux * d), d);
			
		}
		
		if (((n1 % d) != 0) && ((n2 % d) == 0))
		{
			return mmc((n1), (n2 / d), (aux * d), d);
		
		}
		
		if (((n1 % d) != 0) && ((n2 % d) != 0))
		{
			return mmc(n1, n2, aux, (d + 1));
		
		}
		
	}
}
