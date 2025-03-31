cmake_minimum_required(VERSION 3.11)

set(CPPTEST_HOME /mnt/c/Users/syoung/Documents/LastData/cpptest-ct/)

set(TARGET_NAME ATM)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(${TARGET_NAME}
  LANGUAGES CXX
  VERSION "1.0.0"
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CPPTEST_COVERAGE)
  include(cpptest-coverage.cmake)
endif()

set(SRC_FILES
  Account.cpp
  ATM.cpp
  Bank.cpp
  BaseDisplay.cpp
)


add_library(${TARGET_NAME} STATIC ${SRC_FILES})
set_target_properties(${TARGET_NAME} PROPERTIES
  CXX_EXTENSIONS ON
  CXX_STANDARD 14  
  CXX_STANDARD_REQUIRED ON
  COMPILE_WARNING_AS_ERROR OFF
  LINKER_LANGUAGE CXX
)

option(ENABLE_GT_TESTS "Enable GoogleTest tests" ON)

if(ENABLE_GT_TESTS)
  include(FetchContent)

  FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.0
  )

  FetchContent_GetProperties(googletest)

  if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    set(gtest_disable_pthreads ON CACHE BOOL "" FORCE)
    add_subdirectory(
      ${googletest_SOURCE_DIR}
      ${googletest_BINARY_DIR}
    )
  endif()

  add_executable(atm_gtest "")
  target_sources(atm_gtest
    PRIVATE
      unitTests/gtest_main.cpp
  )
  target_link_libraries(atm_gtest
    PRIVATE
      ${TARGET_NAME}
      gtest_main
  )

  target_include_directories(atm_gtest PRIVATE ${CMAKE_SOURCE_DIR})

  enable_testing()
  add_test(
    NAME atm_gtest
    COMMAND $<TARGET_FILE:atm_gtest>
  )
endif()


