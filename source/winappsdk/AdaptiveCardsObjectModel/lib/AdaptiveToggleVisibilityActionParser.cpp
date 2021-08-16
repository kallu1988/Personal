// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveToggleVisibilityAction.h"
#include "AdaptiveToggleVisibilityActionParser.h"
#include "AdaptiveElementParserRegistration.h"

using namespace ABI::AdaptiveCards::ObjectModel::Uwp;
using namespace Microsoft::WRL;

namespace AdaptiveCards::ObjectModel::Uwp
{
    HRESULT AdaptiveToggleVisibilityActionParser::RuntimeClassInitialize() noexcept
    try
    {
        return S_OK;
    }
    CATCH_RETURN;

    HRESULT AdaptiveToggleVisibilityActionParser::FromJson(
        _In_ ABI::Windows::Data::Json::IJsonObject* jsonObject,
        _In_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::IAdaptiveElementParserRegistration* elementParserRegistration,
        _In_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::IAdaptiveActionParserRegistration* actionParserRegistration,
        _In_ ABI::Windows::Foundation::Collections::IVector<ABI::AdaptiveCards::ObjectModel::WinAppSDK::AdaptiveWarning*>* adaptiveWarnings,
        _COM_Outptr_ ABI::AdaptiveCards::ObjectModel::WinAppSDK::IAdaptiveActionElement** element) noexcept
    try
    {
        return AdaptiveCards::ObjectModel::WinAppSDK::FromJson<AdaptiveCards::ObjectModel::WinAppSDK::AdaptiveToggleVisibilityAction, AdaptiveCards::ToggleVisibilityAction, AdaptiveCards::ToggleVisibilityActionParser>(
            jsonObject, elementParserRegistration, actionParserRegistration, adaptiveWarnings, element);
    }
    CATCH_RETURN;
}
