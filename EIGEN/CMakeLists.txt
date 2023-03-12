cmake_minimum_required(VERSION 3.5)
project(EIGEN_HOUSEHOLDERQR)

find_package( Eigen3 REQUIRED )
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(eigen_householderQR eigen_householderQR.cpp)
add_executable(block_operation block_operation.cpp)