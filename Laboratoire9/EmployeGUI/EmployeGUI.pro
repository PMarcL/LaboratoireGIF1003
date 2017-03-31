TEMPLATE = app
TARGET = EmployeGUI
QT += core \
    gui
HEADERS += employecommissiondialog.h \
    employegui.h
SOURCES += employecommissiondialog.cpp \
    main.cpp \
    employegui.cpp
FORMS += employecommissiondialog.ui \
    employegui.ui
RESOURCES += 
LIBS += "../EmployeLib/Debug/libEmployeLib.a"
INCLUDEPATH += "../EmployeLib/."
