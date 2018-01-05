// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/context.hpp

#include <boost/compute/context.hpp>

#include <boost/python.hpp>


void init_boost_compute_context_hpp() {
    boost::python::class_<boost::compute::context, std::shared_ptr<boost::compute::context>>("context")
        .def(boost::python::init<const boost::compute::device &, boost::python::optional<const cl_context_properties *>>())
        //.def(boost::python::init<const int &, boost::python::optional<const cl_context_properties *>>())
        //.def(boost::python::init<cl_context, boost::python::optional<bool>>())
        //.def("operator=", static_cast<boost::compute::context &(boost::compute::context::*)(const boost::compute::context &)>(&boost::compute::context::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("operator=", static_cast<boost::compute::context &(boost::compute::context::*)(boost::compute::context &&)>(&boost::compute::context::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("get", &boost::compute::context::get, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("get_device", &boost::compute::context::get_device)
        .def("get_devices", &boost::compute::context::get_devices)
        //.def("operator==", &boost::compute::context::operator==)
        //.def("operator!=", &boost::compute::context::operator!=)
        ;
}
