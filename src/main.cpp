#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <SDL3/SDL_main.h>

int main(int argc ,char *argv[])
{
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;
    SDL_Init(SDL_INIT_AUDIO|SDL_INIT_EVENTS|SDL_INIT_VIDEO);
    window=SDL_CreateWindow("Parasite Engine", 0, 0, SDL_WINDOW_RESIZABLE);
    renderer=SDL_CreateRenderer(window,"Parasite main");
    while(true)
    {
        while(SDL_PollEvent(&event))
        {
            if()
        }
    }
    return 0;
}