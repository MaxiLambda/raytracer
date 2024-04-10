cmake_minimum_required(VERSION 3.28)
project(raytracer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(raytracer
        example.cc
        example2.cc
        kdtree.cc
        kdtree.h
        math.h
        math.tcc
        math_test.cc
        measure_time.cc
        measure_time.h
        raytracer.cc
        sqrt_opt.cc
        sqrt_opt.h
        statistics.cc
        statistics.h
        triangle.h
        triangle.tcc
        triangle_test.cc)
