#undef GLFW_DLL
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <iostream>
using namespace std;

#define IMAGE_WIDTH     80
#define IMAGE_HEIGHT    60

int main() {
  if (!glfwInit()) {
    cerr << "Can't initialize GLFW" << endl;
    exit (EXIT_FAILURE);
  }

  
  int nx = IMAGE_WIDTH;
    int ny = IMAGE_HEIGHT;

    // One time during setup.
    unsigned int data[ny][nx][3];
    for( size_t y = 0; y < ny; ++y )
    {
        for( size_t x = 0; x < nx; ++x )
        {
            data[y][x][0] = ( rand() % 256 ) * 256 * 256 * 256;
            data[y][x][1] = 0;
            data[y][x][2] = 0;
        }
    }
  GLFWwindow *win;
  win = glfwCreateWindow (450, 500, "GBEmu Lite v.0.1", NULL, NULL);
  glfwMakeContextCurrent(win);
  while (!glfwWindowShouldClose(win)) {
	  
	  /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);
    
        glDrawPixels( nx, ny, GL_RGB, GL_UNSIGNED_INT, data );
    
        /* Swap front and back buffers */
        glfwSwapBuffers(win);
    glfwWaitEvents();
  }
  glfwDestroyWindow(win);
  glfwTerminate();
  return 0;
} 