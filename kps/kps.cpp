#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

int main()
{

	int voitot = 0;
	int koneenVoitot = 0;
	int koneenValinta = 0;
	int kierrokset = 0;
	int voitto;
	//esitell��n muuttujat, nimet kertovat k�ytt�ns�
	cout << "kuinka monta kierrosta haluat pelata?" << endl;
	cin >> kierrokset;
	for (int i = 0; i < kierrokset; i++)
	{
		koneenValinta = rand() % 3 + 1; //valitaan uusi random numero

										/*cout << koneenValinta << endl;         osa harjoituksen aiempaa vaihetta, nyt pilaa ilon

										if (koneenValinta == 1) //kerrotaan koneen valinta
										{
										cout << "kivi" << endl;
										}
										else if (koneenValinta == 2)
										{
										cout << "paperi" << endl;
										}
										else if (koneenValinta == 3)
										{
										cout << "sakset" << endl;
										}      */
		char valintaMerkkin�;
		int merkinKoodi;
		do
		{
			cout << "kerro valintasi K P tai S" << endl;
			cin >> valintaMerkkin�;

			if (valintaMerkkin� == 'K')
			{
				merkinKoodi = 1;
				cout << merkinKoodi << endl;
			}
			else if (valintaMerkkin� == 'P')
			{
				merkinKoodi = 2;
				cout << merkinKoodi << endl;
			}
			else if (valintaMerkkin� == 'S')
			{
				merkinKoodi = 3;
				cout << merkinKoodi << endl;
			}
			else {}
		} while (valintaMerkkin� != 'K' && valintaMerkkin� != 'P' && valintaMerkkin� != 'S');

		if (merkinKoodi == koneenValinta)
		{
			voitto = 0;
			cout << "tasapeli" << endl;
		}
		else if (merkinKoodi == 1 && koneenValinta == 3)
		{
			voitto = 1;
			cout << "voitit" << endl;
		}
		else if (merkinKoodi == 2 && koneenValinta == 3)
		{
			voitto = -1;
			cout << "h�visit" << endl;
		}
		else if (merkinKoodi == 3 && koneenValinta == 1)
		{
			voitto = 1;
			cout << "voitit" << endl;
		}
		else if (merkinKoodi == 3 && koneenValinta == 2)
		{
			voitto = -1;
			cout << "h�visit" << endl;
		}
		else if (merkinKoodi == 1 && koneenValinta == 2)
		{
			voitto = -1;
			cout << "h�visit" << endl;
		}
		else if (merkinKoodi == 2 && koneenValinta == 1)
		{
			voitto = 1;
			cout << "voitit" << endl;
		}
		else
		{
			cout << "jokin meni vituiks" << endl;

		}
		if (voitto == 1)
		{
			voitot++;
		}
		else if (voitto == -1)
		{
			koneenVoitot++;
		}

	}




	system("PAUSE");
}

