// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "AdaptiveTextStyleConfigBase.h"

namespace AdaptiveCards::Rendering::Uwp
{
    class AdaptiveTextStyleConfig
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveCards::Rendering::WinAppSDK::IAdaptiveTextStyleConfig,
                                              Microsoft::WRL::CloakedIid<AdaptiveCards::Rendering::WinAppSDK::AdaptiveTextStyleConfigBase>>

    {
        AdaptiveRuntime(AdaptiveTextStyleConfig);

    public:
        HRESULT RuntimeClassInitialize() noexcept
        {
            TextStyleConfig textStyle;
            return RuntimeClassInitialize(textStyle);
        }
        HRESULT RuntimeClassInitialize(TextStyleConfig textConfig) noexcept
        {
            return AdaptiveTextStyleConfigBase::InitializeTextStyleConfig(textConfig);
        }

        IFACEMETHODIMP get_Weight(_Out_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::TextWeight* textWeight) override
        {
            return AdaptiveTextStyleConfigBase::get_Weight(textWeight);
        }

        IFACEMETHODIMP put_Weight(ABI::AdaptiveCards::ObjectModel::WinAppSDK::TextWeight textWeight) override
        {
            return AdaptiveTextStyleConfigBase::put_Weight(textWeight);
        }

        IFACEMETHODIMP get_Size(_Out_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::TextSize* textSize) override
        {
            return AdaptiveTextStyleConfigBase::get_Size(textSize);
        }

        IFACEMETHODIMP put_Size(ABI::AdaptiveCards::ObjectModel::WinAppSDK::TextSize textSize) override
        {
            return AdaptiveTextStyleConfigBase::put_Size(textSize);
        }

        IFACEMETHODIMP get_Color(_Out_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::ForegroundColor* textColor) override
        {
            return AdaptiveTextStyleConfigBase::get_Color(textColor);
        }

        IFACEMETHODIMP put_Color(ABI::AdaptiveCards::ObjectModel::WinAppSDK::ForegroundColor textColor) override
        {
            return AdaptiveTextStyleConfigBase::put_Color(textColor);
        }

        IFACEMETHODIMP get_IsSubtle(_Out_ boolean* isSubtle) override
        {
            return AdaptiveTextStyleConfigBase::get_IsSubtle(isSubtle);
        }

        IFACEMETHODIMP put_IsSubtle(boolean isSubtle) override
        {
            return AdaptiveTextStyleConfigBase::put_IsSubtle(isSubtle);
        }

        IFACEMETHODIMP get_FontType(_Out_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::FontType* fontType) override
        {
            return AdaptiveTextStyleConfigBase::get_FontType(fontType);
        }

        IFACEMETHODIMP put_FontType(ABI::AdaptiveCards::ObjectModel::WinAppSDK::FontType fontType) override
        {
            return AdaptiveTextStyleConfigBase::put_FontType(fontType);
        }
    };

    ActivatableClass(AdaptiveTextStyleConfig);
}
