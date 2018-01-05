// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/memory_object.hpp

#include <boost/compute/memory_object.hpp>

#include <boost/python.hpp>


void init_boost_compute_memory_object_hpp() {
    auto boost_python_boost_compute_memory_object = boost::python::class_<boost::compute::memory_object, boost::noncopyable, std::shared_ptr<boost::compute::memory_object>>("memory_object", boost::python::no_init)
        //.def("get", &boost::compute::memory_object::get, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("get_memory_size", &boost::compute::memory_object::get_memory_size)
        .def("get_memory_type", &boost::compute::memory_object::get_memory_type)
        .def("get_memory_flags", &boost::compute::memory_object::get_memory_flags)
        .def("get_context", &boost::compute::memory_object::get_context)
        .def("get_host_ptr", &boost::compute::memory_object::get_host_ptr, boost::python::return_value_policy<boost::python::return_opaque_pointer>())
        .def("reference_count", &boost::compute::memory_object::reference_count)
        //.def("set_destructor_callback", &boost::compute::memory_object::set_destructor_callback)
        //.def("operator==", &boost::compute::memory_object::operator==)
        //.def("operator!=", &boost::compute::memory_object::operator!=)
        ;
    {
        boost::python::scope scope = boost_python_boost_compute_memory_object;
        boost::python::enum_<boost::compute::memory_object::mem_flags>("mem_flags")
            .value("read_write", boost::compute::memory_object::read_write)
            .value("read_only", boost::compute::memory_object::read_only)
            .value("write_only", boost::compute::memory_object::write_only)
            .value("use_host_ptr", boost::compute::memory_object::use_host_ptr)
            .value("alloc_host_ptr", boost::compute::memory_object::alloc_host_ptr)
            .value("copy_host_ptr", boost::compute::memory_object::copy_host_ptr)
            .value("host_write_only", boost::compute::memory_object::host_write_only)
            .value("host_read_only", boost::compute::memory_object::host_read_only)
            .value("host_no_access", boost::compute::memory_object::host_no_access)
            .export_values()
            ;
    }
    {
        boost::python::scope scope = boost_python_boost_compute_memory_object;
        boost::python::enum_<boost::compute::memory_object::address_space>("address_space")
            .value("global_memory", boost::compute::memory_object::global_memory)
            .value("local_memory", boost::compute::memory_object::local_memory)
            .value("private_memory", boost::compute::memory_object::private_memory)
            .value("constant_memory", boost::compute::memory_object::constant_memory)
            .export_values()
            ;
    }
}
