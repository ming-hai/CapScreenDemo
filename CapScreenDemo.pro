######################################################################
# Automatically generated by qmake (3.0) ?? 11? 16 19:11:56 2017
######################################################################

TEMPLATE = app
TARGET = CapScreenDemo
CONFIG(x64){
TARGET = $$TARGET"64"
}
include($$(SOUIPATH)/demo_com.pri)
INCLUDEPATH += $(SOUIPATH)/controls.extend


CONFIG(debug,debug|release){
	LIBS += utilitiesd.lib souid.lib
}
else{
	LIBS += utilities.lib soui.lib
}

PRECOMPILED_HEADER = stdafx.h

# Input
HEADERS += CBitmap.h \
	MainDlg.h \
	resource.h \
	CGdiDc.h \
	SnapshotDlg.h \
	res/resource.h \
	SSnapshotCtrl.h \
	CEdit9527.h

SOURCES += CapScreenDemo.cpp \
	MainDlg.cpp \
	SnapshotDlg.cpp \	
	SSnapshotCtrl.cpp \
	CEdit9527.cpp

RC_FILE += CapScreenDemo.rc
RC_INCLUDEPATH+=$(SOUIPATH)/soui-sys-resource