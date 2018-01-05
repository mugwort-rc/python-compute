// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/buffer.hpp

#include <boost/compute/command_queue.hpp>
#include <boost/compute/buffer.hpp>
// TODO: forward declaration class command_queue

#include <boost/python.hpp>


void init_boost_compute_buffer_hpp() {
    boost::python::class_<boost::compute::buffer, boost::python::bases<boost::compute::memory_object>, std::shared_ptr<boost::compute::buffer>>("buffer")
        //.def(boost::python::init<cl_mem, boost::python::optional<bool>>())
        .def(boost::python::init<const boost::compute::context &, int, boost::python::optional<cl_mem_flags, void *>>())
        //.def("operator=", static_cast<boost::compute::buffer &(boost::compute::buffer::*)(const boost::compute::buffer &)>(&boost::compute::buffer::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("operator=", static_cast<boost::compute::buffer &(boost::compute::buffer::*)(boost::compute::buffer &&)>(&boost::compute::buffer::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("size", &boost::compute::buffer::size)
        .def("max_size", &boost::compute::buffer::max_size)
        .def("clone", &boost::compute::buffer::clone)
        .def("create_subbuffer", &boost::compute::buffer::create_subbuffer)
        ;
}
