//Standard input/output
#include <iostream>

//C++ std::string class
#include <string>

using namespace std;

void Tt1();
void Tt2();
void Tt3();
void Tt4();
void Tt5();
void Vt1();
void Vt2();
void Vt3();
void Vt4();
void Vt5();

/*
main-funktio on ohjelman aloituspiste, ohjelmissa on yleensä useampia funktioita,
mutta harjoitellaan alkuun pienillä ohjelmilla, jotka ovat (lähes) kokonaan mainissa.

Esittelen tässä kuitenkin jo toisen funktion. Eli 2. tehtävän vastauksen kirjoitat
Tehtava2() { aaltosulkeiden väliin }
*/


int main()
{
	Tt1();
	Tt2();
	Tt3();
	Tt4();
	Tt5();
	Vt1();
	Vt2();
	Vt3();
	Vt4();
	Vt5();
}


void Tt1() {

	int luku1;

	int luku2;

	cout << "TT1" << endl;
	cout << "Anna ensimmäinen luku" << endl;
	cin >> luku1;
	cout << "Anna toinen luku" << endl;
	cin >> luku2;

	float jako1 = (float)luku1 / (float)luku2;

	cout << luku1 << " + " << luku2 << " = " << luku1 + luku2 << endl;
	cout << luku1 << " - " << luku2 << " = " << luku1 - luku2 << endl;
	cout << luku2 << "-" << luku1 << " = " << luku2 - luku1 << endl;
	cout << luku1 << " * " << luku2 << " = " << luku1 * luku2 << endl;
	cout << luku1 << " / " << luku2 << " = " << jako1 << endl;

	// Tehdään manuaalisesti 2 desimaalia
	cout << luku2 << " / " << luku1 << " = " << luku2 / luku1 << "," << luku2 * 100 / luku1 - luku2 / luku1 * 100 << endl;

	cout << luku1 << " % " << luku2 << " = " << luku1 % luku2 << endl;
	cout << luku2 << "%" << luku1 << " = " << luku2 % luku1 << endl;

}

void Tt2() {

	int inputdays;

	cout << "TT2" << endl;
	cout << "Give a number of days:";
	cin >> inputdays;
	cout << endl;

	int years = inputdays / 365;
	cout << "Years:" << inputdays / 365 << endl;

	int weeks = (inputdays - years * 365) / 7;
	cout << "Weeks:" << weeks <<  endl;

	int days = (inputdays - years * 365 - weeks * 7);
	cout << "Days:" << days << endl;

}

void Tt3() {
	/*Kirjoita edellisen kaltainen ohjelma, joka muuntaa käyttäjän antamat sekunnit kokonaisiksi tunneiksi, minuuteiksi ja sekunneiksi muotoon H:M:S:

Input seconds: 25300                                                   
H:M:S - 7:1:40

Leading zero -muotoiluja ei tarvitse tehdä, mutta halutessaan sellaisen saa aikaiseksi käyttäen esim. setfill-funktiota.*/
	int inputseconds;

	cout << "TT2" << endl;
	cout << "Give a number of sconds:" << endl;
	cin >> inputseconds;

	int hours = inputseconds / 3600;
	int minutes = inputseconds / 60 - hours * 60;
	int seconds = inputseconds - hours * 3600 - minutes * 60;
	cout << "H-M-S - " << hours << "-" << minutes << "-" << seconds << endl;

}

void Tt4() {


	int pisteet;
	cout << "TT4" << endl;
	cout << "Anna kokeen pisteet" << endl;
	cin >> pisteet;
	

	int arvosana;
	if (pisteet >= 0 && pisteet <= 39) { arvosana = 0; }
	else if (pisteet >= 39 && pisteet <= 99) {
		arvosana = (pisteet - 40) / 10;
	}
	else if (pisteet == 100) { arvosana = 5; }
	else { cout << "pisteet ei välillä 0 - 100" << endl; }

	cout << "arvosana:" << arvosana << endl;
	if (pisteet == 100) {
		cout << "Onneksi olkoon sait täydet pisteet" << endl;
	}
}

void Tt5() {
	/*Sitten "hauska" Intialainen ohjelmointitehtävä :

	Kirjoita ohjelma joka pyytää ensin perinnön määrän Intian rupioissa.
		Sitten ohjelma kysyy kuinka monta poikaa käyttäjällä on.
		Seuraavaksi kysytään tyttärien määrä.
		Lopuksi vielä kysytään onko leski elossa(K / E tai Y / N).
		Kun pohjatiedot on annettu, lasketaan ja tulostetaan paljonko kukin saa perintöä.Oletan, että Intiassa näin ei ole, mutta jaetaan rahat kaikkien kesken tasan.*/

	int heritage;
	int sons;
	int daughters;
	int widows;
	char yn;

	cout << "Tt5" << endl;

	cout << "Give heritage:";
	cin >> heritage;
	cout << endl;

	cout << "how many sons?";
	cin >> sons;
	cout << endl;

	cout << "how many daughters?";
	cin >> daughters;
	cout << endl;

	cout << "Is widow alive?(Y/N)";
	cin >> yn;
	cout << endl;
	if (yn == 'y' || yn == 'Y') { widows = 1; }
	else if (yn == 'n' || yn == 'N') { widows = 0; }
	else { cout << "invalid output" << endl; }


	heritage = heritage / (sons + daughters + widows);
	cout << "heritage:" << heritage;
}

void Vt1() {

}

void Vt2() {

}

void Vt3() {

}

void Vt4() {

}

void Vt5() {

}