// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

namespace AdaptiveCards::Rendering::Uwp
{
    class AdaptiveTextStylesConfig
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStylesConfig>
    {
        AdaptiveRuntime(AdaptiveTextStylesConfig);

    public:
        HRESULT RuntimeClassInitialize() noexcept;
        HRESULT RuntimeClassInitialize(TextStylesConfig textConfig) noexcept;

        IFACEMETHODIMP get_Heading(_COM_Outptr_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStyleConfig** headingStyle) override;
        IFACEMETHODIMP put_Heading(_In_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStyleConfig* headingStyle) override;

        IFACEMETHODIMP get_ColumnHeader(_COM_Outptr_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStyleConfig** columnHeaderStyle) override;
        IFACEMETHODIMP put_ColumnHeader(_In_ ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStyleConfig* columnHeaderStyle) override;

    private:
        Microsoft::WRL::ComPtr<ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStyleConfig> m_headingStyle;
        Microsoft::WRL::ComPtr<ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStyleConfig> m_columnHeaderStyle;
    };

    ActivatableClass(AdaptiveTextStylesConfig);
}
