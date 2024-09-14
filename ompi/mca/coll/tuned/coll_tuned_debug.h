/**
  Copyright (c) 2024 NVIDIA. All rights reserved.
  $COPYRIGHT$

  Additional copyrights may follow

  $HEADER$
 */

#ifndef COLL_TUNED_DEBUG_H
#define COLL_TUNED_DEBUG_H
#include "ompi_config.h"
#pragma GCC system_header

#ifdef __BASE_FILE__
#define __COLL_TUNED_FILE__ __BASE_FILE__
#else
#define __COLL_TUNED_FILE__ __FILE__
#endif

#define COLL_TUNED_VERBOSE(level, format, ...) \
    opal_output_verbose(level, ompi_coll_tuned_stream, "%s:%d - %s() " format, \
                        __COLL_TUNED_FILE__, __LINE__, __FUNCTION__, ## __VA_ARGS__)

#define COLL_TUNED_ERROR(format, ... ) \
    opal_output_verbose(0, ompi_coll_tuned_stream, "Error: %s:%d - %s() " format, \
                        __COLL_TUNED_FILE__, __LINE__, __FUNCTION__, ## __VA_ARGS__)

#endif
