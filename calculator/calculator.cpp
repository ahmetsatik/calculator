
#include <iostream>
#include <cstdio>
using namespace std;

int turkish() {

	float a, b;
	float sonuc= 0;
	char islem;
	

		cout << "Sayi girin: ";
		cin >> a;
		cout << "+ | - | / | * giriniz ";
		cin >> islem;
		

		git:

		if (islem!='+' && islem != '-' && islem != '*' && islem != '/' )
		{
			cout << "Yanlis islem girdiniz."<<endl;
			cout << "+ | - | / | * giriniz ";
			cin >> islem;
			

			goto git2;
		}
		
		else
		{
			git2:

			if (islem != '+' && islem != '-' && islem != '*' && islem != '/')
			{
				cout << "Bir kez daha yanlis islem girdiniz.";
				goto git;

			}
			else
			{
				cout << "Sayi girin: ";
				cin >> b;
			
				if (islem=='+')
				{
					sonuc = a + b;
				}

				else if (islem=='-')
				{
					sonuc = a - b;
				}

				else if (islem == '*')
				{
					sonuc = a * b;
				}

				else if(islem=='/')
				{
					sonuc = a / b;
				}
			}
		}

		do
		{
			cout << "Sonuc= " << sonuc;
			cout << endl<<"Devam etmek isterseniz islemin sembolunu, cikmak icin 'cik' yaziniz ";
			cin >> islem;

			cout << sonuc <<" " << islem;
			cin >> b;
			
			if (islem=='+')
			{
				sonuc += b;
			}

			if (islem=='-')
			{
				sonuc -= b;
			}

			if (islem == '*')
			{
				sonuc *= b;
			}

			if (islem == '/')
			{
				sonuc /= b;
			}



		} while (islem!='cik');

		cout << "Sonuc= " << sonuc;

		return 0;
}

int english() {

	float a, b;
	float sonuc = 0;
	char islem;


	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter + | - | / | * ";
	cin >> islem;


git:

	if (islem != '+' && islem != '-' && islem != '*' && islem != '/')
	{
		cout << "Invalid operation entered." << endl;
		cout << "Enter + | - | / | * ";
		cin >> islem;


		goto git2;
	}

	else
	{
	git2:

		if (islem != '+' && islem != '-' && islem != '*' && islem != '/')
		{
			cout << "You have entered an invalid operation once again.";
			goto git;

		}
		else
		{
			cout << "Enter a number: ";
			cin >> b;

			if (islem == '+')
			{
				sonuc = a + b;
			}

			else if (islem == '-')
			{
				sonuc = a - b;
			}

			else if (islem == '*')
			{
				sonuc = a * b;
			}

			else if (islem == '/')
			{
				sonuc = a / b;
			}
		}
	}

	do
	{
		cout << "Result= " << sonuc;
		cout << endl << "To continue, enter the symbol of the operation. To exit, type 'exit' ";
		cin >> islem;

		cout << sonuc << " " << islem;
		cin >> b;

		if (islem == '+')
		{
			sonuc += b;
		}

		if (islem == '-')
		{
			sonuc -= b;
		}

		if (islem == '*')
		{
			sonuc *= b;
		}

		if (islem == '/')
		{
			sonuc /= b;
		}



	} while (islem != 'exit');

	cout << "Sonuc= " << sonuc;

	return 0;
}


int main()
{
	cout << "Turkce= T | English= E --> ";
	char x;

	cin >> x;

	if (x == '1' || x == 't'|| x=='T')
	{
		turkish();
	}

	if (x == '2' || x == 'e' || x == 'E')
	{
		english();
	}
	
	else
	{
		cout << "Islem iptal";
	}

	cout << endl;
}

