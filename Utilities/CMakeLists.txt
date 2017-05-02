cmake_minimum_required(VERSION 3.6)

file(GLOB Utilities_SRC
    "*.cpp"
)
file(GLOB Utilities_H
    "*.h"
)

add_library (Utilities 
  ${Utilities_SRC})

install (TARGETS Utilities DESTINATION bin)
install (FILES ${Utilities_H} DESTINATION include)
