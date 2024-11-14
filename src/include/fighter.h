#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "ui.h"

class Fighter {
	Fighter(SDL_Renderer *rend, std::string name_);
	std::string name;
	std::vector<Img> anim;             // stores the current animation vector, to render a frame: anim[frame]
	std::vector<Img> idle;             // store animations as vectors of images
	int frame;                         // keeps track of animation progress, turns 0 when anim switch or anim loop
};

#endif
