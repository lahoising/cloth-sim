#ifndef _CLOTH_WINDOW_H_
#define _CLOTH_WINDOW_H_

#include <inttypes.h>
struct GLFWwindow;

class Window
{
public:
    typedef struct create_params_s
    {
        uint32_t width, height;
        const char *title;

        create_params_s() :
            width(800), height(600), title("window") {}
    } CreateParams;

public:
    Window(const CreateParams &params);
    ~Window();
    void SwapBuffers();
    void EnableVSync(bool enable);
    void Close();

private:
    GLFWwindow *window;
};

#endif