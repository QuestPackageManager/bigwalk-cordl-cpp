#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementsOrdering.hpp"
#include "TheVisualEngine/zzzz__TVEElementsOrdering_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVEElementsOrdering::TVEElementsOrdering(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementsOrdering::TVEElementsOrdering()   {
}
constexpr ::TheVisualEngine::TVEElementsOrdering  TheVisualEngine::TVEElementsOrdering::SortInEditMode{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVEElementsOrdering  TheVisualEngine::TVEElementsOrdering::SortAtRuntime{static_cast<int32_t>(0xa)};
