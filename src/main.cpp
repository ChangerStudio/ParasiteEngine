#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <SDL3/SDL_main.h>
#include <iostream>

int main(int argc, char *argv[])
{
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;
    SDL_Init(SDL_INIT_AUDIO | SDL_INIT_EVENTS | SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer("Parasite Engine", 1200, 800, SDL_WINDOW_RESIZABLE, &window, &renderer);
    std::cout << "Built window&renderer success." << std::endl;
    bool loop = true;
    while (loop)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                std::cout << "Event: QUIT" << std::endl;
                loop = false;
            }
        }

        if (!SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE))
        {
            std::cout << SDL_GetError() << std::endl;
        }
        
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}