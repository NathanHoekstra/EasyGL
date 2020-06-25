#include "../include/EasyGL/easygl.h"

namespace EasyGL {

    easy_gl::easy_gl(const int &width, const int &height, const char *title) {
        /* Initialize the library */
        if (!glfwInit()) {
            throw std::runtime_error("Unable to initialize library");
        }

        /* Create a windowed mode window and its OpenGL context */
        window = glfwCreateWindow(width, height, title, NULL, NULL);
        if (!window) {
            glfwTerminate();
            throw std::runtime_error("Unable to construct window");
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);
    }

    easy_gl::~easy_gl() {
        // terminate glfw
        glfwTerminate();
    }

    void easy_gl::run() {
        /* Loop until the user closes the window */
        while (!glfwWindowShouldClose(window)) {
            /* Render here */
            glClear(GL_COLOR_BUFFER_BIT);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();
        }
    }

} // EasyGL namespace
