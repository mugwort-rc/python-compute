// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/event.hpp

#include <boost/compute/event.hpp>

#include <boost/python.hpp>


void init_boost_compute_event_hpp() {
    auto boost_python_boost_compute_event = boost::python::class_<boost::compute::event, std::shared_ptr<boost::compute::event>>("event")
        //.def(boost::python::init<cl_event, boost::python::optional<bool>>())
        //.def("operator=", static_cast<boost::compute::event &(boost::compute::event::*)(const boost::compute::event &)>(&boost::compute::event::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("operator=", static_cast<boost::compute::event &(boost::compute::event::*)(boost::compute::event &&)>(&boost::compute::event::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("get", &boost::compute::event::get, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("status", &boost::compute::event::status)
        .def("get_command_type", &boost::compute::event::get_command_type)
        .def("wait", &boost::compute::event::wait)
        //.def("set_callback", &boost::compute::event::set_callback)
        //.def("operator==", &boost::compute::event::operator==)
        //.def("operator!=", &boost::compute::event::operator!=)
        .def("get_status", &boost::compute::event::get_status)
        ;
    {
        boost::python::scope scope = boost_python_boost_compute_event;
        boost::python::enum_<boost::compute::event::execution_status>("execution_status")
            .value("complete", boost::compute::event::complete)
            .value("running", boost::compute::event::running)
            .value("submitted", boost::compute::event::submitted)
            .value("queued", boost::compute::event::queued)
            .export_values()
            ;
    }
    {
        boost::python::scope scope = boost_python_boost_compute_event;
        boost::python::enum_<boost::compute::event::command_type>("command_type")
            .value("ndrange_kernel", boost::compute::event::ndrange_kernel)
            .value("task", boost::compute::event::task)
            .value("native_kernel", boost::compute::event::native_kernel)
            .value("read_buffer", boost::compute::event::read_buffer)
            .value("write_buffer", boost::compute::event::write_buffer)
            .value("copy_buffer", boost::compute::event::copy_buffer)
            .value("read_image", boost::compute::event::read_image)
            .value("write_image", boost::compute::event::write_image)
            .value("copy_image", boost::compute::event::copy_image)
            .value("copy_image_to_buffer", boost::compute::event::copy_image_to_buffer)
            .value("copy_buffer_to_image", boost::compute::event::copy_buffer_to_image)
            .value("map_buffer", boost::compute::event::map_buffer)
            .value("map_image", boost::compute::event::map_image)
            .value("unmap_mem_object", boost::compute::event::unmap_mem_object)
            .value("marker", boost::compute::event::marker)
            .value("aquire_gl_objects", boost::compute::event::aquire_gl_objects)
            .value("release_gl_object", boost::compute::event::release_gl_object)
            .value("read_buffer_rect", boost::compute::event::read_buffer_rect)
            .value("write_buffer_rect", boost::compute::event::write_buffer_rect)
            .value("copy_buffer_rect", boost::compute::event::copy_buffer_rect)
            .export_values()
            ;
    }
    {
        boost::python::scope scope = boost_python_boost_compute_event;
        boost::python::enum_<boost::compute::event::profiling_info>("profiling_info")
            .value("profiling_command_queued", boost::compute::event::profiling_command_queued)
            .value("profiling_command_submit", boost::compute::event::profiling_command_submit)
            .value("profiling_command_start", boost::compute::event::profiling_command_start)
            .value("profiling_command_end", boost::compute::event::profiling_command_end)
            .export_values()
            ;
    }
}
