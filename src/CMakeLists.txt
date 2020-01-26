file(GLOB_RECURSE DINO_HEADERS *.hpp *.h)

set(
    AIV_SOURCES
    ${AIV_HEADERS}
    ${aiv_SOURCE_DIR}/src/main.cpp
    PARENT_SCOPE
)

