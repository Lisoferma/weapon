#include "Weapon.h"
#include <stdexcept>


Weapon::Weapon() {}


// ������ ��������
void Weapon::setName(const std::string& name) {

	if (name.empty())
		throw std::length_error("Length error: argument is empty");

	_name = name;
};


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


