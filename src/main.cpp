#include <main.hpp>

namespace IDE
{
    const char *Window_TITLE = "Parasite IDE";
    int Window_WIDTH = 1200;
    int Window_HEIGHT = 800;
}


int main(int argc, char *argv[])
{
    SDL_Window *window = nullptr;
    SDL_Renderer *renderer = nullptr;
    SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(IDE::Window_TITLE, IDE::Window_WIDTH,IDE::Window_HEIGHT, SDL_WINDOW_RESIZABLE, &window, &renderer);
    bool loop = true;
    while (loop)
    {
        SDL_Event *event;
        while (SDL_PollEvent(event))
        {
            if (event->type == SDL_EVENT_QUIT)
            {
                loop = false;
            }
        }
        SDL_SetRenderDrawColor(renderer, 13, 17, 23, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    return 0;
}