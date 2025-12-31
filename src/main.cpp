#include <main.h>

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Event event;

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer("test", 1200, 800, SDL_WINDOW_RESIZABLE, &window, &renderer);
    bool loop=true;
    while(loop)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_EVENT_QUIT)
            {
                loop=false;
            }
        }
        SDL_SetRenderDrawColor(renderer, 25, 25, 25, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    return 0;
}