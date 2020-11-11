#include "Engine.h"

SDL_Texture* load_Texture(std::string filePath, SDL_Renderer* renderTarget) {
	SDL_Texture* texture = nullptr;
	SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
	if (surface == NULL)
		std::cout << "Error" << std::endl;
	else
	{
		SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 255, 0, 255));
		texture = SDL_CreateTextureFromSurface(renderTarget, surface);
		if (texture == NULL)
			std::cout << "Error" << std::endl;
	}
	SDL_FreeSurface(surface);
	return texture;
}

Engine::Engine(uint32_t flag, uint32_t window_X, uint32_t window_Y, std::string window_name) {
	SDL_Init(flag);
	window = SDL_CreateWindow(window_name.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, window_X, window_Y, SDL_WINDOW_OPENGL);
	render_target = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}
Engine::Engine(const Engine& engine) {
}
Engine::~Engine() {
	SDL_DestroyWindow(this->window);
	this->window = nullptr;
	SDL_DestroyRenderer(this->render_target);
	this->render_target = nullptr;

//#pragma omp parallel for
//	for (auto& i : this->textures) {
//		SDL_DestroyTexture(i);
//		i = nullptr;
//	}
	SDL_Quit;
}
void Engine::load_Texture(const std::string& file_path) {

}