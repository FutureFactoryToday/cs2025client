cmake_minimum_required(VERSION 3.10)
project(CS25Client)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets REQUIRED core base)

include(${wxWidgets_USE_FILE})

add_executable(${PROJECT_NAME}
       	app.cpp
       	csMainFrame.h
       	csMainFrame.cpp
       	csConnectWidget.h
       	csConnectWidget.cpp
	csMainControlWidget.h
	csMainControlWidget.cpp
	csACHTControlWidget.h
	csACHTControlWidget.cpp
	csACHTPowerUpWidget.h
	csACHTPowerUpWidget.cpp
	csFANPowerUpWidget.h
	csFANPowerUpWidget.cpp
	csTempModeWidget.h
	csTempModeWidget.cpp
	csTempDisplayWidget.h
	csTempDisplayWidget.cpp
	csAxisControlWidget.h
	csAxisControlWidget.cpp
	csAxisDisplayWidget.h
	csAxisDisplayWidget.cpp
	csIllumControlWidget.h
	csIllumControlWidget.cpp
	csIllumModeWidget.h
	csIllumModeWidget.cpp
)

target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
