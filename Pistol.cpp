#include "Pistol.h"
#include "Inventory.h"
#include <iostream>


Pistol::Pistol() {

	setName("Standard pistol");
	setDamage(10);
	maxAmmo = 6;
	setCurrentAmmo(6);
}


Pistol::Pistol(const std::string& name, float damage) {

	setName(name);
	setDamage(damage);
}


// �������; ���������� 0 ���� ������� ����
bool Pistol::shoot() {

	if (getCurrentAmmo() <= 0) {
		return 0;
	}

	setCurrentAmmo(getCurrentAmmo() - 1);

	return 1;
}


// ������������� ������ ��������
void Pistol::shotEffect() {

	std::cout << "*Pistol shot effect*";
}


// ���������� �����������; ���������� 0 ���� ��� ���������
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
		Inventory::pistolAmmo = 0;
		setCurrentAmmo(getCurrentAmmo() + Inventory::pistolAmmo);
	}

	return 1;
}
