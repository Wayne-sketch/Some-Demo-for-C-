cmake_minimum_required( VERSION 3.10 )
project( eigen_qr )

find_package( Eigen3 REQUIRED )
#include_directories( "/usr/include/eigen3" )
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(eigen_qr eigen_qr.cpp)