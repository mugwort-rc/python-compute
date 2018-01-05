// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/kernel.hpp

#include <boost/compute/kernel.hpp>

#include <boost/python.hpp>


void init_boost_compute_kernel_hpp() {
    boost::python::class_<boost::compute::kernel, std::shared_ptr<boost::compute::kernel>>("kernel")
        //.def(boost::python::init<cl_kernel, boost::python::optional<bool>>())
        .def(boost::python::init<const boost::compute::program &, const std::string &>())
        //.def("operator=", static_cast<boost::compute::kernel &(boost::compute::kernel::*)(const boost::compute::kernel &)>(&boost::compute::kernel::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("operator=", static_cast<boost::compute::kernel &(boost::compute::kernel::*)(boost::compute::kernel &&)>(&boost::compute::kernel::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("get", &boost::compute::kernel::get, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("name", &boost::compute::kernel::name)
        .def("arity", &boost::compute::kernel::arity)
        .def("get_program", &boost::compute::kernel::get_program)
        .def("get_context", &boost::compute::kernel::get_context)
        //.def("set_arg", static_cast<void(boost::compute::kernel::*)(int, int, const void *)>(&boost::compute::kernel::set_arg))
        //.def("set_arg", static_cast<void(boost::compute::kernel::*)(int, _cl_mem *const)>(&boost::compute::kernel::set_arg))
        //.def("set_arg", static_cast<void(boost::compute::kernel::*)(int, _cl_sampler *const)>(&boost::compute::kernel::set_arg))
        .def("set_arg_svm_ptr", &boost::compute::kernel::set_arg_svm_ptr)
        //.def("operator==", &boost::compute::kernel::operator==)
        //.def("operator!=", &boost::compute::kernel::operator!=)
        .def("create_with_source", &boost::compute::kernel::create_with_source)
        .staticmethod("create_with_source")
        ;
}
