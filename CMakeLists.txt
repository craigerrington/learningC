cmake_minimum_required(VERSION 3.16)
project(learning C)

set(CMAKE_C_STANDARD 99)

set(GCC_COVERAGE_COMPILE_FLAGS "−Wall -W −ansi −Wpedantic −Wextra")

add_executable(learning main.c dweight.c maths.c pun.c test.c dweight2.c celsius.c helloworld.c uninitialized.c spaces.c tick.c sphere.c tax.c polynomial.c cashnotes.c interest.c)
add_executable(pun pun.c)
add_executable(test test.c)
add_executable(maths maths.c)
add_executable(dweight dweight.c)
add_executable(dweight2 dweight2.c)
add_executable(celsius celsius.c)
add_executable(helloworld helloworld.c)
add_executable(uninitialized uninitialized.c)
add_executable(spaces spaces.c)
add_executable(tick tick.c)
add_executable(sphere sphere.c)
add_executable(tax tax.c)
add_executable(polynomial polynomial.c)
add_executable(cashnotes cashnotes.c)
add_executable(interest interest.c)