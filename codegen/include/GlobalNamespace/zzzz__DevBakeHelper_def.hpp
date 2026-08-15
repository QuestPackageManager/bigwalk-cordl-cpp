#pragma once
// IWYU pragma private; include "GlobalNamespace/DevBakeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DevBakeHelper)
namespace GlobalNamespace {
struct DevBakeHelper_BakeType;
}
namespace GlobalNamespace {
struct DevBakeHelper_Preset;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
struct DevBakeHelper_BakeType;
}
namespace GlobalNamespace {
class DevBakeHelper;
}
namespace GlobalNamespace {
struct DevBakeHelper_Preset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DevBakeHelper_BakeType);
MARK_REF_T(::GlobalNamespace::DevBakeHelper*);
MARK_VAL_T(::GlobalNamespace::DevBakeHelper_Preset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevBakeHelper_BakeType, "", "DevBakeHelper/BakeType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevBakeHelper*, "", "DevBakeHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevBakeHelper_Preset, "", "DevBakeHelper/Preset");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DevBakeHelper/BakeType
struct CORDL_TYPE DevBakeHelper_BakeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DevBakeHelper_BakeType_Unwrapped
enum struct __DevBakeHelper_BakeType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Rock = static_cast<int32_t>(0x1),
__E_Ocean = static_cast<int32_t>(0x2),
__E_MVOff = static_cast<int32_t>(0x3),
__E_BiomesOff = static_cast<int32_t>(0x4),
__E_VegMap = static_cast<int32_t>(0x5),
__E_PaperMap = static_cast<int32_t>(0x6),
__E_ReliefMap = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DevBakeHelper_BakeType_Unwrapped () const noexcept {
return static_cast<__DevBakeHelper_BakeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DevBakeHelper_BakeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DevBakeHelper_BakeType(int32_t  value__) noexcept;

/// @brief Field BiomesOff value: I32(4)
static ::GlobalNamespace::DevBakeHelper_BakeType const BiomesOff;

/// @brief Field MVOff value: I32(3)
static ::GlobalNamespace::DevBakeHelper_BakeType const MVOff;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DevBakeHelper_BakeType const None;

/// @brief Field Ocean value: I32(2)
static ::GlobalNamespace::DevBakeHelper_BakeType const Ocean;

/// @brief Field PaperMap value: I32(6)
static ::GlobalNamespace::DevBakeHelper_BakeType const PaperMap;

/// @brief Field ReliefMap value: I32(7)
static ::GlobalNamespace::DevBakeHelper_BakeType const ReliefMap;

/// @brief Field Rock value: I32(1)
static ::GlobalNamespace::DevBakeHelper_BakeType const Rock;

/// @brief Field VegMap value: I32(5)
static ::GlobalNamespace::DevBakeHelper_BakeType const VegMap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevBakeHelper_BakeType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevBakeHelper_BakeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies DevBakeHelper::BakeType, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: DevBakeHelper/Preset
struct CORDL_TYPE DevBakeHelper_Preset {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DevBakeHelper_Preset() ;

// Ctor Parameters [CppParam { name: "bakeType", ty: "::GlobalNamespace::DevBakeHelper_BakeType", modifiers: "", def_value: None }, CppParam { name: "activeMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localPositionOffsetMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localPositionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "enabledMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enabledTarget", ty: "::UnityW<::UnityEngine::MonoBehaviour>", modifiers: "", def_value: None }, CppParam { name: "enabledValue", ty: "bool", modifiers: "", def_value: None }]
constexpr DevBakeHelper_Preset(::GlobalNamespace::DevBakeHelper_BakeType  bakeType, bool  activeMask, bool  activeValue, bool  localPositionOffsetMask, ::UnityEngine::Vector3  localPositionOffset, bool  enabledMask, ::UnityW<::UnityEngine::MonoBehaviour>  enabledTarget, bool  enabledValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4900};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field bakeType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::DevBakeHelper_BakeType  bakeType;

/// @brief Field activeMask, offset: 0x4, size: 0x1, def value: None
 bool  activeMask;

/// @brief Field activeValue, offset: 0x5, size: 0x1, def value: None
 bool  activeValue;

/// @brief Field localPositionOffsetMask, offset: 0x6, size: 0x1, def value: None
 bool  localPositionOffsetMask;

/// @brief Field localPositionOffset, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPositionOffset;

/// @brief Field enabledMask, offset: 0x14, size: 0x1, def value: None
 bool  enabledMask;

/// @brief Field enabledTarget, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  enabledTarget;

/// @brief Field enabledValue, offset: 0x20, size: 0x1, def value: None
 bool  enabledValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, bakeType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, activeMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, activeValue) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, localPositionOffsetMask) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, localPositionOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, enabledMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, enabledTarget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper_Preset, enabledValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevBakeHelper_Preset) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies DevBakeHelper::BakeType, DevBakeHelper::Preset, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevBakeHelper
class CORDL_TYPE DevBakeHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BakeType = ::GlobalNamespace::DevBakeHelper_BakeType;

using Preset = ::GlobalNamespace::DevBakeHelper_Preset;

/// @brief Field applyButton, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_applyButton, put=__cordl_internal_set_applyButton)) ::GlobalNamespace::DevBakeHelper_BakeType  applyButton;

/// @brief Field presets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_presets, put=__cordl_internal_set_presets)) ::ArrayW<::GlobalNamespace::DevBakeHelper_Preset>  presets;

static inline ::GlobalNamespace::DevBakeHelper* New_ctor() ;

constexpr ::GlobalNamespace::DevBakeHelper_BakeType const& __cordl_internal_get_applyButton() const;

constexpr ::GlobalNamespace::DevBakeHelper_BakeType& __cordl_internal_get_applyButton() ;

constexpr ::ArrayW<::GlobalNamespace::DevBakeHelper_Preset> const& __cordl_internal_get_presets() const;

constexpr ::ArrayW<::GlobalNamespace::DevBakeHelper_Preset>& __cordl_internal_get_presets() ;

constexpr void __cordl_internal_set_applyButton(::GlobalNamespace::DevBakeHelper_BakeType  value) ;

constexpr void __cordl_internal_set_presets(::ArrayW<::GlobalNamespace::DevBakeHelper_Preset>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevBakeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevBakeHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevBakeHelper(DevBakeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevBakeHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevBakeHelper(DevBakeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4901};

/// @brief Field presets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DevBakeHelper_Preset>  ___presets;

/// @brief Field applyButton, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::DevBakeHelper_BakeType  ___applyButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevBakeHelper, ___presets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevBakeHelper, ___applyButton) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevBakeHelper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
