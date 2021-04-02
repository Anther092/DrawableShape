cmake_minimum_required(VERSION 3.17)
project(DrawShapes)

set(CMAKE_CXX_STANDARD 14)

add_executable(DrawShapes main.cpp DrawableShape.cpp DrawableShape.h Figures/Rectangle.cpp Figures/Rectangle.h Figures/Circle.cpp Figures/Circle.h)