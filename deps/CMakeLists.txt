include(FetchContent)

FetchContent_Declare(
    SDL2
    HG_REPOSITORY http://hg.libsdl.org/SDL
    HG_TAG release-2.0.10
)

FetchContent_GetProperties(SDL2)

if(NOT SDL2_POPULATED)
  FetchContent_Populate(SDL2)
  add_subdirectory(${sdl2_SOURCE_DIR} ${sdl2_BINARY_DIR})
endif()
