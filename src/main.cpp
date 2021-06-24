#include <iostream>
#include <GLFW/glfw3.h>
#include "window.h"

void glfw_error_callback(int error, const char *description);

int main(int argc, char *argv[])
{
    glfwSetErrorCallback(glfw_error_callback);
    if(!glfwInit())
    {
        printf("glfw init fail\n");
        return 1;
    }

    Window::CreateParams windowCreateParams = {};
    windowCreateParams.title = "Cloth Sim";
    Window window = Window(windowCreateParams);
    window.Close();

    glfwTerminate();
    printf("bye c:\n");
    return 0;
}

void glfw_error_callback(int error, const char *description)
{
    printf("glfw error (%x): %s\n", error, description);
}