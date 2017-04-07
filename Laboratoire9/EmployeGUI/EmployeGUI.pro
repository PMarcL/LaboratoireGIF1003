TEMPLATE = app
TARGET = EmployeGUI
QT += core \
    gui
HEADERS += dialogsupprimeremploye.h \
    employecommissiondialog.h \
    employegui.h
SOURCES += dialogsupprimeremploye.cpp \
    employecommissiondialog.cpp \
    main.cpp \
    employegui.cpp
FORMS += dialogsupprimeremploye.ui \
    employecommissiondialog.ui \
    employegui.ui
RESOURCES += 
LIBS += "../EmployeLib/Debug/libEmployeLib.a"
INCLUDEPATH += "../EmployeLib/."
