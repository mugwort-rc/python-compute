// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/command_queue.hpp

#include <boost/compute/command_queue.hpp>

#include <boost/python.hpp>

/*
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_read_bufferOverloads0, boost::compute::command_queue::enqueue_read_buffer, 4, 5)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_read_buffer_asyncOverloads0, boost::compute::command_queue::enqueue_read_buffer_async, 4, 5)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_read_buffer_rectOverloads0, boost::compute::command_queue::enqueue_read_buffer_rect, 9, 10)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_read_buffer_rect_asyncOverloads0, boost::compute::command_queue::enqueue_read_buffer_rect_async, 9, 10)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_write_bufferOverloads0, boost::compute::command_queue::enqueue_write_buffer, 4, 5)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_write_buffer_asyncOverloads0, boost::compute::command_queue::enqueue_write_buffer_async, 4, 5)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_write_buffer_rectOverloads0, boost::compute::command_queue::enqueue_write_buffer_rect, 9, 10)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_write_buffer_rect_asyncOverloads0, boost::compute::command_queue::enqueue_write_buffer_rect_async, 9, 10)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_copy_bufferOverloads0, boost::compute::command_queue::enqueue_copy_buffer, 5, 6)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_copy_buffer_rectOverloads0, boost::compute::command_queue::enqueue_copy_buffer_rect, 9, 10)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_fill_bufferOverloads0, boost::compute::command_queue::enqueue_fill_buffer, 5, 6)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_map_bufferOverloads0, boost::compute::command_queue::enqueue_map_buffer, 5, 6)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_map_bufferOverloads1, boost::compute::command_queue::enqueue_map_buffer, 4, 5)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_map_buffer_asyncOverloads0, boost::compute::command_queue::enqueue_map_buffer_async, 5, 6)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_unmap_bufferOverloads0, boost::compute::command_queue::enqueue_unmap_buffer, 2, 3)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_unmap_mem_objectOverloads0, boost::compute::command_queue::enqueue_unmap_mem_object, 2, 3)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_read_imageOverloads0, boost::compute::command_queue::enqueue_read_image, 6, 7)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_write_imageOverloads0, boost::compute::command_queue::enqueue_write_image, 4, 7)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_map_imageOverloads0, boost::compute::command_queue::enqueue_map_image, 7, 8)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_map_imageOverloads1, boost::compute::command_queue::enqueue_map_image, 6, 7)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_map_image_asyncOverloads0, boost::compute::command_queue::enqueue_map_image_async, 7, 8)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_unmap_imageOverloads0, boost::compute::command_queue::enqueue_unmap_image, 2, 3)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_copy_imageOverloads0, boost::compute::command_queue::enqueue_copy_image, 5, 6)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_copy_image_to_bufferOverloads0, boost::compute::command_queue::enqueue_copy_image_to_buffer, 5, 6)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_copy_buffer_to_imageOverloads0, boost::compute::command_queue::enqueue_copy_buffer_to_image, 5, 6)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_fill_imageOverloads0, boost::compute::command_queue::enqueue_fill_image, 4, 5)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_migrate_memory_objectsOverloads0, boost::compute::command_queue::enqueue_migrate_memory_objects, 3, 4)
//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_nd_range_kernelOverloads0, boost::compute::command_queue::enqueue_nd_range_kernel, 5, 6)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_1d_range_kernelOverloads0, boost::compute::command_queue::enqueue_1d_range_kernel, 4, 5)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_taskOverloads0, boost::compute::command_queue::enqueue_task, 1, 2)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(command_queueenqueue_native_kernelOverloads1, boost::compute::command_queue::enqueue_native_kernel, 1, 2)
*/

void init_boost_compute_command_queue_hpp() {
    auto boost_python_boost_compute_command_queue = boost::python::class_<boost::compute::command_queue, std::shared_ptr<boost::compute::command_queue>>("command_queue")
        //.def(boost::python::init<cl_command_queue, boost::python::optional<bool>>())
        .def(boost::python::init<const boost::compute::context &, const boost::compute::device &, boost::python::optional<cl_command_queue_properties>>())
        //.def("operator=", static_cast<boost::compute::command_queue &(boost::compute::command_queue::*)(const boost::compute::command_queue &)>(&boost::compute::command_queue::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("operator=", static_cast<boost::compute::command_queue &(boost::compute::command_queue::*)(boost::compute::command_queue &&)>(&boost::compute::command_queue::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("get", &boost::compute::command_queue::get, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("get_device", &boost::compute::command_queue::get_device)
        .def("get_context", &boost::compute::command_queue::get_context)
        .def("get_properties", &boost::compute::command_queue::get_properties)
/*
        .def("enqueue_read_buffer", &boost::compute::command_queue::enqueue_read_buffer, command_queueenqueue_read_bufferOverloads0())
        .def("enqueue_read_buffer_async", &boost::compute::command_queue::enqueue_read_buffer_async, command_queueenqueue_read_buffer_asyncOverloads0())
        .def("enqueue_read_buffer_rect", &boost::compute::command_queue::enqueue_read_buffer_rect, command_queueenqueue_read_buffer_rectOverloads0())
        .def("enqueue_read_buffer_rect_async", &boost::compute::command_queue::enqueue_read_buffer_rect_async, command_queueenqueue_read_buffer_rect_asyncOverloads0())
        .def("enqueue_write_buffer", &boost::compute::command_queue::enqueue_write_buffer, command_queueenqueue_write_bufferOverloads0())
        .def("enqueue_write_buffer_async", &boost::compute::command_queue::enqueue_write_buffer_async, command_queueenqueue_write_buffer_asyncOverloads0())
        .def("enqueue_write_buffer_rect", &boost::compute::command_queue::enqueue_write_buffer_rect, command_queueenqueue_write_buffer_rectOverloads0())
        .def("enqueue_write_buffer_rect_async", &boost::compute::command_queue::enqueue_write_buffer_rect_async, command_queueenqueue_write_buffer_rect_asyncOverloads0())
        .def("enqueue_copy_buffer", &boost::compute::command_queue::enqueue_copy_buffer, command_queueenqueue_copy_bufferOverloads0())
        .def("enqueue_copy_buffer_rect", &boost::compute::command_queue::enqueue_copy_buffer_rect, command_queueenqueue_copy_buffer_rectOverloads0())
        .def("enqueue_fill_buffer", &boost::compute::command_queue::enqueue_fill_buffer, command_queueenqueue_fill_bufferOverloads0())
        //.def("enqueue_map_buffer", static_cast<void *(boost::compute::command_queue::*)(const boost::compute::buffer &, unsigned long, int, int, boost::compute::event &, const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_map_buffer), command_queueenqueue_map_bufferOverloads0()[boost::python::return_value_policy<boost::python::return_opaque_pointer>()])
        //.def("enqueue_map_buffer", static_cast<void *(boost::compute::command_queue::*)(const boost::compute::buffer &, unsigned long, int, int, const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_map_buffer), command_queueenqueue_map_bufferOverloads1()[boost::python::return_value_policy<boost::python::return_opaque_pointer>()])
        .def("enqueue_map_buffer_async", &boost::compute::command_queue::enqueue_map_buffer_async, command_queueenqueue_map_buffer_asyncOverloads0()[boost::python::return_value_policy<boost::python::return_opaque_pointer>()])
        .def("enqueue_unmap_buffer", &boost::compute::command_queue::enqueue_unmap_buffer, command_queueenqueue_unmap_bufferOverloads0())
        .def("enqueue_unmap_mem_object", &boost::compute::command_queue::enqueue_unmap_mem_object, command_queueenqueue_unmap_mem_objectOverloads0())
        //.def("enqueue_read_image", &boost::compute::command_queue::enqueue_read_image, command_queueenqueue_read_imageOverloads0())
        //.def("enqueue_write_image", &boost::compute::command_queue::enqueue_write_image, command_queueenqueue_write_imageOverloads0())
        //.def("enqueue_map_image", static_cast<void *(boost::compute::command_queue::*)(const boost::compute::image_object &, unsigned long, const int *, const int *, int &, int &, boost::compute::event &, const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_map_image), command_queueenqueue_map_imageOverloads0()[boost::python::return_value_policy<boost::python::return_opaque_pointer>()])
        //.def("enqueue_map_image", static_cast<void *(boost::compute::command_queue::*)(const boost::compute::image_object &, unsigned long, const int *, const int *, int &, int &, const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_map_image), command_queueenqueue_map_imageOverloads1()[boost::python::return_value_policy<boost::python::return_opaque_pointer>()])
        //.def("enqueue_map_image_async", &boost::compute::command_queue::enqueue_map_image_async, command_queueenqueue_map_image_asyncOverloads0()[boost::python::return_value_policy<boost::python::return_opaque_pointer>()])
        .def("enqueue_unmap_image", &boost::compute::command_queue::enqueue_unmap_image, command_queueenqueue_unmap_imageOverloads0())
        //.def("enqueue_copy_image", &boost::compute::command_queue::enqueue_copy_image, command_queueenqueue_copy_imageOverloads0())
        //.def("enqueue_copy_image_to_buffer", &boost::compute::command_queue::enqueue_copy_image_to_buffer, command_queueenqueue_copy_image_to_bufferOverloads0())
        .def("enqueue_copy_buffer_to_image", &boost::compute::command_queue::enqueue_copy_buffer_to_image, command_queueenqueue_copy_buffer_to_imageOverloads0())
        //.def("enqueue_fill_image", &boost::compute::command_queue::enqueue_fill_image, command_queueenqueue_fill_imageOverloads0())
        .def("enqueue_migrate_memory_objects", &boost::compute::command_queue::enqueue_migrate_memory_objects, command_queueenqueue_migrate_memory_objectsOverloads0())
        //.def("enqueue_nd_range_kernel", &boost::compute::command_queue::enqueue_nd_range_kernel, command_queueenqueue_nd_range_kernelOverloads0())
        .def("enqueue_1d_range_kernel", &boost::compute::command_queue::enqueue_1d_range_kernel, command_queueenqueue_1d_range_kernelOverloads0())
        .def("enqueue_task", &boost::compute::command_queue::enqueue_task, command_queueenqueue_taskOverloads0())
        //.def("enqueue_native_kernel", static_cast<boost::compute::event(boost::compute::command_queue::*)(void (*)(void *), void *, int, unsigned int, _cl_mem *const *, const void **, const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_native_kernel))
        //.def("enqueue_native_kernel", static_cast<boost::compute::event(boost::compute::command_queue::*)(void (*)(), const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_native_kernel), command_queueenqueue_native_kernelOverloads1())
*/
        .def("flush", &boost::compute::command_queue::flush)
        .def("finish", &boost::compute::command_queue::finish)
/*
        .def("enqueue_barrier", static_cast<void(boost::compute::command_queue::*)()>(&boost::compute::command_queue::enqueue_barrier))
        .def("enqueue_barrier", static_cast<boost::compute::event(boost::compute::command_queue::*)(const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_barrier))
        .def("enqueue_marker", static_cast<boost::compute::event(boost::compute::command_queue::*)()>(&boost::compute::command_queue::enqueue_marker))
        .def("enqueue_marker", static_cast<boost::compute::event(boost::compute::command_queue::*)(const boost::compute::wait_list &)>(&boost::compute::command_queue::enqueue_marker))
        //.def("operator==", &boost::compute::command_queue::operator==)
        //.def("operator!=", &boost::compute::command_queue::operator!=)
*/
        .def("check_device_version", &boost::compute::command_queue::check_device_version)
        ;
    boost::python::def("nullary_native_kernel_trampoline", &boost::compute::detail::nullary_native_kernel_trampoline);
    {
        boost::python::scope scope = boost_python_boost_compute_command_queue;
        boost::python::enum_<boost::compute::command_queue::properties>("properties")
            .value("enable_profiling", boost::compute::command_queue::enable_profiling)
            .value("enable_out_of_order_execution", boost::compute::command_queue::enable_out_of_order_execution)
            .export_values()
            ;
    }
    {
        boost::python::scope scope = boost_python_boost_compute_command_queue;
        boost::python::enum_<boost::compute::command_queue::map_flags>("map_flags")
            .value("map_read", boost::compute::command_queue::map_read)
            .value("map_write", boost::compute::command_queue::map_write)
            .value("map_write_invalidate_region", boost::compute::command_queue::map_write_invalidate_region)
            .export_values()
            ;
    }
}
