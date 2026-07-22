include_directories(
   .
)

set(PEX_IED550_client_example_3_SRCS
   client_example.c
)

IF(MSVC)
set_source_files_properties(${PEX_IED550_client_example_3_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(PEX_IED550_client_example_3
  ${PEX_IED550_client_example_3_SRCS}
)

target_link_libraries(PEX_IED550_client_example_3
    iec61850
)
