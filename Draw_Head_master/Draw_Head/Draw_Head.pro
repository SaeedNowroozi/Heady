#-------------------------------------------------
#
# Project created by QtCreator 2018-04-17T23:18:52
#
#-------------------------------------------------

QT       += core gui
QT += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += sql
QT += testlib

TARGET = Draw_Head
TEMPLATE = app



# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
INCLUDEPATH += "C:\boost_1_72_0"

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11
SOURCES += \
    Control/form_control.cpp \
    Convert/dpi_shape.cpp \
    Interface/form_interface.cpp \
    Main/form_chart.cpp \
        Main/main.cpp \
        Main/mainwindow.cpp \
    Main/mydir.cpp \
    Mis/form_mis.cpp \
    Shape/form_select_shape.cpp \
    Shape/mouse_crouser.cpp \
    Shape/pool_shapes.cpp \
    Shape/shape.cpp \
    Convert/convert_bit.cpp \
    Convert/convert_to_pixel.cpp \
    Convert/smart_algorithm.cpp \
    Control/control_head.cpp \
    Control/control_motor.cpp \
    Control/control_mis.cpp \
    Convert/gradient_regulation.cpp \
    Interface/interface_fpga.cpp \
    Interface/interface_usb.cpp \
    Shape/pic.cpp \
    Convert/convert_pic.cpp \
    Mis/timer.cpp \
    Main/chart.cpp \
    Mis/camera.cpp \
    Mis/thread_motors.cpp \
    Shape/polygun.cpp \
    Shape/rectangle.cpp \
    Shape/circle.cpp \
    Shape/line.cpp \
    Shape/curive.cpp \
    node.cpp \
    edge.cpp \
    PNG/lodepng.cpp \
    Convert/itu_t.cpp

HEADERS += \
    Control/form_control.h \
    Convert/dpi_shape.h \
    Interface/form_interface.h \
    Main/form_chart.h \
        Main/mainwindow.h \
    Main/mydir.h \
    Mis/form_mis.h \
    Shape/form_select_shape.h \
    Shape/mouse_crouser.h \
    Shape/pool_shapes.h \
    Shape/shape.h \
    Convert/convert_bit.h \
    Convert/convert_to_pixel.h \
    Convert/smart_algorithm.h \
    Control/control_head.h \
    Control/control_motor.h \
    Control/control_mis.h \
    Convert/gradient_regulation.h \
    Interface/interface_fpga.h \
    Interface/interface_usb.h \
    Shape/pic.h \
    Convert/convert_pic.h \
    Mis/timer.h \
    Main/chart.h \
    Mis/camera.h \
    Mis/thread_motors.h \
    Shape/polygun.h \
    Shape/rectangle.h \
    Shape/circle.h \
    Shape/line.h \
    Shape/curive.h \
    node.h \
    edge.h \
    PNG/lodepng.h \
    Convert/itu_t.h

FORMS += \
        Control/form_control.ui \
        Interface/form_interface.ui \
        Main/form_chart.ui \
        Main/mainwindow.ui \
        Mis/form_mis.ui \
        Shape/form_select_shape.ui
LIBS += -L"G:\Draw_Head_master\Draw_Head\CyAPI_lib_cpp" -lcyapi
LIBS += -lsetupapi

RESOURCES += \
    draw_image.qrc
