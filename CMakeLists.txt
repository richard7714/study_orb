cmake_minimum_required(VERSION 3.24)
project(study_orb)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(study_orb "file control/LoadImages.cpp" "list control/for_iterator.cpp" "list control/set.cpp" "list control/set_using_class.cpp" "list control/map.cpp" opencv/cv_mat_load.cpp Variable_Scope/scope.cpp opencv/cv_mat_load.cpp opencv/cv_mat_load.cpp opencv/cv_mat_add.cpp opencv/cv_mat_add.cpp)
target_link_libraries(study_orb ${OpenCV_LIBS})

