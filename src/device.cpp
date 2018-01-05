// generate by pypp
// original source code: /opt/boost/1.65.1/boost/compute/device.hpp

#include <boost/compute/platform.hpp>
#include <boost/compute/device.hpp>
// TODO: forward declaration class platform

#include <boost/python.hpp>


void init_boost_compute_device_hpp() {
    auto boost_python_boost_compute_device = boost::python::class_<boost::compute::device, std::shared_ptr<boost::compute::device>>("device")
        //.def(boost::python::init<cl_device_id, boost::python::optional<bool>>())
        //.def("operator=", static_cast<boost::compute::device &(boost::compute::device::*)(const boost::compute::device &)>(&boost::compute::device::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("operator=", static_cast<boost::compute::device &(boost::compute::device::*)(boost::compute::device &&)>(&boost::compute::device::operator=), boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        //.def("id", &boost::compute::device::id, boost::python::return_value_policy<boost::python::return_opaque_pointer>())
        //.def("get", &boost::compute::device::get, boost::python::return_value_policy<boost::python::copy_non_const_reference>())
        .def("type", &boost::compute::device::type)
        .def("platform", &boost::compute::device::platform)
        .def("name", &boost::compute::device::name)
        .def("vendor", &boost::compute::device::vendor)
        .def("profile", &boost::compute::device::profile)
        .def("version", &boost::compute::device::version)
        .def("driver_version", &boost::compute::device::driver_version)
        .def("extensions", &boost::compute::device::extensions)
        .def("supports_extension", &boost::compute::device::supports_extension)
        .def("address_bits", &boost::compute::device::address_bits)
        .def("global_memory_size", &boost::compute::device::global_memory_size)
        .def("local_memory_size", &boost::compute::device::local_memory_size)
        .def("clock_frequency", &boost::compute::device::clock_frequency)
        .def("compute_units", &boost::compute::device::compute_units)
        .def("max_memory_alloc_size", &boost::compute::device::max_memory_alloc_size)
        .def("max_work_group_size", &boost::compute::device::max_work_group_size)
        .def("max_work_item_dimensions", &boost::compute::device::max_work_item_dimensions)
        .def("profiling_timer_resolution", &boost::compute::device::profiling_timer_resolution)
        .def("is_subdevice", &boost::compute::device::is_subdevice)
        .def("partition", &boost::compute::device::partition)
        .def("partition_equally", &boost::compute::device::partition_equally)
        .def("partition_by_counts", &boost::compute::device::partition_by_counts)
        .def("partition_by_affinity_domain", &boost::compute::device::partition_by_affinity_domain)
        //.def("operator==", &boost::compute::device::operator==)
        //.def("operator!=", &boost::compute::device::operator!=)
        .def("check_version", &boost::compute::device::check_version)
        ;
    {
        boost::python::scope scope = boost_python_boost_compute_device;
        boost::python::enum_<typename boost::compute::device::type>("type")
            .value("cpu", boost::compute::device::cpu)
            .value("gpu", boost::compute::device::gpu)
            .value("accelerator", boost::compute::device::accelerator)
            .export_values()
            ;
    }
}
