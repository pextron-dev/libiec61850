include_directories(
   .
)

set(PEX_IED550_client_SRCS
   IED550client.c
)

IF(MSVC)
set_source_files_properties(${PEX_IED550_client_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(PEX_IED550_client
  ${PEX_IED550_client_SRCS}
)

target_link_libraries(PEX_IED550_client
    iec61850
)
