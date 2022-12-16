// описывает общий функционал для пистолетов, 
// в частности перезарядку и тип используемых патронов -- pistolAmmo 
// @author Пилипейко А.А.


#include "Pistol.h"
#include "Inventory.h"


//Pistol::Pistol() {
//
//	setName("Pistol");
//	setDamage(0);
//	maxAmmo = 0;
//	setCurrentAmmo(0);
//}


// мгновенная перезарядка; тратит pistolAmmo из Inventory.h
// возвращает 0 если нет боезапаса
bool Pistol::instantReload() {

	if (Inventory::pistolAmmo <= 0) {

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

		setCurrentAmmo(getCurrentAmmo() + Inventory::pistolAmmo);
		Inventory::pistolAmmo = 0;
	}

	return 1;
}
