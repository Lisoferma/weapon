// описывает общие характеристики и функционал для всего оружия
// @author Пилипейко А.А.


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


// задать название
void Weapon::setName(const std::string& name) {

	if (name.empty())
		throw std::length_error("Length error: argument is empty");

	_name = name;
}


// прочитать название
std::string Weapon::getName() const {

	return _name;
}


// задать урон
void Weapon::setDamage(float damage) {

	if (damage <= 0) 
		throw std::invalid_argument("Invalid argument: damage <= 0");

	_damage = damage;
}


// прочитать урон
float Weapon::getDamage() const {
	
	return _damage;
}


// выстрел, отнимает один патрон из обоймы; возвращает 0 если магазин пуст
bool Weapon::shoot() {

	if (getCurrentAmmo() <= 0) {
		return 0;
	}

	setCurrentAmmo(getCurrentAmmo() - 1);

	return 1;
}


// задать текущий боезопас оружия
void Weapon::setCurrentAmmo(unsigned currentAmmo) {

	if (currentAmmo > maxAmmo)
		throw std::invalid_argument("Invalid argument: currentAmmo > maxAmmo");

	_currentAmmo = currentAmmo;
}


// прочитать текущий боезопас
unsigned Weapon::getCurrentAmmo() const {

	return _currentAmmo;
};

