cmake_minimum_required(VERSION 3.0)
project(plate-sampler C CXX)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/vendor/nanopb/extra)
find_package(Nanopb REQUIRED)
include_directories(${NANOPB_INCLUDE_DIRS})

nanopb_generate_cpp(PROTO_SRCS PROTO_HDRS plate_sampler.proto)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
set_source_files_properties(${PROTO_SRCS} ${PROTO_HDRS}
  PROPERTIES GENERATED TRUE)

