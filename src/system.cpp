// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/system.hpp

#include <boost/compute/system.hpp>

#include <boost/python.hpp>


void init_boost_compute_system_hpp() {
    boost::python::class_<boost::compute::system, std::shared_ptr<boost::compute::system>, boost::noncopyable>("system", boost::python::no_init)
        .def("default_device", &boost::compute::system::default_device)
        .def("find_device", &boost::compute::system::find_device)
        .def("devices", &boost::compute::system::devices)
        .def("device_count", &boost::compute::system::device_count)
        .def("default_context", &boost::compute::system::default_context)
        .def("default_queue", &boost::compute::system::default_queue, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("finish", &boost::compute::system::finish)
        .def("platforms", &boost::compute::system::platforms)
        .def("platform_count", &boost::compute::system::platform_count)
        .staticmethod("default_device")
        .staticmethod("find_device")
        .staticmethod("devices")
        .staticmethod("device_count")
        .staticmethod("default_context")
        .staticmethod("default_queue")
        .staticmethod("finish")
        .staticmethod("platforms")
        .staticmethod("platform_count")
        ;
}
