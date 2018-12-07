#ifndef GDF_GDF_H
#define GDF_GDF_H

#include <cstdlib>
#include <cstdint>
#include "cudf/types.h"
#include "cudf/io_types.h"
#include "cudf/convert_types.h"

constexpr size_t GDF_VALID_BITSIZE{(sizeof(gdf_valid_type) * 8)};

extern "C" {
#include "cudf/functions.h"
#include "cudf/io_functions.h"
}

#endif /* GDF_GDF_H */
