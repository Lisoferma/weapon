#include "Pistol.h"
#include <iostream>


Pistol::Pistol() {

	_name = "Standard pistol";
	_damage = 10;
}


Pistol::Pistol(const std::string& name, float damage) {

	setName(name);
	setDamage(damage);
}


// воспроизвести эффект выстрела
void Pistol::shotEffect() {

	std::cout << "Pistol shot effect";
};
