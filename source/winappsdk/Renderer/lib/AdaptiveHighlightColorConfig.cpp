// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveHighlightColorConfig.h"
#include "AdaptiveHighlightColorConfig.g.cpp"

namespace winrt::AdaptiveCards::Rendering::WinUI3::implementation
{
    AdaptiveHighlightColorConfig::AdaptiveHighlightColorConfig(::AdaptiveCards::HighlightColorConfig colorConfig)
    {
        Default = GetColorFromString(colorConfig.defaultColor);
        Subtle = GetColorFromString(colorConfig.subtleColor);
    }
}