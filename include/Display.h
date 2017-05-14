#ifndef DISPLAY_H
#define DISPLAY_H
#include<string>
#include "SDL2/SDL.h"

class Display
{
    public:
        Display(int width, int height, const char* title) ;
        void SwapBuffer();
        virtual ~Display();
        bool IsOpen();

    protected:

    private:
        Display(const Display& other);
        // sdl talks to OS and returns window
        SDL_Window* m_window;
        // 'gl context is a sandbox' for program to use
        void* m_glContext;
        bool m_isOpen;
};

#endif
