#include<iostream>
#include<GL/glew.h>
#include<GLFW/glfw3.h>
using namespace std;

int main() {
	GLFWwindow *window;
	if (!glfwInit()) {
		return -1;
	}

	//create a window mode
	window = glfwCreateWindow(640, 480, "OPENGL Project Tutorial", NULL, NULL);

	if (!window) {
		glfwTerminate();
		return -1;
	}

	//make window context current
	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);

		//render the openGl here

		//sweap front and back buffers
		glfwSwapBuffers(window);

		//poll for and process events
		glfwPollEvents();

	}

	glfwTerminate();
}