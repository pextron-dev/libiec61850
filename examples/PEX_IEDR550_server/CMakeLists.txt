include_directories(
   .
)

set(PEX_IEDR550_server_SRCS
   iedR550Server.c
   static_model.c
)

IF(MSVC)
set_source_files_properties(${PEX_IEDR550_server_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(PEX_IED550_server
  ${PEX_IEDR550_server_SRCS}
)

target_link_libraries(PEX_IED550_server
    iec61850
)
