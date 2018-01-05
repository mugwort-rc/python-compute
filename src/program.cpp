// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/program.hpp

#include <boost/compute/kernel.hpp>
#include <boost/compute/program.hpp>
// TODO: forward declaration class kernel

#include <boost/python.hpp>


BOOST_PYTHON_FUNCTION_OVERLOADS(programlinkOverloads0, boost::compute::program::link, 2, 3)
BOOST_PYTHON_FUNCTION_OVERLOADS(programbuild_with_sourceOverloads0, boost::compute::program::build_with_source, 2, 3)

void init_boost_compute_program_hpp() {
    boost::python::class_<boost::compute::program, std::shared_ptr<boost::compute::program>>("program")
        //.def(boost::python::init<cl_program, boost::python::optional<bool>>())
        //.def("operator=", static_cast<boost::compute::program &(boost::compute::program::*)(const boost::compute::program &)>(&boost::compute::program::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("operator=", static_cast<boost::compute::program &(boost::compute::program::*)(boost::compute::program &&)>(&boost::compute::program::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("get", &boost::compute::program::get, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("source", &boost::compute::program::source)
        .def("binary", &boost::compute::program::binary)
        .def("get_devices", &boost::compute::program::get_devices)
        .def("get_context", &boost::compute::program::get_context)
        .def("build", &boost::compute::program::build)
        .def("compile", &boost::compute::program::compile)
        .def("link", &boost::compute::program::link, programlinkOverloads0())
        .def("build_log", &boost::compute::program::build_log)
        .def("create_kernel", &boost::compute::program::create_kernel)
        //.def("operator==", &boost::compute::program::operator==)
        //.def("operator!=", &boost::compute::program::operator!=)
        .def("create_with_source", static_cast<boost::compute::program(*)(const std::string &, const boost::compute::context &)>(&boost::compute::program::create_with_source))
        //.def("create_with_source", static_cast<boost::compute::program(*)(const int &, const boost::compute::context &)>(&boost::compute::program::create_with_source))
        .def("create_with_source_file", static_cast<boost::compute::program(*)(const std::string &, const boost::compute::context &)>(&boost::compute::program::create_with_source_file))
        //.def("create_with_source_file", static_cast<boost::compute::program(*)(const int &, const boost::compute::context &)>(&boost::compute::program::create_with_source_file))
        //.def("create_with_binary", static_cast<boost::compute::program(*)(const unsigned char *, int, const boost::compute::context &)>(&boost::compute::program::create_with_binary))
        //.def("create_with_binary", static_cast<boost::compute::program(*)(const int &, const boost::compute::context &)>(&boost::compute::program::create_with_binary))
        .def("create_with_binary_file", &boost::compute::program::create_with_binary_file)
        .def("create_with_builtin_kernels", &boost::compute::program::create_with_builtin_kernels)
        .def("build_with_source", &boost::compute::program::build_with_source, programbuild_with_sourceOverloads0())
        .staticmethod("link")
        .staticmethod("create_with_source")
        .staticmethod("create_with_source_file")
        //.staticmethod("create_with_binary")
        .staticmethod("create_with_binary_file")
        .staticmethod("create_with_builtin_kernels")
        .staticmethod("build_with_source")
        ;
}
