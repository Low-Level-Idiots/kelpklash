#include <iostream>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "ui.h"

Fighter::Fighter(SDL_Renderer *rend, std::string name_){
	anim.push_back(Img(rend, "assets/walk_1.png"));
	name = name_;
}
