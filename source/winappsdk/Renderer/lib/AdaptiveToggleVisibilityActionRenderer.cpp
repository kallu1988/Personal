// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveToggleVisibilityActionRenderer.h"
#include "ActionHelpers.h"

using namespace ABI::AdaptiveCards::Rendering::WinAppSDK;
using namespace ABI::AdaptiveCards::ObjectModel::WinAppSDK;
using namespace Microsoft::WRL;

namespace AdaptiveCards::Rendering::WinAppSDK
{
    HRESULT AdaptiveToggleVisibilityActionRenderer::RuntimeClassInitialize() noexcept
    try
    {
        return S_OK;
    }
    CATCH_RETURN;

    HRESULT AdaptiveToggleVisibilityActionRenderer::Render(_In_ IAdaptiveActionElement* action,
                                                           _In_ IAdaptiveRenderContext* renderContext,
                                                           _In_ IAdaptiveRenderArgs* renderArgs,
                                                           _COM_Outptr_ ABI::Windows::UI::Xaml::IUIElement** result) noexcept
    try
    {
        return ActionHelpers::BuildAction(action, renderContext, renderArgs, false, result);
    }
    CATCH_RETURN;
}
