#define BOOST_PYTHON_STATIC_LIB
#include <boost/python.hpp>

extern void init_boost_compute_buffer_hpp();
extern void init_boost_compute_command_queue_hpp();
extern void init_boost_compute_context_hpp();
extern void init_boost_compute_device_hpp();
extern void init_boost_compute_event_hpp();
extern void init_boost_compute_function_hpp();
extern void init_boost_compute_kernel_hpp();
extern void init_boost_compute_memory_object_hpp();
extern void init_boost_compute_platform_hpp();
extern void init_boost_compute_program_hpp();
extern void init_boost_compute_system_hpp();


BOOST_PYTHON_MODULE(__compute) {
    init_boost_compute_memory_object_hpp();

    init_boost_compute_buffer_hpp();
    init_boost_compute_command_queue_hpp();
    init_boost_compute_context_hpp();
    init_boost_compute_device_hpp();
    init_boost_compute_event_hpp();
    init_boost_compute_function_hpp();
    init_boost_compute_kernel_hpp();
    init_boost_compute_platform_hpp();
    init_boost_compute_program_hpp();
    init_boost_compute_system_hpp();
}

