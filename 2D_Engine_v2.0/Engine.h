#pragma once

#include <inttypes.h>
#include <SDL.h>
#include <vector>
#include <iostream>
#include <omp.h>
#include <Box2D.h>


SDL_Texture* load_Texture(std::string filePath, SDL_Renderer* renderTarget);

class Engine
{
public:
	Engine(uint32_t flag, uint32_t window_X, uint32_t window_Y, std::string window_name);
	Engine(const Engine& engine);
	~Engine();

	void load_Texture(const std::string& file_path);
	//void optimize_Texture(const std::string& file_path);
private:
	SDL_Window* window = nullptr;
	SDL_Renderer* render_target = nullptr;

	//std::vector<SDL_Texture*> textures;
	//std::vector<SDL_Rect> rectangles;
	//std::vector<Actor*> actors;
};

