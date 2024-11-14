#include <SDL2/SDL.h>
#include <vector>
#include <iostream>

#include "include/scene.h"
#include "include/ui.h"
#include "include/fighter.h"

void testScene1(SDL_Renderer *rend, std::vector<SDL_Event> events);
void testScene2(SDL_Renderer *rend, std::vector<SDL_Event> events);

std::function<void(SDL_Renderer*, std::vector<SDL_Event>)> scene;

void testScene1(SDL_Renderer *rend, std::vector<SDL_Event> events){
	Fighter otto(rend, "Otto");
	bool running = true;
	while(running){
		for(int i = 0; i < events.size(); i++){
			switch(events[i].type){
				case SDL_KEYDOWN:
					break;
			}
		}
		SDL_SetRenderDrawColor(rend, 255, 170, 170, 255);
		otto.control(events);
		otto.render(rend);
	}
}

