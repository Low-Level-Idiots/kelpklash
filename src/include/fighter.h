#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "ui.h"

class Fighter {
	public:
		Fighter(SDL_Renderer *rend, std::string name_);
		int x;
		int y;
		int x_vel;
		int y_vel;
		int max_x_spd;
		int max_y_spd;
		std::string name;
		std::vector<Img> anim;             // stores the current animation vector, to render a frame: anim[frame]
		std::vector<Img> idle;             // store animations as vectors of images
		int frame;                         // keeps track of animation progress, turns 0 when anim switch or anim loop
		void render(SDL_Renderer *rend);
		void accel(int x_amount, int y_amount);
		void deccel(int x_target, int y_target);
		void move();
		void control(std::vector<SDL_Event> events);
};

#endif
