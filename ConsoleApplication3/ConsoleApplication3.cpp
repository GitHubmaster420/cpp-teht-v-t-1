//Standard input/output
#include <iostream>

//C++ std::string class
#include <string>

using namespace std;

void TuntiTeht1();
void TuntiTeht2();
void TuntiTeht3();
void TuntiTeht4();
void TuntiTeht5();
void ViikkoTeht1();
void ViikkoTeht2();
void Viikkoteht3();
void ViikkoTeht4();
void ViikkoTeht5();

/*
main-funktio on ohjelman aloituspiste, ohjelmissa on yleensä useampia funktioita,
mutta harjoitellaan alkuun pienillä ohjelmilla, jotka ovat (lähes) kokonaan mainissa.

Esittelen tässä kuitenkin jo toisen funktion. Eli 2. tehtävän vastauksen kirjoitat
Tehtava2() { aaltosulkeiden väliin }
*/


int main()
{
}


void TuntiTeht1() {

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

void TuntiTeht2() {

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

void TuntiTeht3() {
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

void TuntiTeht4() {


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
	else {
		cout << "pisteet ei välillä 0 - 100" << endl;
		arvosana = -100;
	}

	cout << "arvosana:" << arvosana << endl;
	if (pisteet == 100) {
		cout << "Onneksi olkoon sait täydet pisteet" << endl;
	}
}

void TuntiTeht5() {
	/*Sitten "hauska" Intialainen ohjelmointitehtävä :

	Kirjoita ohjelma joka pyytää ensin perinnön määrän Intian rupioissa.
		Sitten ohjelma kysyy kuinka monta poikaa käyttäjällä on.
		Seuraavaksi kysytään tyttärien määrä.
		Lopuksi vielä kysytään onko leski elossa(K / E tai Y / N).
		Kun pohjatiedot on annettu, lasketaan ja tulostetaan paljonko kukin saa perintöä.Oletan, että Intiassa näin ei ole, mutta jaetaan rahat kaikkien kesken tasan.*/

	float heritage;
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
	if ((yn == 'y') || (yn == 'Y')) { widows = 1; }
	else if ((yn == 'n') || (yn == 'N')) { widows = 0; }
	else {
		cout << "invalid output" << endl;
		widows = 1;
	}


	heritage = heritage / (1 + (float)sons + (float)daughters + (float)widows);
	cout << "heritage:" << heritage << endl;
}

void ViikkoTeht1() {
	cout << "Give a number";
	int number;
	cin >> number;
	if (number > 0) { cout << "number is positive" << endl; }
	else if (number < 0) { cout << "number is negative" << endl; }
	else if (number == 0) { cout << "Number is not positive or negative" << endl; }
	else { cout << "Input was not a number" << endl; }
}

void ViikkoTeht2() {
	cout << "Vt2" << endl;
	int Kilometers;
	cout << "Give distance in kilometers: ";
	cin >> Kilometers;
	cout << "---------------" << endl;
	int Miles = Kilometers / 1.609;
	int Seamiles = Kilometers / 1.852;
	cout << "M - convert to miles" << endl;
	cout << "S - convert to nautical miles" << endl;
	cout << "Q - quit" << endl;
	char inputMenu;
	cin >> inputMenu;
	if ((inputMenu == 'm') || (inputMenu == 'M')) { cout << "Miles:" << Miles << endl; }
	else if ((inputMenu == 's') || (inputMenu == 'S')) { cout << "nautical miles: " << Seamiles << endl; }
	else if ((inputMenu == 'q') || (inputMenu == 'Q')) { cout <<endl;  return; }
}

void Viikkoteht3() {
	cout << "Compute quotientand remainder :" << endl;
	cout << "------------------------------------ -" << endl;
	int divinder;
	cout << "Input the dividend : ";
	cin >> divinder;
	cout << endl;
	cout << "Input the divisor : ";
	int divisor;
	cin >> divisor;
	cout << endl;
	cout << "The quotient of the division is : " << (float)divinder / (float)divisor << endl;
	cout << "The remainder of the division is : " << divinder % divisor << endl;
}

void ViikkoTeht4() {
	cout << "Vt4" << endl;
	int year;
	cout << "input a year: ";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << "vuosi " << year << " on karkausvuosi" << endl;
	}
	else { cout << "vuosi " << year << " ei ole karkausvuosi" << endl; }
}

void ViikkoTeht5() {
	cout << "vt5" << endl;
	int n1;
	int n2;
	int n3;
	cout << "input number 1: ";
	cin >> n1;
	cout << "input number 2: ";
	cin >> n2;
	cout << "input number 3: ";
	cin >> n3;
	if ((n1 > n2) && (n1 > n3)) {
		cout << "greatest number is " << n1 << endl;
		if (n2 > n3) { cout << "smallest is " << n3 << endl; }
		else { cout << "smallest is " << n2 << endl; }
	}
	else if (n2 > n3) {
		cout << "greatest number is " << n2 << endl;
		if (n1 > n3) { cout << "smallest number is " << n3 << endl; }
		else { cout << "smallest number is " << n1 << endl; }
	}
	else {
		cout << "greatest number is " << n3 << endl;
		if (n1 > n2) { cout << "smallest number is " << n2; }
		else { cout << "smallest number is " << n1; }
	}
}