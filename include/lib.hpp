#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3/SDL_main.h>

namespace PS
{
    class ImageTexture
    {
    public:
        SDL_Texture *texture;
        // void Load(char *path, char *file_type);
        // void Load(char *path, char *file_type, int new_width, int new_height);
    };

    class Window
    {
        SDL_Window *window;
        SDL_Renderer *renderer;
    public:
        void CreateWindow(const char *title, int width, int height, SDL_WindowFlags window_flags);
        void DestroyWindow();
        void FillColor(int r, int g, int b, int a);
    };

    char *PATH(char *path);
};