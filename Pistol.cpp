#include "Pistol.h"
#include "Inventory.h"
#include <iostream>


Pistol::Pistol() {

	setName("Standard pistol");
	setDamage(10);
}


Pistol::Pistol(const std::string& name, float damage) {

	setName(name);
	setDamage(damage);
}


// воспроизвести эффект выстрела
void Pistol::shotEffect() {

	std::cout << "Pistol shot effect";
}


// мгновенная перезарядка; возвращает 0 если нет боезопаса
bool Pistol::instantReload() {
	
	if (Inventory::pistolAmmo <= 0) {
		//std::cout << "Shortage of pistol ammunition";
		return 0;
	}
	else if (Inventory::pistolAmmo >= maxAmmo - getCurrentAmmo()) {
		Inventory::pistolAmmo -= maxAmmo - getCurrentAmmo();
		setCurrentAmmo(maxAmmo);
	}
	else if (maxAmmo <= getCurrentAmmo() + Inventory::pistolAmmo) {
		Inventory::pistolAmmo -= (getCurrentAmmo() + Inventory::pistolAmmo - maxAmmo);
		setCurrentAmmo(maxAmmo);
	}
	else {
		Inventory::pistolAmmo = 0;
		setCurrentAmmo(getCurrentAmmo() + Inventory::pistolAmmo);
	}

	return 1;
}
