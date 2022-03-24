/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(crc_check.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(d91fae7370b0735c7d4bfe9f96d89c12)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/crc_check.h>
// pydoc.h is automatically generated in the build directory
#include <crc_check_pydoc.h>

void bind_crc_check(py::module& m)
{

    using crc_check = ::gr::satellites::crc_check;


    py::class_<crc_check, gr::block, gr::basic_block, std::shared_ptr<crc_check>>(
        m, "crc_check", D(crc_check))

        .def(py::init(&crc_check::make),
             py::arg("num_bits"),
             py::arg("poly"),
             py::arg("initial_value"),
             py::arg("final_xor"),
             py::arg("input_reflected"),
             py::arg("result_reflected"),
             py::arg("swap_endianness"),
             py::arg("discard_crc") = false,
             py::arg("skip_header_bytes") = 0,
             D(crc_check, make))


        ;
}
