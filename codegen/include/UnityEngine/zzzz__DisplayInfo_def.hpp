#pragma once
// IWYU pragma private; include "UnityEngine/DisplayInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__RefreshRate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayInfo)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct DisplayInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DisplayInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::DisplayInfo, "UnityEngine", "DisplayInfo");
// Dependencies UnityEngine.RectInt, UnityEngine.RefreshRate
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DisplayInfo
struct CORDL_TYPE DisplayInfo {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::DisplayInfo>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::DisplayInfo>*() ;

/// @brief Method Equals, addr 0x18224ce30, size 0xe0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::DisplayInfo  other) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::DisplayInfo>"
constexpr ::System::IEquatable_1<::UnityEngine::DisplayInfo>* i___System__IEquatable_1___UnityEngine__DisplayInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DisplayInfo() ;

// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "refreshRate", ty: "::UnityEngine::RefreshRate", modifiers: "", def_value: None }, CppParam { name: "workArea", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "physicalDpi", ty: "float_t", modifiers: "", def_value: None }]
constexpr DisplayInfo(uint64_t  handle, int32_t  width, int32_t  height, ::UnityEngine::RefreshRate  refreshRate, ::UnityEngine::RectInt  workArea, ::StringW  name, float_t  physicalDpi) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field handle, offset: 0x0, size: 0x8, def value: None
 uint64_t  handle;

/// @brief Field width, offset: 0x8, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0xc, size: 0x4, def value: None
 int32_t  height;

/// @brief Field refreshRate, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::RefreshRate  refreshRate;

/// @brief Field workArea, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::RectInt  workArea;

/// @brief Field name, offset: 0x28, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field physicalDpi, offset: 0x30, size: 0x4, def value: None
 float_t  physicalDpi;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DisplayInfo, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DisplayInfo, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DisplayInfo, height) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DisplayInfo, refreshRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DisplayInfo, workArea) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DisplayInfo, name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::DisplayInfo, physicalDpi) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::DisplayInfo) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine
