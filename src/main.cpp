#include <main.h>

SDL_HitTestResult MoveWindowCallback(SDL_Window *win, const SDL_Point *area, void *data)
{
    return SDL_HITTEST_DRAGGABLE;
}

class Window
{
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
public:
    Window(const char *title, int width, int height, SDL_WindowFlags window_flags)
    {
        SDL_CreateWindowAndRenderer(title, width, height, window_flags, &window, &renderer);
        SDL_SetWindowOpacity(window, 0.5f);
        SDL_SetWindowHitTest(window, MoveWindowCallback, NULL);
    }

    ~Window()
    {
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        std::cout << "Window QUIT." << std::endl;
    }

    void start_display()
    {
        SDL_RenderClear(renderer);
    }

    void end_display()
    {
        SDL_RenderPresent(renderer);
    }

    void fill_color(Uint8 r, Uint8 g, Uint8 b)
    {
        SDL_SetRenderDrawColor(renderer, r, g, b, 0);
    }
};

class Main
{
private:
    Window window = Window(WINDOW_TITLE, WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_FLAGS);
    SDL_Event event;

    bool loop = true;

    void listen()
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                loop = false;
            }
        }
    }

public:
    Main()
    {
        SDL_Init(INIT_FLAGS);
    }

    void run()
    {
        while (loop)
        {
            listen();
            window.start_display();
            window.fill_color(BG_R, BG_G, BG_G);
            window.end_display();
            std::cout << 0;
        }
    }

    void quit()
    {
        std::cout << "Main QUIT." << std::endl;
    }
};

int main(int argc, char *argv[])
{
    Main main;
    main.run();
    main.quit();
    return 0;
}
