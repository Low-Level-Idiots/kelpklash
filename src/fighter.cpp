#include <iostream>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "include/ui.h"
#include "include/fighter.h"

Fighter::Fighter(SDL_Renderer *rend, std::string name_){
	idle.push_back(Img(rend, "assets/walk_1.png"));
	name = name_;
	x = 0;
	y = 0;
	max_x_spd = 10;
	max_y_spd = 10;
}

void Fighter::render(SDL_Renderer *rend){
	idle[0].render(rend, x, y, 100, 100);
}

void Fighter::accel(int x_amount, int y_amount){
	x_vel += x_amount;
	if(x_vel > max_x_spd){
		x_vel = max_x_spd;
	}
	if(x_vel < -max_x_spd){
		x_vel = -max_x_spd;
	}
	y_vel += y_amount;
	if(y_vel > max_y_spd){
		y_vel = max_y_spd;
	}
	if(y_vel < -max_y_spd){
		y_vel = -max_y_spd;
	}
}

void Fighter::deccel(int x_target, int y_target){}

void Fighter::move(){
	x += x_vel;
	y += y_vel;
}

void Fighter::control(std::vector<SDL_Event> events){
	for(int i = 0; i < events.size(); i++){
		switch(events[i].type){
			case SDL_KEYDOWN:
				switch (events[i].key.keysym.sym) {
					case SDLK_a:
						accel(-2,0);
						break;
					case SDLK_d:
						accel(2,0);
						break;
				}
				break;
		}
	}
	move();
}
