#include "Weapon.h"
#include "Inventory.h"
#include <iostream>
#include <stdexcept>


Weapon::Weapon() {

	_name        = "";
	_damage      = 0;
	maxAmmo      = 0;
	_currentAmmo = 0;
}


// ������ ��������
void Weapon::setName(const std::string& name) {

	if (name.empty())
		throw std::length_error("Length error: argument is empty");

	_name = name;
}


// ��������� ��������
std::string& Weapon::getName() {

	return _name;
}


// ������ ����
void Weapon::setDamage(float damage) {

	if (damage <= 0) 
		throw std::invalid_argument("Invalid argument: damage <= 0");

	_damage = damage;
}


// ��������� ����
float Weapon::getDamage() {
	
	return _damage;
}


// ������ ������� �������� ������
void Weapon::setCurrentAmmo(unsigned currentAmmo) {

	if (currentAmmo > maxAmmo)
		throw std::invalid_argument("Invalid argument: currentAmmo > maxAmmo");

	_currentAmmo = currentAmmo;
}


// ��������� ������� ��������
unsigned Weapon::getCurrentAmmo() {

	return _currentAmmo;
};

