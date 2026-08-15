#pragma once
// IWYU pragma private; include "GlobalNamespace/LightQualityData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightQualityData)
namespace GlobalNamespace {
struct LightQualityData_LightPriority;
}
namespace GlobalNamespace {
struct LightQualityData_LightQuality;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
struct LightQualityData_LightPriority;
}
namespace GlobalNamespace {
class LightQualityData;
}
namespace GlobalNamespace {
struct LightQualityData_LightQuality;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightQualityData_LightPriority);
MARK_REF_T(::GlobalNamespace::LightQualityData*);
MARK_VAL_T(::GlobalNamespace::LightQualityData_LightQuality);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightQualityData_LightPriority, "", "LightQualityData/LightPriority");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightQualityData*, "", "LightQualityData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightQualityData_LightQuality, "", "LightQualityData/LightQuality");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LightQualityData/LightPriority
struct CORDL_TYPE LightQualityData_LightPriority {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightQualityData_LightPriority_Unwrapped
enum struct __LightQualityData_LightPriority_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Priority = static_cast<int32_t>(0x1),
__E_Static = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightQualityData_LightPriority_Unwrapped () const noexcept {
return static_cast<__LightQualityData_LightPriority_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LightQualityData_LightPriority() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightQualityData_LightPriority(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::LightQualityData_LightPriority const Default;

/// @brief Field Priority value: I32(1)
static ::GlobalNamespace::LightQualityData_LightPriority const Priority;

/// @brief Field Static value: I32(2)
static ::GlobalNamespace::LightQualityData_LightPriority const Static;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4984};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightQualityData_LightPriority, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightQualityData_LightPriority) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies LightQualityData::LightPriority, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: LightQualityData/LightQuality
struct CORDL_TYPE LightQualityData_LightQuality {
public:
// Declarations
/// @brief Method ApplyToLight, addr 0x1803ec9c0, size 0x150, virtual false, abstract: false, final false
inline void ApplyToLight(::UnityEngine::Light*  light) ;

// Ctor Parameters []
// @brief default ctor
constexpr LightQualityData_LightQuality() ;

// Ctor Parameters [CppParam { name: "shadowMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "::GlobalNamespace::LightQualityData_LightPriority", modifiers: "", def_value: None }]
constexpr LightQualityData_LightQuality(::UnityEngine::LayerMask  shadowMask, ::GlobalNamespace::LightQualityData_LightPriority  priority) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4985};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field shadowMask, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  shadowMask;

/// @brief Field priority, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::LightQualityData_LightPriority  priority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightQualityData_LightQuality, shadowMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData_LightQuality, priority) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightQualityData_LightQuality) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies LightQualityData::LightQuality, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightQualityData
class CORDL_TYPE LightQualityData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using LightPriority = ::GlobalNamespace::LightQualityData_LightPriority;

using LightQuality = ::GlobalNamespace::LightQualityData_LightQuality;

/// @brief Field pc0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc0, put=__cordl_internal_set_pc0)) ::GlobalNamespace::LightQualityData_LightQuality  pc0;

/// @brief Field pc1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc1, put=__cordl_internal_set_pc1)) ::GlobalNamespace::LightQualityData_LightQuality  pc1;

/// @brief Field pc2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc2, put=__cordl_internal_set_pc2)) ::GlobalNamespace::LightQualityData_LightQuality  pc2;

/// @brief Field pc3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc3, put=__cordl_internal_set_pc3)) ::GlobalNamespace::LightQualityData_LightQuality  pc3;

/// @brief Field pc4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc4, put=__cordl_internal_set_pc4)) ::GlobalNamespace::LightQualityData_LightQuality  pc4;

/// @brief Field pc5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc5, put=__cordl_internal_set_pc5)) ::GlobalNamespace::LightQualityData_LightQuality  pc5;

/// @brief Field ps5, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ps5, put=__cordl_internal_set_ps5)) ::GlobalNamespace::LightQualityData_LightQuality  ps5;

/// @brief Field switch2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_switch2, put=__cordl_internal_set_switch2)) ::GlobalNamespace::LightQualityData_LightQuality  switch2;

/// @brief Method ApplyToLight, addr 0x1803ec820, size 0xd0, virtual false, abstract: false, final false
inline void ApplyToLight(::UnityEngine::Light*  light, int32_t  qualityIndex) ;

/// @brief Method GetQuality, addr 0x1803ec8f0, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::LightQualityData_LightQuality GetQuality(int32_t  index) ;

static inline ::GlobalNamespace::LightQualityData* New_ctor() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_pc0() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_pc0() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_pc1() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_pc1() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_pc2() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_pc2() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_pc3() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_pc3() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_pc4() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_pc4() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_pc5() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_pc5() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_ps5() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_ps5() ;

constexpr ::GlobalNamespace::LightQualityData_LightQuality const& __cordl_internal_get_switch2() const;

constexpr ::GlobalNamespace::LightQualityData_LightQuality& __cordl_internal_get_switch2() ;

constexpr void __cordl_internal_set_pc0(::GlobalNamespace::LightQualityData_LightQuality  value) ;

constexpr void __cordl_internal_set_pc1(::GlobalNamespace::LightQualityData_LightQuality  value) ;

constexpr void __cordl_internal_set_pc2(::GlobalNamespace::LightQualityData_LightQuality  value) ;

constexpr void __cordl_internal_set_pc3(::GlobalNamespace::LightQualityData_LightQuality  value) ;

constexpr void __cordl_internal_set_pc4(::GlobalNamespace::LightQualityData_LightQuality  value) ;

constexpr void __cordl_internal_set_pc5(::GlobalNamespace::LightQualityData_LightQuality  value) ;

constexpr void __cordl_internal_set_ps5(::GlobalNamespace::LightQualityData_LightQuality  value) ;

constexpr void __cordl_internal_set_switch2(::GlobalNamespace::LightQualityData_LightQuality  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightQualityData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightQualityData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightQualityData(LightQualityData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightQualityData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightQualityData(LightQualityData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4986};

/// @brief Field pc0, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___pc0;

/// @brief Field pc1, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___pc1;

/// @brief Field pc2, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___pc2;

/// @brief Field pc3, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___pc3;

/// @brief Field pc4, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___pc4;

/// @brief Field pc5, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___pc5;

/// @brief Field switch2, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___switch2;

/// @brief Field ps5, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::LightQualityData_LightQuality  ___ps5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightQualityData, ___pc0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData, ___pc1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData, ___pc2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData, ___pc3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData, ___pc4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData, ___pc5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData, ___switch2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightQualityData, ___ps5) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightQualityData) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
