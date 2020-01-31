MAKEFILE      = Makefile

EQ            = =

CC            = gcc
CXX           = g++
DEFINES       = -DQT_QML_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -std=gnu++11 -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I../Graphique -I. -I../libQT/gcc_64/include -I../libQT/gcc_64/include/QtWidgets -I../libQT/gcc_64/include/QtGui -I../libQT/gcc_64/include/QtCore -I. -isystem /usr/include/libdrm -I../libQT/gcc_64/mkspecs/linux-g++
QMAKE         = ../libQT/gcc_64/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = ../libQT/gcc_64/bin/qmake -install qinstall
QINSTALL_PROGRAM = ../libQT/gcc_64/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
LINK          = g++
LFLAGS        = -Wl,-rpath,../libQT/gcc_64/lib
LIBS          = $(SUBLIBS) ../libQT/gcc_64/lib/libQt5Widgets.so ../libQT/gcc_64/lib/libQt5Gui.so ../libQT/gcc_64/lib/libQt5Core.so -lGL -lpthread
AR            = ar cqs
RANLIB        =
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../Jeu/Feu.cc \
		../Jeu/Glace.cc \
		../Jeu/Joueur.cc \
		../Jeu/Monstre.cc \
		../Jeu/Ombre.cc \
		../Graphique/Barre.cc \
		../Graphique/HazelGame.cc \
		../Graphique/Main.cc \
		../Graphique/Mana.cc \
		../Graphique/Menu.cc \
		../Graphique/Pouvoir.cc \
		../Graphique/SpriteJoueur.cc \
		../Graphique/SpriteMonstre.cc \
		../Graphique/Vie.cc moc_HazelGame.cpp \
		moc_SpriteMonstre.cpp
OBJECTS       = Feu.o \
		Glace.o \
		Joueur.o \
		Monstre.o \
		Ombre.o \
		Barre.o \
		HazelGame.o \
		Main.o \
		Mana.o \
		Menu.o \
		Pouvoir.o \
		SpriteJoueur.o \
		SpriteMonstre.o \
		Vie.o \
		moc_HazelGame.o \
		moc_SpriteMonstre.o
DIST          = ../libQT/gcc_64/mkspecs/features/spec_pre.prf \
		../libQT/gcc_64/mkspecs/common/unix.conf \
		../libQT/gcc_64/mkspecs/common/linux.conf \
		../libQT/gcc_64/mkspecs/common/sanitize.conf \
		../libQT/gcc_64/mkspecs/common/gcc-base.conf \
		../libQT/gcc_64/mkspecs/common/gcc-base-unix.conf \
		../libQT/gcc_64/mkspecs/common/g++-base.conf \
		../libQT/gcc_64/mkspecs/common/g++-unix.conf \
		../libQT/gcc_64/mkspecs/qconfig.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3danimation.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dcore.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dextras.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dinput.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dlogic.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquick.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3drender.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3drender_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_core.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_edid_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_egl_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gamepad.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gamepad_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_glx_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_help.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_input_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_kms_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_location.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_location_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimediagsttools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_network.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioningquick.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioningquick_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_remoteobjects.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_repparser.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_repparser_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_scxml.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_scxml_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialbus.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialbus_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_service_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_texttospeech.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_texttospeech_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_theme_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_waylandclient.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_waylandclient_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webchannel.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webview.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webview_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xkbcommon_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../libQT/gcc_64/mkspecs/features/qt_functions.prf \
		../libQT/gcc_64/mkspecs/features/qt_config.prf \
		../libQT/gcc_64/mkspecs/linux-g++/qmake.conf \
		../libQT/gcc_64/mkspecs/features/spec_post.prf \
		../Graphique/.qmake.stash \
		../libQT/gcc_64/mkspecs/features/exclusive_builds.prf \
		../libQT/gcc_64/mkspecs/features/toolchain.prf \
		../libQT/gcc_64/mkspecs/features/default_pre.prf \
		../libQT/gcc_64/mkspecs/features/resolve_config.prf \
		../libQT/gcc_64/mkspecs/features/default_post.prf \
		../libQT/gcc_64/mkspecs/features/qml_debug.prf \
		../libQT/gcc_64/mkspecs/features/warn_on.prf \
		../libQT/gcc_64/mkspecs/features/qt.prf \
		../libQT/gcc_64/mkspecs/features/resources_functions.prf \
		../libQT/gcc_64/mkspecs/features/resources.prf \
		../libQT/gcc_64/mkspecs/features/moc.prf \
		../libQT/gcc_64/mkspecs/features/unix/opengl.prf \
		../libQT/gcc_64/mkspecs/features/uic.prf \
		../libQT/gcc_64/mkspecs/features/unix/thread.prf \
		../libQT/gcc_64/mkspecs/features/qmake_use.prf \
		../libQT/gcc_64/mkspecs/features/file_copies.prf \
		../libQT/gcc_64/mkspecs/features/testcase_targets.prf \
		../libQT/gcc_64/mkspecs/features/exceptions.prf \
		../libQT/gcc_64/mkspecs/features/yacc.prf \
		../libQT/gcc_64/mkspecs/features/lex.prf \
		../Graphique/Hazel.pro ../Jeu/Feu.hh \
		../Jeu/Glace.hh \
		../Jeu/Joueur.hh \
		../Jeu/Monstre.hh \
		../Jeu/Ombre.hh \
		../Jeu/Personnage.hh \
		../Graphique/Barre.hh \
		../Graphique/HazelGame.hh \
		../Graphique/Mana.hh \
		../Graphique/Menu.hh \
		../Graphique/Objet.hh \
		../Graphique/Pouvoir.hh \
		../Graphique/SpriteJoueur.hh \
		../Graphique/SpriteMonstre.hh \
		../Graphique/Vie.hh ../Jeu/Feu.cc \
		../Jeu/Glace.cc \
		../Jeu/Joueur.cc \
		../Jeu/Monstre.cc \
		../Jeu/Ombre.cc \
		../Graphique/Barre.cc \
		../Graphique/HazelGame.cc \
		../Graphique/Main.cc \
		../Graphique/Mana.cc \
		../Graphique/Menu.cc \
		../Graphique/Pouvoir.cc \
		../Graphique/SpriteJoueur.cc \
		../Graphique/SpriteMonstre.cc \
		../Graphique/Vie.cc
QMAKE_TARGET  = hazel
DESTDIR       =
TARGET        = hazel


first: all
####### Build rules

hazel:  $(OBJECTS)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ../Graphique/Hazel.pro ../libQT/gcc_64/mkspecs/linux-g++/qmake.conf ../libQT/gcc_64/mkspecs/features/spec_pre.prf \
		../libQT/gcc_64/mkspecs/common/unix.conf \
		../libQT/gcc_64/mkspecs/common/linux.conf \
		../libQT/gcc_64/mkspecs/common/sanitize.conf \
		../libQT/gcc_64/mkspecs/common/gcc-base.conf \
		../libQT/gcc_64/mkspecs/common/gcc-base-unix.conf \
		../libQT/gcc_64/mkspecs/common/g++-base.conf \
		../libQT/gcc_64/mkspecs/common/g++-unix.conf \
		../libQT/gcc_64/mkspecs/qconfig.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3danimation.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dcore.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dextras.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dinput.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dlogic.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquick.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3drender.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_3drender_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_core.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_edid_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_egl_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gamepad.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gamepad_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_glx_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_help.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_input_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_kms_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_location.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_location_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimediagsttools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_network.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioningquick.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_positioningquick_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_remoteobjects.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_repparser.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_repparser_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_scxml.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_scxml_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialbus.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialbus_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_service_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_texttospeech.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_texttospeech_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_theme_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_waylandclient.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_waylandclient_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webchannel.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webview.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_webview_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xkbcommon_support_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../libQT/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../libQT/gcc_64/mkspecs/features/qt_functions.prf \
		../libQT/gcc_64/mkspecs/features/qt_config.prf \
		../libQT/gcc_64/mkspecs/linux-g++/qmake.conf \
		../libQT/gcc_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		../libQT/gcc_64/mkspecs/features/exclusive_builds.prf \
		../libQT/gcc_64/mkspecs/features/toolchain.prf \
		../libQT/gcc_64/mkspecs/features/default_pre.prf \
		../libQT/gcc_64/mkspecs/features/resolve_config.prf \
		../libQT/gcc_64/mkspecs/features/default_post.prf \
		../libQT/gcc_64/mkspecs/features/qml_debug.prf \
		../libQT/gcc_64/mkspecs/features/warn_on.prf \
		../libQT/gcc_64/mkspecs/features/qt.prf \
		../libQT/gcc_64/mkspecs/features/resources_functions.prf \
		../libQT/gcc_64/mkspecs/features/resources.prf \
		../libQT/gcc_64/mkspecs/features/moc.prf \
		../libQT/gcc_64/mkspecs/features/unix/opengl.prf \
		../libQT/gcc_64/mkspecs/features/uic.prf \
		../libQT/gcc_64/mkspecs/features/unix/thread.prf \
		../libQT/gcc_64/mkspecs/features/qmake_use.prf \
		../libQT/gcc_64/mkspecs/features/file_copies.prf \
		../libQT/gcc_64/mkspecs/features/testcase_targets.prf \
		../libQT/gcc_64/mkspecs/features/exceptions.prf \
		../libQT/gcc_64/mkspecs/features/yacc.prf \
		../libQT/gcc_64/mkspecs/features/lex.prf \
		../Graphique/Hazel.pro
	$(QMAKE) -o Makefile ../Graphique/Hazel.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
../libQT/gcc_64/mkspecs/features/spec_pre.prf:
../libQT/gcc_64/mkspecs/common/unix.conf:
../libQT/gcc_64/mkspecs/common/linux.conf:
../libQT/gcc_64/mkspecs/common/sanitize.conf:
../libQT/gcc_64/mkspecs/common/gcc-base.conf:
../libQT/gcc_64/mkspecs/common/gcc-base-unix.conf:
../libQT/gcc_64/mkspecs/common/g++-base.conf:
../libQT/gcc_64/mkspecs/common/g++-unix.conf:
../libQT/gcc_64/mkspecs/qconfig.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3danimation.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3danimation_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dcore.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dextras.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dextras_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dinput.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dlogic.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dlogic_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquick.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickanimation.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickextras.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickinput.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickrender.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3drender.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_3drender_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_concurrent.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_core.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_core_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_dbus.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_designer.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_designer_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_edid_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_egl_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_fb_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_gamepad.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_gamepad_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_glx_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_gui.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_gui_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_help.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_help_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_input_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_kms_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_location.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_location_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_multimedia.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_multimediagsttools_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_network.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_network_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_nfc.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_opengl.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_positioning.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_positioningquick.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_positioningquick_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_printsupport.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qml.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qml_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmlmodels.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmlmodels_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmltest.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmlworkerscript.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quick.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quick_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_remoteobjects.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_remoteobjects_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_repparser.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_repparser_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_scxml.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_scxml_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_sensors.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_serialbus.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_serialbus_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_serialport.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_service_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_sql.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_sql_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_svg.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_svg_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_testlib.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_texttospeech.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_texttospeech_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_theme_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_uitools.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_vulkan_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_waylandclient.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_waylandclient_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_webchannel.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_websockets.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_webview.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_webview_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_widgets.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_x11extras.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_xkbcommon_support_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_xml.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_xml_private.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
../libQT/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../libQT/gcc_64/mkspecs/features/qt_functions.prf:
../libQT/gcc_64/mkspecs/features/qt_config.prf:
../libQT/gcc_64/mkspecs/linux-g++/qmake.conf:
../libQT/gcc_64/mkspecs/features/spec_post.prf:
.qmake.stash:
../libQT/gcc_64/mkspecs/features/exclusive_builds.prf:
../libQT/gcc_64/mkspecs/features/toolchain.prf:
../libQT/gcc_64/mkspecs/features/default_pre.prf:
../libQT/gcc_64/mkspecs/features/resolve_config.prf:
../libQT/gcc_64/mkspecs/features/default_post.prf:
../libQT/gcc_64/mkspecs/features/qml_debug.prf:
../libQT/gcc_64/mkspecs/features/warn_on.prf:
../libQT/gcc_64/mkspecs/features/qt.prf:
../libQT/gcc_64/mkspecs/features/resources_functions.prf:
../libQT/gcc_64/mkspecs/features/resources.prf:
../libQT/gcc_64/mkspecs/features/moc.prf:
../libQT/gcc_64/mkspecs/features/unix/opengl.prf:
../libQT/gcc_64/mkspecs/features/uic.prf:
../libQT/gcc_64/mkspecs/features/unix/thread.prf:
../libQT/gcc_64/mkspecs/features/qmake_use.prf:
../libQT/gcc_64/mkspecs/features/file_copies.prf:
../libQT/gcc_64/mkspecs/features/testcase_targets.prf:
../libQT/gcc_64/mkspecs/features/exceptions.prf:
../libQT/gcc_64/mkspecs/features/yacc.prf:
../libQT/gcc_64/mkspecs/features/lex.prf:
../Graphique/Hazel.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile ../Graphique/Hazel.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug

qmake_all: FORCE


all: Makefile hazel

clean: compiler_clean
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core

####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_objc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_objc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: ../libQT/gcc_64/mkspecs/features/data/dummy.cpp
	g++ -pipe -g -std=gnu++11 -Wall -Wextra -dM -E -o moc_predefs.h ../libQT/gcc_64/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all: moc_HazelGame.cpp moc_SpriteMonstre.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_HazelGame.cpp moc_SpriteMonstre.cpp
moc_HazelGame.cpp: ../Graphique/HazelGame.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsView \
		../libQT/gcc_64/include/QtWidgets/qgraphicsview.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtGui/qpainter.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qtextoption.h \
		../libQT/gcc_64/include/QtGui/qpen.h \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../libQT/gcc_64/include/QtGui/qfontinfo.h \
		../libQT/gcc_64/include/QtGui/qfont.h \
		../libQT/gcc_64/include/QtGui/qfontmetrics.h \
		../libQT/gcc_64/include/QtWidgets/qscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qabstractscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qframe.h \
		../libQT/gcc_64/include/QtWidgets/qwidget.h \
		../libQT/gcc_64/include/QtGui/qpalette.h \
		../libQT/gcc_64/include/QtWidgets/qsizepolicy.h \
		../libQT/gcc_64/include/QtGui/qcursor.h \
		../libQT/gcc_64/include/QtGui/qkeysequence.h \
		../libQT/gcc_64/include/QtGui/qevent.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qurl.h \
		../libQT/gcc_64/include/QtCore/qurlquery.h \
		../libQT/gcc_64/include/QtCore/qfile.h \
		../libQT/gcc_64/include/QtCore/qfiledevice.h \
		../libQT/gcc_64/include/QtGui/qvector2d.h \
		../libQT/gcc_64/include/QtGui/qtouchdevice.h \
		../libQT/gcc_64/include/QtWidgets/qgraphicsscene.h \
		../libQT/gcc_64/include/QtWidgets/QGraphicsScene \
		../Graphique/SpriteJoueur.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtGui/QKeyEvent \
		../libQT/gcc_64/include/QtGui/QMouseEvent \
		../libQT/gcc_64/include/QtWidgets/QGraphicsSceneMouseEvent \
		../libQT/gcc_64/include/QtWidgets/qgraphicssceneevent.h \
		../Jeu/Joueur.hh \
		../Jeu/Personnage.hh \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtGui/QBrush \
		../Graphique/Pouvoir.hh \
		../Graphique/SpriteMonstre.hh \
		../Jeu/Monstre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../Graphique/Vie.hh \
		../Graphique/Objet.hh \
		../Graphique/Mana.hh \
		../Graphique/Menu.hh \
		../libQT/gcc_64/include/QtWidgets/QPushButton \
		../libQT/gcc_64/include/QtWidgets/qpushbutton.h \
		../libQT/gcc_64/include/QtWidgets/qabstractbutton.h \
		../libQT/gcc_64/include/QtGui/qicon.h \
		../libQT/gcc_64/include/QtCore/QPointF \
		../libQT/gcc_64/include/QtGui/QPixmap \
		../libQT/gcc_64/include/QtCore/QTimer \
		../libQT/gcc_64/include/QtCore/qtimer.h \
		../libQT/gcc_64/include/QtCore/qbasictimer.h \
		../libQT/gcc_64/include/QtWidgets/QLabel \
		../libQT/gcc_64/include/QtWidgets/qlabel.h \
		moc_predefs.h \
		../libQT/gcc_64/bin/moc
	../libQT/gcc_64/bin/moc $(DEFINES) --include ../Installation/moc_predefs.h -I../libQT/gcc_64/mkspecs/linux-g++ -I..Graphique -I../libQT/gcc_64/include -I../libQT/gcc_64/include/QtWidgets -I../libQT/gcc_64/include/QtGui -I../libQT/gcc_64/include/QtCore -I. -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ../Graphique/HazelGame.hh -o moc_HazelGame.cpp

moc_SpriteMonstre.cpp: ../Graphique/SpriteMonstre.hh \
		../Jeu/Monstre.hh \
		../Jeu/Personnage.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtGui/QBrush \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		moc_predefs.h \
		../libQT/gcc_64/bin/moc
	../libQT/gcc_64/bin/moc $(DEFINES) --include ..Installation/moc_predefs.h -I../libQT/gcc_64/mkspecs/linux-g++ -I..Graphique -I../libQT/gcc_64/include -I../libQT/gcc_64/include/QtWidgets -I../libQT/gcc_64/include/QtGui -I../libQT/gcc_64/include/QtCore -I. -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ../Graphique/SpriteMonstre.hh -o moc_SpriteMonstre.cpp

compiler_moc_objc_header_make_all:
compiler_moc_objc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_predefs_clean compiler_moc_header_clean

####### Compile

Feu.o: ../Jeu/Feu.cc ../Jeu/Feu.hh \
		../Jeu/Monstre.hh \
		../Jeu/Personnage.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Feu.o ../Jeu/Feu.cc

Glace.o: ../Jeu/Glace.cc ../Jeu/Glace.hh \
		../Jeu/Monstre.hh \
		../Jeu/Personnage.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Glace.o ../Jeu/Glace.cc

Joueur.o: ../Jeu/Joueur.cc ../Jeu/Joueur.hh \
		../Jeu/Personnage.hh \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/QBrush \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../Jeu/Monstre.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Joueur.o ../Jeu/Joueur.cc

Monstre.o: ../Jeu/Monstre.cc ../Jeu/Monstre.hh \
		../Jeu/Personnage.hh \
		../Jeu/Joueur.hh \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/QBrush \
		../libQT/gcc_64/include/QtGui/qbrush.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Monstre.o ../Jeu/Monstre.cc

Ombre.o: ../Jeu/Ombre.cc ../Jeu/Ombre.hh \
		../Jeu/Monstre.hh \
		../Jeu/Personnage.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Ombre.o ../Jeu/Ombre.cc

Barre.o: ../Graphique/Barre.cc ../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/QBrush \
		../libQT/gcc_64/include/QtGui/qbrush.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Barre.o ../Graphique/Barre.cc

HazelGame.o: ../Graphique/HazelGame.cc ../Graphique/HazelGame.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsView \
		../libQT/gcc_64/include/QtWidgets/qgraphicsview.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtGui/qpainter.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qtextoption.h \
		../libQT/gcc_64/include/QtGui/qpen.h \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../libQT/gcc_64/include/QtGui/qfontinfo.h \
		../libQT/gcc_64/include/QtGui/qfont.h \
		../libQT/gcc_64/include/QtGui/qfontmetrics.h \
		../libQT/gcc_64/include/QtWidgets/qscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qabstractscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qframe.h \
		../libQT/gcc_64/include/QtWidgets/qwidget.h \
		../libQT/gcc_64/include/QtGui/qpalette.h \
		../libQT/gcc_64/include/QtWidgets/qsizepolicy.h \
		../libQT/gcc_64/include/QtGui/qcursor.h \
		../libQT/gcc_64/include/QtGui/qkeysequence.h \
		../libQT/gcc_64/include/QtGui/qevent.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qurl.h \
		../libQT/gcc_64/include/QtCore/qurlquery.h \
		../libQT/gcc_64/include/QtCore/qfile.h \
		../libQT/gcc_64/include/QtCore/qfiledevice.h \
		../libQT/gcc_64/include/QtGui/qvector2d.h \
		../libQT/gcc_64/include/QtGui/qtouchdevice.h \
		../libQT/gcc_64/include/QtWidgets/qgraphicsscene.h \
		../libQT/gcc_64/include/QtWidgets/QGraphicsScene \
		../Graphique/SpriteJoueur.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtGui/QKeyEvent \
		../libQT/gcc_64/include/QtGui/QMouseEvent \
		../libQT/gcc_64/include/QtWidgets/QGraphicsSceneMouseEvent \
		../libQT/gcc_64/include/QtWidgets/qgraphicssceneevent.h \
		../Jeu/Joueur.hh \
		../Jeu/Personnage.hh \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtGui/QBrush \
		../Graphique/Pouvoir.hh \
		../Graphique/SpriteMonstre.hh \
		../Jeu/Monstre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../Graphique/Vie.hh \
		../Graphique/Objet.hh \
		../Graphique/Mana.hh \
		../Graphique/Menu.hh \
		../libQT/gcc_64/include/QtWidgets/QPushButton \
		../libQT/gcc_64/include/QtWidgets/qpushbutton.h \
		../libQT/gcc_64/include/QtWidgets/qabstractbutton.h \
		../libQT/gcc_64/include/QtGui/qicon.h \
		../libQT/gcc_64/include/QtCore/QPointF \
		../libQT/gcc_64/include/QtGui/QPixmap \
		../libQT/gcc_64/include/QtCore/QTimer \
		../libQT/gcc_64/include/QtCore/qtimer.h \
		../libQT/gcc_64/include/QtCore/qbasictimer.h \
		../libQT/gcc_64/include/QtWidgets/QLabel \
		../libQT/gcc_64/include/QtWidgets/qlabel.h \
		../Jeu/Feu.hh \
		../Jeu/Glace.hh \
		../Jeu/Ombre.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o HazelGame.o ../Graphique/HazelGame.cc

Main.o: ../Graphique/Main.cc ../libQT/gcc_64/include/QtWidgets/QApplication \
		../libQT/gcc_64/include/QtWidgets/qapplication.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qcoreapplication.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qeventloop.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtGui/qcursor.h \
		../libQT/gcc_64/include/QtWidgets/qdesktopwidget.h \
		../libQT/gcc_64/include/QtWidgets/qwidget.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtGui/qpalette.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtGui/qfont.h \
		../libQT/gcc_64/include/QtGui/qfontmetrics.h \
		../libQT/gcc_64/include/QtGui/qfontinfo.h \
		../libQT/gcc_64/include/QtWidgets/qsizepolicy.h \
		../libQT/gcc_64/include/QtGui/qkeysequence.h \
		../libQT/gcc_64/include/QtGui/qevent.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qurl.h \
		../libQT/gcc_64/include/QtCore/qurlquery.h \
		../libQT/gcc_64/include/QtCore/qfile.h \
		../libQT/gcc_64/include/QtCore/qfiledevice.h \
		../libQT/gcc_64/include/QtGui/qvector2d.h \
		../libQT/gcc_64/include/QtGui/qtouchdevice.h \
		../libQT/gcc_64/include/QtGui/qguiapplication.h \
		../libQT/gcc_64/include/QtGui/qinputmethod.h \
		../Graphique/HazelGame.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsView \
		../libQT/gcc_64/include/QtWidgets/qgraphicsview.h \
		../libQT/gcc_64/include/QtGui/qpainter.h \
		../libQT/gcc_64/include/QtGui/qtextoption.h \
		../libQT/gcc_64/include/QtGui/qpen.h \
		../libQT/gcc_64/include/QtWidgets/qscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qabstractscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qframe.h \
		../libQT/gcc_64/include/QtWidgets/qgraphicsscene.h \
		../libQT/gcc_64/include/QtWidgets/QGraphicsScene \
		../Graphique/SpriteJoueur.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtGui/QKeyEvent \
		../libQT/gcc_64/include/QtGui/QMouseEvent \
		../libQT/gcc_64/include/QtWidgets/QGraphicsSceneMouseEvent \
		../libQT/gcc_64/include/QtWidgets/qgraphicssceneevent.h \
		../Jeu/Joueur.hh \
		../Jeu/Personnage.hh \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtGui/QBrush \
		../Graphique/Pouvoir.hh \
		../Graphique/SpriteMonstre.hh \
		../Jeu/Monstre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../Graphique/Vie.hh \
		../Graphique/Objet.hh \
		../Graphique/Mana.hh \
		../Graphique/Menu.hh \
		../libQT/gcc_64/include/QtWidgets/QPushButton \
		../libQT/gcc_64/include/QtWidgets/qpushbutton.h \
		../libQT/gcc_64/include/QtWidgets/qabstractbutton.h \
		../libQT/gcc_64/include/QtGui/qicon.h \
		../libQT/gcc_64/include/QtCore/QPointF \
		../libQT/gcc_64/include/QtGui/QPixmap \
		../libQT/gcc_64/include/QtCore/QTimer \
		../libQT/gcc_64/include/QtCore/qtimer.h \
		../libQT/gcc_64/include/QtCore/qbasictimer.h \
		../libQT/gcc_64/include/QtWidgets/QLabel \
		../libQT/gcc_64/include/QtWidgets/qlabel.h \
		../libQT/gcc_64/include/QtCore/Qt
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Main.o ../Graphique/Main.cc

Mana.o: ../Graphique/Mana.cc ../Graphique/Mana.hh \
		../Graphique/Objet.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Mana.o ../Graphique/Mana.cc

Menu.o: ../Graphique/Menu.cc ../Graphique/Menu.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsView \
		../libQT/gcc_64/include/QtWidgets/qgraphicsview.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtGui/qpainter.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qtextoption.h \
		../libQT/gcc_64/include/QtGui/qpen.h \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../libQT/gcc_64/include/QtGui/qfontinfo.h \
		../libQT/gcc_64/include/QtGui/qfont.h \
		../libQT/gcc_64/include/QtGui/qfontmetrics.h \
		../libQT/gcc_64/include/QtWidgets/qscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qabstractscrollarea.h \
		../libQT/gcc_64/include/QtWidgets/qframe.h \
		../libQT/gcc_64/include/QtWidgets/qwidget.h \
		../libQT/gcc_64/include/QtGui/qpalette.h \
		../libQT/gcc_64/include/QtWidgets/qsizepolicy.h \
		../libQT/gcc_64/include/QtGui/qcursor.h \
		../libQT/gcc_64/include/QtGui/qkeysequence.h \
		../libQT/gcc_64/include/QtGui/qevent.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qurl.h \
		../libQT/gcc_64/include/QtCore/qurlquery.h \
		../libQT/gcc_64/include/QtCore/qfile.h \
		../libQT/gcc_64/include/QtCore/qfiledevice.h \
		../libQT/gcc_64/include/QtGui/qvector2d.h \
		../libQT/gcc_64/include/QtGui/qtouchdevice.h \
		../libQT/gcc_64/include/QtWidgets/qgraphicsscene.h \
		../libQT/gcc_64/include/QtWidgets/QGraphicsScene \
		../libQT/gcc_64/include/QtWidgets/QPushButton \
		../libQT/gcc_64/include/QtWidgets/qpushbutton.h \
		../libQT/gcc_64/include/QtWidgets/qabstractbutton.h \
		../libQT/gcc_64/include/QtGui/qicon.h \
		../libQT/gcc_64/include/QtWidgets/QGraphicsSceneMouseEvent \
		../libQT/gcc_64/include/QtWidgets/qgraphicssceneevent.h \
		../libQT/gcc_64/include/QtCore/QPointF \
		../libQT/gcc_64/include/QtGui/QPixmap
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Menu.o ../Graphique/Menu.cc

Pouvoir.o: ../Graphique/Pouvoir.cc ../Graphique/Pouvoir.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsScene \
		../libQT/gcc_64/include/QtWidgets/qgraphicsscene.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtGui/qfont.h \
		../libQT/gcc_64/include/QtGui/qpen.h \
		../libQT/gcc_64/include/QtWidgets/QGraphicsItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Pouvoir.o ../Graphique/Pouvoir.cc

SpriteJoueur.o: ../Graphique/SpriteJoueur.cc ../Graphique/SpriteJoueur.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../libQT/gcc_64/include/QtGui/QKeyEvent \
		../libQT/gcc_64/include/QtGui/qevent.h \
		../libQT/gcc_64/include/QtGui/qkeysequence.h \
		../libQT/gcc_64/include/QtCore/qurl.h \
		../libQT/gcc_64/include/QtCore/qurlquery.h \
		../libQT/gcc_64/include/QtCore/qfile.h \
		../libQT/gcc_64/include/QtCore/qfiledevice.h \
		../libQT/gcc_64/include/QtGui/qvector2d.h \
		../libQT/gcc_64/include/QtGui/qtouchdevice.h \
		../libQT/gcc_64/include/QtGui/QMouseEvent \
		../libQT/gcc_64/include/QtWidgets/QGraphicsSceneMouseEvent \
		../libQT/gcc_64/include/QtWidgets/qgraphicssceneevent.h \
		../Jeu/Joueur.hh \
		../Jeu/Personnage.hh \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtGui/QBrush \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../Graphique/Pouvoir.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsScene \
		../libQT/gcc_64/include/QtWidgets/qgraphicsscene.h \
		../libQT/gcc_64/include/QtGui/qfont.h \
		../libQT/gcc_64/include/QtGui/qpen.h \
		../Graphique/Vie.hh \
		../Graphique/Objet.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../Graphique/Mana.hh \
		../libQT/gcc_64/include/QtCore/QList
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SpriteJoueur.o ../Graphique/SpriteJoueur.cc

SpriteMonstre.o: ../Graphique/SpriteMonstre.cc ../Graphique/SpriteMonstre.hh \
		../Jeu/Monstre.hh \
		../Jeu/Personnage.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h \
		../Graphique/Barre.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsRectItem \
		../libQT/gcc_64/include/QtGui/QBrush \
		../libQT/gcc_64/include/QtGui/qbrush.h \
		../libQT/gcc_64/include/QtCore/QTimer \
		../libQT/gcc_64/include/QtCore/qtimer.h \
		../libQT/gcc_64/include/QtCore/qbasictimer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SpriteMonstre.o ../Graphique/SpriteMonstre.cc

Vie.o: ../Graphique/Vie.cc ../Graphique/Vie.hh \
		../Graphique/Objet.hh \
		../libQT/gcc_64/include/QtWidgets/QGraphicsPixmapItem \
		../libQT/gcc_64/include/QtWidgets/qgraphicsitem.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgetsglobal.h \
		../libQT/gcc_64/include/QtGui/qtguiglobal.h \
		../libQT/gcc_64/include/QtCore/qglobal.h \
		../libQT/gcc_64/include/QtCore/qconfig-bootstrapped.h \
		../libQT/gcc_64/include/QtCore/qconfig.h \
		../libQT/gcc_64/include/QtCore/qtcore-config.h \
		../libQT/gcc_64/include/QtCore/qsystemdetection.h \
		../libQT/gcc_64/include/QtCore/qprocessordetection.h \
		../libQT/gcc_64/include/QtCore/qcompilerdetection.h \
		../libQT/gcc_64/include/QtCore/qtypeinfo.h \
		../libQT/gcc_64/include/QtCore/qsysinfo.h \
		../libQT/gcc_64/include/QtCore/qlogging.h \
		../libQT/gcc_64/include/QtCore/qflags.h \
		../libQT/gcc_64/include/QtCore/qatomic.h \
		../libQT/gcc_64/include/QtCore/qbasicatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_bootstrap.h \
		../libQT/gcc_64/include/QtCore/qgenericatomic.h \
		../libQT/gcc_64/include/QtCore/qatomic_cxx11.h \
		../libQT/gcc_64/include/QtCore/qatomic_msvc.h \
		../libQT/gcc_64/include/QtCore/qglobalstatic.h \
		../libQT/gcc_64/include/QtCore/qmutex.h \
		../libQT/gcc_64/include/QtCore/qnumeric.h \
		../libQT/gcc_64/include/QtCore/qversiontagging.h \
		../libQT/gcc_64/include/QtGui/qtgui-config.h \
		../libQT/gcc_64/include/QtWidgets/qtwidgets-config.h \
		../libQT/gcc_64/include/QtCore/qobject.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs.h \
		../libQT/gcc_64/include/QtCore/qnamespace.h \
		../libQT/gcc_64/include/QtCore/qobjectdefs_impl.h \
		../libQT/gcc_64/include/QtCore/qstring.h \
		../libQT/gcc_64/include/QtCore/qchar.h \
		../libQT/gcc_64/include/QtCore/qbytearray.h \
		../libQT/gcc_64/include/QtCore/qrefcount.h \
		../libQT/gcc_64/include/QtCore/qarraydata.h \
		../libQT/gcc_64/include/QtCore/qstringliteral.h \
		../libQT/gcc_64/include/QtCore/qstringalgorithms.h \
		../libQT/gcc_64/include/QtCore/qstringview.h \
		../libQT/gcc_64/include/QtCore/qstringbuilder.h \
		../libQT/gcc_64/include/QtCore/qlist.h \
		../libQT/gcc_64/include/QtCore/qalgorithms.h \
		../libQT/gcc_64/include/QtCore/qiterator.h \
		../libQT/gcc_64/include/QtCore/qhashfunctions.h \
		../libQT/gcc_64/include/QtCore/qpair.h \
		../libQT/gcc_64/include/QtCore/qvector.h \
		../libQT/gcc_64/include/QtCore/qcontainertools_impl.h \
		../libQT/gcc_64/include/QtCore/qpoint.h \
		../libQT/gcc_64/include/QtCore/qbytearraylist.h \
		../libQT/gcc_64/include/QtCore/qstringlist.h \
		../libQT/gcc_64/include/QtCore/qregexp.h \
		../libQT/gcc_64/include/QtCore/qstringmatcher.h \
		../libQT/gcc_64/include/QtCore/qcoreevent.h \
		../libQT/gcc_64/include/QtCore/qscopedpointer.h \
		../libQT/gcc_64/include/QtCore/qmetatype.h \
		../libQT/gcc_64/include/QtCore/qvarlengtharray.h \
		../libQT/gcc_64/include/QtCore/qcontainerfwd.h \
		../libQT/gcc_64/include/QtCore/qobject_impl.h \
		../libQT/gcc_64/include/QtCore/qvariant.h \
		../libQT/gcc_64/include/QtCore/qmap.h \
		../libQT/gcc_64/include/QtCore/qdebug.h \
		../libQT/gcc_64/include/QtCore/qhash.h \
		../libQT/gcc_64/include/QtCore/qtextstream.h \
		../libQT/gcc_64/include/QtCore/qiodevice.h \
		../libQT/gcc_64/include/QtCore/qlocale.h \
		../libQT/gcc_64/include/QtCore/qshareddata.h \
		../libQT/gcc_64/include/QtCore/qset.h \
		../libQT/gcc_64/include/QtCore/qcontiguouscache.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer.h \
		../libQT/gcc_64/include/QtCore/qsharedpointer_impl.h \
		../libQT/gcc_64/include/QtCore/qrect.h \
		../libQT/gcc_64/include/QtCore/qmargins.h \
		../libQT/gcc_64/include/QtCore/qsize.h \
		../libQT/gcc_64/include/QtGui/qpainterpath.h \
		../libQT/gcc_64/include/QtGui/qmatrix.h \
		../libQT/gcc_64/include/QtGui/qpolygon.h \
		../libQT/gcc_64/include/QtGui/qregion.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs.h \
		../libQT/gcc_64/include/QtGui/qwindowdefs_win.h \
		../libQT/gcc_64/include/QtCore/qdatastream.h \
		../libQT/gcc_64/include/QtCore/qline.h \
		../libQT/gcc_64/include/QtGui/qpixmap.h \
		../libQT/gcc_64/include/QtGui/qpaintdevice.h \
		../libQT/gcc_64/include/QtGui/qcolor.h \
		../libQT/gcc_64/include/QtGui/qrgb.h \
		../libQT/gcc_64/include/QtGui/qrgba64.h \
		../libQT/gcc_64/include/QtGui/qimage.h \
		../libQT/gcc_64/include/QtGui/qpixelformat.h \
		../libQT/gcc_64/include/QtGui/qtransform.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Vie.o ../Graphique/Vie.cc

moc_HazelGame.o: moc_HazelGame.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_HazelGame.o moc_HazelGame.cpp

moc_SpriteMonstre.o: moc_SpriteMonstre.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_SpriteMonstre.o moc_SpriteMonstre.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:
