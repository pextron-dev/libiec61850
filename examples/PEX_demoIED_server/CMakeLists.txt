include_directories(
   .
)

set(PEX_demoIED_server_SRCS
   demoIEDServer.c
   static_model.c
)

IF(MSVC)
set_source_files_properties(${PEX_demoIED_server_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(PEX_demoIED_server
  ${PEX_demoIED_server_SRCS}
)

target_link_libraries(PEX_demoIED_server
    iec61850
)
