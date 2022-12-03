#pragma once


#include "Weapon.h"


class Pistol : public Weapon {

	Pistol();

	Pistol(const std::string& name, float damage);

	// воспроизвести эффект выстрела
	void shotEffect() override;
};

