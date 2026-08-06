cmake_minimum_required(VERSION 3.11)

project(ATM LANGUAGES CXX VERSION "1.0.0")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CPPTEST_HOME /mnt/c/Users/syoung/Documents/ToolRawDownloads/cpptestct/cpptest-ct)
if(CPPTEST_COVERAGE)
  include(cpptest-coverage.cmake)
endif()

set(SRC_FILES
  Account.cpp
  ATM.cpp
  Bank.cpp
  BaseDisplay.cpp
)



add_library(ATM STATIC ${SRC_FILES})
set_target_properties(ATM PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS ON
  COMPILE_WARNING_AS_ERROR OFF
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
    set(BUILD_TESTING OFF)
    add_subdirectory(
      ${googletest_SOURCE_DIR} EXCLUDE_FROM_ALL
      ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL

    )
  endif()

  add_executable(atm_test gtest_main.cpp)
  target_link_libraries(atm_test
    PRIVATE
      ATM
      gtest_main
  )

  enable_testing()

  include(GoogleTest)
  gtest_discover_tests(atm_test)

endif()


