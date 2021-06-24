#include <iostream>
#include <GLFW/glfw3.h>
#include "window.h"

Window::Window(const CreateParams &params)
{
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    this->window = glfwCreateWindow(
        params.width, params.height, 
        params.title, 
        nullptr, nullptr);

    if(!this->window)
    {
        printf("WARNING: unable to create window\n");
        return;
    }

    glfwMakeContextCurrent(this->window);
}

Window::~Window()
{
    this->Close();
}

void Window::SwapBuffers()
{
    glfwSwapBuffers(this->window);
}

void Window::EnableVSync(bool enable)
{
    glfwSwapInterval(enable? 1 : 0);
}

void Window::Close()
{
    if(this->window)
    {
        glfwDestroyWindow(this->window);
        this->window = nullptr;
    }
}
