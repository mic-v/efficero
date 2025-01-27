#include <SDL3/SDL.h>


int main()
{
        //init everything within sdl2
        SDL_Init( SDL_INIT_VIDEO );
        
        //create window
        SDL_Window* window = SDL_CreateWindow(
        "Title",                //title 
        1280,                   //width
        720,                    //height
        SDL_WINDOW_OPENGL);      //flags

        if(window == nullptr)
        {
                SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
                return 1;
        }

        //delay for a bit
        SDL_Delay(3000);

        SDL_DestroyWindow(window);

        SDL_Quit();

        return 0;
}
