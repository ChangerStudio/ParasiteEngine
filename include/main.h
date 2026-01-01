#pragma once

#include <iostream>
#include <vector>

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3_mixer/SDL_mixer.h>


#define PROJECT_NAME "Parasite Engine : Parasite Coding Space"
#define PROJECT_AUTHOR "Changer Studio"
#define PROJECT_VERSION "0.0.260101-alpha"
#define PROJECT_WEBSITE "http://crstudio.cloud/ps/pcs"

#define WINDOW_TITLE "Parasite Coding Space"
#define WINDOW_WIDTH 1200
#define WINDOW_HEIGHT 800
#define WINDOW_FLAGS SDL_WINDOW_RESIZABLE | SDL_WINDOW_BORDERLESS

/** 
* SDL初始化时要加载的内容
**/
#define INIT_FLAGS SDL_INIT_EVENTS | SDL_INIT_VIDEO


const Uint8 BG_R = 25;
const Uint8 BG_G = 25;
const Uint8 BG_B = 25;