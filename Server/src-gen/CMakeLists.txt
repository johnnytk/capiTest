include_directories(v1/org/test/)

set(SRC_GEN_OUTPUT_DIR ${SRC_GEN_DIR}/v1/org/test/)
set(FIDL_SUFFIX "capiTest")

set(COMMON_API_STUB ${SRC_GEN_OUTPUT_DIR}${FIDL_SUFFIX}Stub.hpp)
set(COMMON_API_DBUS_ADAPTER_CPP ${SRC_GEN_OUTPUT_DIR}${FIDL_SUFFIX}DBusStubAdapter.cpp)
set(COMMON_API_DBUS_DEPLOYMENT_CPP ${SRC_GEN_OUTPUT_DIR}${FIDL_SUFFIX}DBusDeployment.cpp)
set(COMMON_API_STUB_DEFAULT_CPP ${SRC_GEN_OUTPUT_DIR}${FIDL_SUFFIX}StubDefault.cpp)

set(SRC_GEN_FILES
    ${COMMON_API_STUB}
    ${COMMON_API_DBUS_ADAPTER_CPP}
    ${COMMON_API_STUB_DEFAULT_CPP}
    ${COMMON_API_DBUS_DEPLOYMENT_CPP})

set(SRC_GEN_FILES ${SRC_GEN_FILES} PARENT_SCOPE)

