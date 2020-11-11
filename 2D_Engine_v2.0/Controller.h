#pragma once

#include "Engine.h"
#include "Object_2D.h"

class Controller
{
public:
	Controller();
	Controller(const Controller& controller);
	~Controller();

	void update();

private:
	std::vector<Object_2D> objects;
};

