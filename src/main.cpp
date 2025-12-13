#include <lib.hpp>

namespace PS
{
    char *PATH(char *path)
    {
        // 为多平台做准备
        return path;
    }

    void Window::CreateWindow(const char *title, int width, int height, SDL_WindowFlags window_flags)
    {
        SDL_CreateWindowAndRenderer(title, width, height, window_flags, &window, &renderer);
    }

    void Window::DestroyWindow()
    {
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
    }

    void Window::FillColor(int r, int g, int b, int a)
    {
        SDL_SetRenderDrawColor(renderer, r, g, b, a);
    }

}

int main(int argc, char *argv[])
{
    PS::Window window;
    SDL_Event event;
    window.CreateWindow("1",1200,800,SDL_WINDOW_RESIZABLE);
    bool keep=true;
    while(keep){
        while(SDL_PollEvent(&event)){
            if(event.type==SDL_EVENT_QUIT){
                keep=false;
            }
        }
        window.FillColor(200,200,200,255);
    }
    return 0;
}