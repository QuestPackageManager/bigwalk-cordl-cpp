#pragma once
// IWYU pragma private; include "AmplifyImpostors/LODReplacement.hpp"
#include "AmplifyImpostors/zzzz__LODReplacement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::LODReplacement::LODReplacement(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::LODReplacement::LODReplacement()   {
}
constexpr ::AmplifyImpostors::LODReplacement  AmplifyImpostors::LODReplacement::DoNothing{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::LODReplacement  AmplifyImpostors::LODReplacement::ReplaceCulled{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::LODReplacement  AmplifyImpostors::LODReplacement::ReplaceLast{static_cast<int32_t>(0x2)};
constexpr ::AmplifyImpostors::LODReplacement  AmplifyImpostors::LODReplacement::ReplaceAllExceptFirst{static_cast<int32_t>(0x3)};
constexpr ::AmplifyImpostors::LODReplacement  AmplifyImpostors::LODReplacement::ReplaceSpecific{static_cast<int32_t>(0x4)};
constexpr ::AmplifyImpostors::LODReplacement  AmplifyImpostors::LODReplacement::ReplaceAfterSpecific{static_cast<int32_t>(0x5)};
constexpr ::AmplifyImpostors::LODReplacement  AmplifyImpostors::LODReplacement::InsertAfter{static_cast<int32_t>(0x6)};
