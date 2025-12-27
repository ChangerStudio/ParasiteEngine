#include <main.hpp>

namespace IDE
{
    const char *Window_TITLE = "Parasite IDE";
    int Window_WIDTH = 1200;
    int Window_HEIGHT = 800;

    class BaseWindow
    {
    private:
    public:
        SDL_Window *window;
        SDL_Renderer *renderer;

        BaseWindow(const char *title, int width, int height, SDL_WindowFlags window_flags)
        {
            SDL_CreateWindowAndRenderer(title, width, height, window_flags, &window, &renderer);
        }

        ~BaseWindow()
        {
            SDL_DestroyWindow(window);
            SDL_DestroyRenderer(renderer);
        }

        void fill_color(Uint8 r, Uint8 g, Uint8 b)
        {
            SDL_SetRenderDrawColor(renderer, r, g, b, 255);
        }

        void display()
        {
            SDL_RenderClear(renderer);
            SDL_RenderPresent(renderer);
        }
    };
}

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_EVENTS | SDL_INIT_VIDEO);
    IDE::BaseWindow window = IDE::BaseWindow(IDE::Window_TITLE, IDE::Window_WIDTH, IDE::Window_HEIGHT, SDL_WINDOW_RESIZABLE);
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
        window.fill_color(20,20,100);
        window.display();
    }
    return 0;
}
