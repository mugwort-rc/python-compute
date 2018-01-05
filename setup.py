# -*- coding: utf-8 -*-

import os, sys

from setuptools import setup, Extension
from setuptools.command import build_ext

libraries = [
    "boost_python-py{}{}".format(*sys.version_info[:2]),
    "stdc++",
    "OpenCL",
]
includes = [
    "/opt/boost/1.65.1/",
    "/usr/local/cuda/include",
]
sources = [
    "src/main.cpp",
    "src/buffer.cpp",
    "src/command_queue.cpp",
    "src/context.cpp",
    "src/device.cpp",
    "src/event.cpp",
    "src/function.cpp",
    "src/kernel.cpp",
    "src/memory_object.cpp",
    "src/platform.cpp",
    "src/program.cpp",
    "src/system.cpp",
]

ext = Extension(
    name="compute.__compute",
    include_dirs=includes,
    libraries=libraries,
    sources=sources,
    extra_compile_args=['-std=c++11'],
)

# ccache
for path in os.environ['PATH'].split(os.pathsep):
    path = path.strip('"')
    exe = os.path.join(path, 'ccache')
    if os.path.isfile(exe) and os.access(exe, os.X_OK):
        os.environ['CC'] = 'ccache gcc'
        break

setup(
    name="compute",
    version="1.0",
    author="mugwort_rc",
    author_email="mugwort rc at gmail com",
    url="https://github.com/mugwort-rc/python-compute",
    classifiers = [
        "Development Status :: 5 - Production/Stable",
        "Intended Audience :: Developers",
        "Programming Language :: C++",
        "Programming Language :: Python",
        "Programming Language :: Python :: 3",
    ],
    packages = ["compute"],
    ext_modules = [ext]
)
