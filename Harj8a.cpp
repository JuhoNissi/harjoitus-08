/***********
*Teht�v�: Harjoitus 8 (palautus vko 41)
*Tekij�: Juho Nissi
*Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
*j�rjestyksess� (pienimm�st� suurimpaan) n�yt�lle
*(katso harj. 1 suunnitelma)
*a) k�yt� kokonaislukuja
*b) k�yt� liukulukuja (=reaalilukuja)
*Versio 1.0
*p�iv�ys: 24.9.2014
*/
#include <iostream>
using namespace std;
void main()
{
	int luku1;
	int luku2;
	int luku3;
	cout << "anna luku1 ";
	cin >> luku1;
	cout << "anna luku2 ";
	cin >> luku2;
	cout << "anna luku3 ";
	cin >> luku3;
	if (luku1 < luku2)
	{
		if (luku2 < luku3)
			cout <<"pienin on luku1"<< endl << "keskimmainen on luku2"<< endl << "suurin on luku3" << endl;
		else { 
			if (luku1<luku2)
				cout << "pienin on luku1" << endl << "keskimmainen on luku3" << endl << "suurin on luku2" << endl;
			else cout << "pienin on luku3" << endl << "keskimmainen on luku1" << endl << "suurin on luku2" << endl;
		}
	}
	else {
		if (luku2 > luku3)
			cout << "pienin on luku3" << endl << "keskimmainen on luku2" << endl << "suurin on luku1" << endl;
		else {
			if (luku1<luku3)
				cout << "pienin on luku2" << endl << "keskimmainen on luku1" << endl << "suurin on luku3" << endl;
			else cout << "pienin on luku2" << endl << "keskimmainen on luku3" << endl << "suurin on luku1" << endl;
		}
		
	}
	return;
}