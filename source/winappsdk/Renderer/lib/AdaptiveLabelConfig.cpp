// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveLabelConfig.h"

using namespace Microsoft::WRL;
using namespace ABI::AdaptiveCards::Rendering::WinAppSDK;

namespace AdaptiveCards::Rendering::WinAppSDK
{
    HRESULT AdaptiveLabelConfig::RuntimeClassInitialize() noexcept
    try
    {
        LabelConfig labelConfig;
        return RuntimeClassInitialize(labelConfig);
    }
    CATCH_RETURN;

    HRESULT AdaptiveLabelConfig::RuntimeClassInitialize(LabelConfig labelConfig) noexcept
    {
        m_inputSpacing = static_cast<ABI::AdaptiveCards::ObjectModel::WinAppSDK::Spacing>(labelConfig.inputSpacing);

        RETURN_IF_FAILED(MakeAndInitialize<AdaptiveInputLabelConfig>(m_requiredInputs.GetAddressOf(), labelConfig.requiredInputs));
        RETURN_IF_FAILED(MakeAndInitialize<AdaptiveInputLabelConfig>(m_optionalInputs.GetAddressOf(), labelConfig.optionalInputs));

        return S_OK;
    }

    HRESULT AdaptiveLabelConfig::get_InputSpacing(_Out_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::Spacing* spacing)
    {
        *spacing = m_inputSpacing;
        return S_OK;
    }

    HRESULT AdaptiveLabelConfig::put_InputSpacing(ABI::AdaptiveCards::ObjectModel::WinAppSDK::Spacing spacing)
    {
        m_inputSpacing = spacing;
        return S_OK;
    }

    HRESULT AdaptiveLabelConfig::get_RequiredInputs(_Outptr_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveInputLabelConfig** requiredInputs)
    {
        return m_requiredInputs.CopyTo(requiredInputs);
    }

    HRESULT AdaptiveLabelConfig::put_RequiredInputs(_In_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveInputLabelConfig* requiredInputs)
    {
        m_requiredInputs = requiredInputs;
        return S_OK;
    }

    HRESULT AdaptiveLabelConfig::get_OptionalInputs(_Outptr_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveInputLabelConfig** optionalInputs)
    {
        return m_optionalInputs.CopyTo(optionalInputs);
    }

    HRESULT AdaptiveLabelConfig::put_OptionalInputs(_In_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveInputLabelConfig* optionalInputs)
    {
        m_optionalInputs = optionalInputs;
        return S_OK;
    }

}
