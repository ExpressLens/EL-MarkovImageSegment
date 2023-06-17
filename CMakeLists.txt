cmake_minimum_required(VERSION 2.8.11)

project(markov)

set(PROJECT_SRC_DIR ${PROJECT_SOURCE_DIR})

configure_file (
  "${PROJECT_SOURCE_DIR}/Settings.h.in"
 