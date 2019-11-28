cmake_minimum_required(VERSION 3.15)
project(Kruskal)

set(CMAKE_CXX_STANDARD 14)

add_executable(Kruskal main.cpp Graph.cpp DisjointSet.cpp)