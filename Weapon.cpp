// ��������� ����� �������������� � ���������� ��� ����� ������
// @author ��������� �.�.


#include "Weapon.h"

#include <iostream>
#include <string>
#include <stdexcept>


Weapon::Weapon() {

	_name        = "";
	_damage      = 0;
	maxAmmo      = 0;
	_currentAmmo = 0;
}


Weapon::Weapon(const std::string& name, float damage) {

	setName(name);
	setDamage(damage);
}


Weapon::Weapon(const std::string& name, float damage,
			   unsigned maxAmmo, unsigned currentAmmo) {

	setName(name);
	setDamage(damage);
	this->maxAmmo = maxAmmo;
	setCurrentAmmo(currentAmmo);
}


// ������ ��������
void Weapon::setName(const std::string& name) {

	if (name.empty())
		throw std::length_error("Length error: argument is empty");

	_name = name;
}


// ��������� ��������
std::string Weapon::getName() const {

	return _name;
}


// ������ ����
void Weapon::setDamage(float damage) {

	if (damage <= 0) 
		throw std::invalid_argument("Invalid argument: damage <= 0");

	_damage = damage;
}


// ��������� ����
float Weapon::getDamage() const {
	
	return _damage;
}


// �������, �������� ���� ������ �� ������; ���������� 0 ���� ������� ����
bool Weapon::shoot() {

	if (getCurrentAmmo() <= 0) {
		return 0;
	}

	setCurrentAmmo(getCurrentAmmo() - 1);

	return 1;
}


// ������ ������� �������� ������
void Weapon::setCurrentAmmo(unsigned currentAmmo) {

	if (currentAmmo > maxAmmo)
		throw std::invalid_argument("Invalid argument: currentAmmo > maxAmmo");

	_currentAmmo = currentAmmo;
}


// ��������� ������� ��������
unsigned Weapon::getCurrentAmmo() const {

	return _currentAmmo;
};

