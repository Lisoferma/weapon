#include "Pistol.h"
#include "Inventory.h"
#include <iostream>


using namespace std;


int main() {
	Pistol pistol;
	char input;

	cout << "Gun: " << pistol.getName() << endl;

	do {
		cout << "Current magazine ammo: " << pistol.getCurrentAmmo()
			 << "/" << pistol.maxAmmo << endl;
		cout << "Pistol ammunition: " << Inventory::pistolAmmo << endl;

		cout << "\n  Enter:" << endl;
		cout << "  [s] for shooting"  << endl;
		cout << "  [r] for reloading" << endl;
		cout << "  [a] for add ammo"  << endl;
		cout << "  [e] for exit"      << endl;

		cout << "\nInput: ";
		cin  >> input;
		cout << endl;

		if (input == 's' || input == 'S') {
			if (pistol.shoot() == 0) {
				cout << "Shortage of pistol ammunition" << endl << endl;
			}
			else {
				pistol.shotEffect();
				cout << endl << endl;
			}
		}
		else if (input == 'r' || input == 'R') {
			if (pistol.instantReload() == 0) {
				cout << "Shortage of pistol ammunition" << endl;
			}
			else {
				pistol.instantReload();
				cout << "Gun reloaded" << endl << endl;
			}
		}
		else if (input == 'a' || input == 'A') {
			Inventory::pistolAmmo += 10;
			cout << "\n+10 ammo" << endl;
		}

	} while (input != 'e' && input != 'E');

	return 0;
}