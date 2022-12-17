
// @author Пилипейко А.А.


#pragma once


#include "Pistol.h"

// описывает функционал пистолета Colt
class Colt : public Pistol {
  public:
	Colt();

	// воспроизвести эффект выстрела
	void shotEffect() override;
};

