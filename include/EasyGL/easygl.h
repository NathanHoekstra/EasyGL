#ifndef EASYGL_EASYGL_H
#define EASYGL_EASYGL_H

#include <stdexcept>
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
