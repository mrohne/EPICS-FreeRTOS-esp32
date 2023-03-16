idf_component_register(
        SRCS main.cpp ioc_registerRecordDeviceDriver.cpp
        INCLUDE_DIRS /opt/EPICS/base/include /opt/EPICS/base/include/compiler/gcc /opt/EPICS/base/include/os/FreeRTOS
        )

add_prebuilt_library(
        libCom /opt/EPICS/base/lib/FreeRTOS-esp32/libCom.a
        REQUIRES tcp_transport
        )
        
target_link_libraries(${COMPONENT_LIB} PUBLIC libCom)
