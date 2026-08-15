#pragma once
// IWYU pragma private; include "Rewired/ElementAssignmentType.hpp"
#include "Rewired/zzzz__ElementAssignmentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ElementAssignmentType::ElementAssignmentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ElementAssignmentType::ElementAssignmentType()   {
}
constexpr ::Rewired::ElementAssignmentType  Rewired::ElementAssignmentType::FullAxis{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ElementAssignmentType  Rewired::ElementAssignmentType::SplitAxis{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ElementAssignmentType  Rewired::ElementAssignmentType::Button{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ElementAssignmentType  Rewired::ElementAssignmentType::KeyboardKey{static_cast<int32_t>(0x3)};
