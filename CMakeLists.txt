
cmake_minimum_required( VERSION 3.17.4 )
project( Aleph VERSION  1.0 )

include( GNUInstallDirs )

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-fPIC)


add_subdirectory( Engine )

add_subdirectory( Aleph )
