﻿# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("OOPZI_task5")

# Включите подпроекты.
add_subdirectory ("lib")
add_subdirectory ("exe")
