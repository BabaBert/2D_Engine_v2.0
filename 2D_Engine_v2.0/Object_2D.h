#pragma once

#include <inttypes.h>
#include "Engine.h"

class Object_2D
{
public:
	Object_2D();
	Object_2D(const Object_2D& obj);
	~Object_2D();

private:
	SDL_Texture* texture = nullptr;
	SDL_Rect rectangle;
	b2Body* body;

};

