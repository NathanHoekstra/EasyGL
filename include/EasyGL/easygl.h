#ifndef EASYGL_EASYGL_H
#define EASYGL_EASYGL_H

#include <stdexcept>

#ifdef __APPLE__
// silence deprecation warnings
#define GL_SILENCE_DEPRECATION
#endif
#include "../../includes/GLFW/glfw3.h"

namespace EasyGL {

    class easy_gl {
    private:
        GLFWwindow* window;
    public:
        easy_gl(const int &width, const int &height, const char *title);
        ~easy_gl();
        void run();

    };
} // EasyGL namespace

#endif //EASYGL_EASYGL_H
