cmake_minimum_required(VERSION 3.9)
project(TP6)

set(CMAKE_CXX_STANDARD 11)

add_executable(TP6
        Color.cpp
        Color.hpp
        Disc.cpp
        Disc.hpp
        FillProperty.cpp
        FillProperty.hpp
        Geom2D.cpp
        Geom2D.hpp
        Point.cpp
        Point.hpp
        PointsArray.cpp
        PointsArray.hpp
        ReallocatablePointsArray.cpp
        ReallocatablePointsArray.hpp
        Surface.cpp
        Surface.hpp
        SVGstream.cpp
        SVGstream.hpp
        TP6.cpp
        Transform.cpp
        Transform.hpp)
