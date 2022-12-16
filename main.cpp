// пример использования классов с наследованием
// @author Пилипейко А.А.


#include "Colt.h"
#include "Inventory.h"
#include <iostream>


using namespace std;


int main() {
	Colt colt;
	char input;


	do {
		cout << "\nGun: "                 << colt.getName() << endl;
		cout << "Current magazine ammo: " << colt.getCurrentAmmo();
		cout << "/"                       << colt.maxAmmo << endl;
		cout << "Total pistol ammo: "     << Inventory::pistolAmmo << endl;

		cout << "\n  Enter:"           << endl;
		cout << "  [s] shooting"       << endl;
		cout << "  [r] reloading"      << endl;
		cout << "  [a] add total ammo" << endl;
		cout << "  [e] exit"           << endl;

		cout << "\nInput: ";
		cin  >> input;
		cout << endl;


		if (input == 's' || input == 'S') {

			if (colt.shoot() == 0) {
				cout << "> The gun magazine is empty" << endl;
			}
			else {
				colt.shotEffect();
				cout << endl;
			}

		}
		else if (input == 'r' || input == 'R') {

			if (colt.instantReload() == 0) {
				cout << "> Shortage of pistol ammunition" << endl;
			}
			else {
				cout << "> Gun reloaded" << endl;
			}

		}
		else if (input == 'a' || input == 'A') {

			Inventory::pistolAmmo += 5;
			cout << "> +5 ammo" << endl;

		}
		else {
			cout << "> Unrecognized command" << endl;
		}

		// очистка потока ввода
		while (cin.get() != '\n');

	} while (input != 'e' && input != 'E');

	return 0;
}