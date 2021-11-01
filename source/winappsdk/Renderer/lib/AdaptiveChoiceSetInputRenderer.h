// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "ChoiceSetInput.h"
#include "AdaptiveChoiceSetInputRenderer.g.h"

namespace winrt::AdaptiveCards::Rendering::WinUI3::implementation
{
    struct AdaptiveChoiceSetInputRenderer : AdaptiveChoiceSetInputRendererT<AdaptiveChoiceSetInputRenderer>
    {
        /* AdaptiveRuntime(AdaptiveChoiceSetInputRenderer);*/

    public:
        // HRESULT RuntimeClassInitialize() noexcept;
        AdaptiveChoiceSetInputRenderer() = default;

        /*IFACEMETHODIMP Render(rtom::AdaptiveCardElement const& cardElement,
                              winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderContext const& renderContext,
                              winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderArgs const& renderArgs,
                              _COM_Outptr_ ABI::Windows::UI::Xaml::IUIElement** result) noexcept override;*/
        winrt::Windows::UI::Xaml::UIElement Render(winrt::AdaptiveCards::ObjectModel::WinUI3::IAdaptiveCardElement const& cardElement,
                                                   winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderContext const& renderContext,
                                                   winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderArgs const& renderArgs);

    private:
        static std::vector<std::string> GetChoiceSetValueVector(rtom::AdaptiveChoiceSetInput const& adaptiveChoiceSetInput);

        static bool IsChoiceSelected(std::vector<std::string> selectedValues, rtom::AdaptiveChoiceInput const& choice);

        winrt::Windows::UI::Xaml::UIElement BuildExpandedChoiceSetInput(
            winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderContext const& renderContext,
            winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderArgs const& renderArgs,
            winrt::AdaptiveCards::ObjectModel::WinUI3::AdaptiveChoiceSetInput const& adaptiveChoiceSetInput,
            bool isMultiSelect);

        winrt::Windows::UI::Xaml::UIElement BuildCompactChoiceSetInput(
            winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderContext const& renderContext,
            winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderArgs const& renderArgs,
            winrt::AdaptiveCards::ObjectModel::WinUI3::AdaptiveChoiceSetInput const& adaptiveChoiceSetInput);

        winrt::Windows::UI::Xaml::UIElement BuildFilteredChoiceSetInput(
            winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderContext const& renderContext,
            winrt::AdaptiveCards::Rendering::WinUI3::AdaptiveRenderArgs const& renderArgs,
            winrt::AdaptiveCards::ObjectModel::WinUI3::AdaptiveChoiceSetInput const& adaptiveChoiceSetInput);
    };

    /*ActivatableClass(AdaptiveChoiceSetInputRenderer);*/
}

namespace winrt::AdaptiveCards::Rendering::WinUI3::factory_implementation
{
    struct AdaptiveChoiceSetInputRenderer
        : AdaptiveChoiceSetInputRendererT<AdaptiveChoiceSetInputRenderer, implementation::AdaptiveChoiceSetInputRenderer>
    {
    };
}
