PROJECT(PROC_GEN)


INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR} ${PROC_GEN_SOURCE_DIR} ${PROC_GEN_BINARY_DIR} )


#INCLUDE(${PROC_GEN_SOURCE_DIR}/pal/pal/Config.h)

# add Qt modules here, the include will setup QT_LIBRARIES
#SET(QT_USE_QTNETWORK TRUE)
#SET(QT_USE_QTWEBKIT TRUE)
SET(QT_USE_QTOPENGL TRUE)

INCLUDE(${QT_USE_FILE})

# .cxx sources
SET(PROC_GEN_SRCS_CXX

  gui/proc_gen_test_bed.cpp
  
  game_components/test_game.cpp
  game_components/gl_display.cpp
  game_components/gl_display_widget.cpp
  
  abstract_game_components/display.cpp
  abstract_game_components/game.cpp
  abstract_game_components/game_interface.cpp
  abstract_game_components/runner.cpp
  abstract_game_components/control_interface.cpp
  

  main.cpp
)

# files which need to be moc'd by Qt
SET(PROC_GEN_MOC_SRCS

  gui/proc_gen_test_bed.h
  
  game_components/gl_display_widget.h
  
  abstract_game_components/runner.h
)

SET(PROC_GEN_UI

  gui/proc_gen_test_bed.ui

)

# build ui_XXX files from the XML-style .ui files
QT4_WRAP_UI(PROC_GEN_SRCS_CXX ${PROC_GEN_UI})
# this moc's the above variable and appends to the cxx sources
QT4_WRAP_CPP(PROC_GEN_SRCS_CXX ${PROC_GEN_MOC_SRCS})

#IF(UNIX)
  ADD_EXECUTABLE(procgen ${PROC_GEN_SRCS_CXX})
#ELSEIF(APPLE)
#  ADD_EXECUTABLE(mxitc MACOSX_BUNDLE ${PROC_GEN_SRCS_CXX})
#ELSEIF(WIN32)
#  ADD_EXECUTABLE(mxitc WIN32 ${PROC_GEN_SRCS_CXX})
#ENDIF()

#IF(WIN32)
#  TARGET_LINK_LIBRARIES(mxitc ${QT_LIBRARIES} ${QT_GIF_PLUGIN} ${QT_JPEG_PLUGIN})
#ELSE()
  #TARGET_LINK_LIBRARIES(procgen ${QT_LIBRARIES} ${CMAKE_SOURCE_DIR}/external/Box2D/Library/libBox2D.a)
  
  #TARGET_LINK_LIBRARIES(procgen ${QT_LIBRARIES} ${CMAKE_SOURCE_DIR}/PhysX/libPhysXCore.so.1)
  #TARGET_LINK_LIBRARIES(procgen ${QT_LIBRARIES} ${CMAKE_SOURCE_DIR}/PhysX/libNxCooking.so.1)
  #TARGET_LINK_LIBRARIES(procgen ${QT_LIBRARIES} ${CMAKE_SOURCE_DIR}/PhysX/libNxCharacter.so.1)
  
  TARGET_LINK_LIBRARIES(procgen ${QT_LIBRARIES} /usr/lib/PhysX/v2.8.1/libPhysXCore.so)
  TARGET_LINK_LIBRARIES(procgen ${QT_LIBRARIES} /usr/lib/PhysX/v2.8.1/libNxCooking.so)
  TARGET_LINK_LIBRARIES(procgen ${QT_LIBRARIES} /usr/lib/PhysX/v2.8.1/libNxCharacter.so)
  
#ENDIF()

