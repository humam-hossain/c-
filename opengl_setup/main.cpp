#include<iostream>
#include<GLFW/glfw3.h>

int main()
{
    GLFWwindow* window; // pointer to the glfw window object

    // initialize glfw
    if(!glfwInit()){
        std::cout << "GLFW not initialized" << std::endl;
        return -1;
    }

    // creating window
    window = glfwCreateWindow(800, 600, "Gaussian Elemination Calculator", 0, 0);

    // checking whether window was created successfully
    if(!window){
        std::cout << "Window wasn't created successfully" << std::endl;
        return -1;
    }

    // making opengl context current
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)){
        glfwPollEvents(); // updating opengl window
        glfwSwapBuffers(window); // rendering opengl window
    }

    glfwTerminate();

    return 0;
}