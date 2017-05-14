#include "Display.h"
#include <iostream>
#include <GL/glew.h>

Display::Display(int width, int height, const char* title)
{
    this->m_isOpen = true;
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE,  8);
    SDL_GL_SetAttribute(SDL_GL_RED_SIZE,  8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE,  8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE,  8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32); // pixer buffer (8*4)
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);  // double buffer
    this->m_window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED,  SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);
    this->m_glContext = SDL_GL_CreateContext(this->m_window);

    GLenum status = glewInit();  if (status!= GLEW_OK) { std::cerr << "Failed to load glew";}
}

Display::~Display()
{
    SDL_GL_DeleteContext(this->m_glContext);
    SDL_DestroyWindow(this->m_window);
    SDL_Quit();
}

bool Display::IsOpen()
{
    return this->m_isOpen;
}


void Display::SwapBuffer()
{
    SDL_GL_SwapWindow(this->m_window);
    SDL_Event e;
    while(SDL_PollEvent(&e))
    {
        if (e.type == SDL_QUIT)
        { this->m_isOpen  = false;}
    }

}


Display::Display(const Display& other)
{
    //copy ctor
}
