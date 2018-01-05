// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/platform.hpp

#include <boost/compute/platform.hpp>

#include <boost/python.hpp>


void init_boost_compute_platform_hpp() {
    boost::python::class_<boost::compute::platform, std::shared_ptr<boost::compute::platform>>("platform", boost::python::no_init)//, boost::python::init<cl_platform_id>())
        //.def("operator=", &boost::compute::platform::operator=, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("id", &boost::compute::platform::id, boost::python::return_value_policy<boost::python::return_opaque_pointer>())
        .def("name", &boost::compute::platform::name)
        .def("vendor", &boost::compute::platform::vendor)
        .def("profile", &boost::compute::platform::profile)
        .def("version", &boost::compute::platform::version)
        .def("extensions", &boost::compute::platform::extensions)
        .def("supports_extension", &boost::compute::platform::supports_extension)
        .def("devices", &boost::compute::platform::devices)
        .def("device_count", &boost::compute::platform::device_count)
        .def("get_extension_function_address", &boost::compute::platform::get_extension_function_address, boost::python::return_value_policy<boost::python::return_opaque_pointer>())
        .def("unload_compiler", &boost::compute::platform::unload_compiler)
        //.def("operator==", &boost::compute::platform::operator==)
        //.def("operator!=", &boost::compute::platform::operator!=)
        ;
}
