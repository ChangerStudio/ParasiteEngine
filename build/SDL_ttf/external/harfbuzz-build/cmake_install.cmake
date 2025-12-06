# Install script for directory: F:/ParasiteEngine/SDL_ttf/external/harfbuzz

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/ParasiteEngine")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "D:/ProgramFiles/MSYS2/mingw64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/harfbuzz" TYPE FILE FILES
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-aat-layout.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-aat.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-blob.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-buffer.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-common.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-cplusplus.hh"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-deprecated.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-draw.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-face.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-font.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-map.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-color.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-deprecated.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-font.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-layout.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-math.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-meta.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-metrics.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-name.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-shape.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot-var.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ot.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-paint.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-set.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-shape-plan.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-shape.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-style.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-unicode.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-version.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-ft.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-gdi.h"
    "F:/ParasiteEngine/SDL_ttf/external/harfbuzz/src/hb-uniscribe.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "F:/ParasiteEngine/build/SDL_ttf/external/harfbuzz-build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
