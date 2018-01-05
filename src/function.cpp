// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/function.hpp

#include <boost/compute/function.hpp>

#include <boost/python.hpp>


void init_boost_compute_function_hpp() {
    boost::python::def("parse_argument_names", &boost::compute::detail::parse_argument_names);
}
