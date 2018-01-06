# python-compute

Boost.Compute wrapped by Boost.Python

```python.console
>>> import compute
>>> compute.system.default_device().name()
'GeForce GTX 1050'
>>> compute.system.default_device().vendor()
'NVIDIA Corporation'
>>> compute.system.default_device().profile()
'FULL_PROFILE'
>>> compute.system.default_device().version()
'OpenCL 1.2 CUDA'
>>> compute.system.default_device().driver_version()
'387.34'
>>> compute.system.default_device().address_bits()
64
>>> compute.system.default_device().global_memory_size()
2093023232
>>> compute.system.default_device().global_memory_size() / 1024
2043968.0
>>> compute.system.default_device().global_memory_size() / 1024 / 1024
1996.0625
>>> compute.system.default_device().global_memory_size() / 1024 / 1024 / 1024
1.94927978515625
>>> compute.system.default_device().local_memory_size()
49152
>>> compute.system.default_device().clock_frequency()
1455
>>> compute.system.default_device().compute_units()
5
>>> compute.system.default_device().max_memory_alloc_size()
523255808
>>> compute.system.default_device().max_work_group_size()
1024
>>> compute.system.default_device().max_work_item_dimensions()
3
```
