#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "Vector3.h"

/*
HOW IT WORKS

1. Create window
2. Create OpenGL context

5. Render stuff

6. Release context
7. Destroy window

*/
int main()
{
    Display d(1440,900,"OpenGL Test");

    while(d.IsOpen())
    {
        glClearColor(1, 1, 1, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        d.SwapBuffer();

    }
    return 0;
}
