/**
 * @file
 * @brief MetricData variant type
 *
 * @copyright Copyright (c) 2026 DESY and the Constellation authors.
 * This software is distributed under the terms of the EUPL-1.2 License, copied verbatim in the file "LICENSE.md".
 * SPDX-License-Identifier: EUPL-1.2
 */

#pragma once

#include <variant>

#include "constellation/core/config/value_types.hpp"
#include "constellation/core/metrics/DQMTypes.hpp"

namespace constellation::metrics {

    /**
     * @brief Variant holding a scalar or structured DQM metric value
     */
    using MetricData = std::variant<config::Scalar, Matrix, Histogram1D, Histogram2D>;

} // namespace constellation::metrics
