#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Roads/RoadsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoadsData)
namespace Rowlan::Genesis::Roads {
class RoadSystemSettings_RoadsData_JitterSettings;
}
namespace Rowlan::Genesis::Roads {
struct RoadsData_IntersectionMode;
}
namespace Rowlan::Genesis::Roads {
struct RoadsData_RoadMode;
}
namespace Rowlan::Genesis::Roads {
class RoadsData_RoadSettings;
}
namespace Rowlan::Genesis::Roads {
struct RoadsData_RoadSystemMode;
}
namespace Rowlan::Genesis::Roads {
class RoadsData_RoadSystemSettings;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Rowlan::Genesis::Roads {
struct RoadsData_IntersectionMode;
}
namespace Rowlan::Genesis::Roads {
struct RoadsData_RoadMode;
}
namespace Rowlan::Genesis::Roads {
struct RoadsData_RoadSystemMode;
}
namespace Rowlan::Genesis::Roads {
class RoadSystemSettings_RoadsData_JitterSettings;
}
namespace Rowlan::Genesis::Roads {
class RoadsData;
}
namespace Rowlan::Genesis::Roads {
class RoadsData_RoadSettings;
}
namespace Rowlan::Genesis::Roads {
class RoadsData_RoadSystemSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::Roads::RoadsData_IntersectionMode);
MARK_VAL_T(::Rowlan::Genesis::Roads::RoadsData_RoadMode);
MARK_VAL_T(::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode);
MARK_REF_T(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*);
MARK_REF_T(::Rowlan::Genesis::Roads::RoadsData*);
MARK_REF_T(::Rowlan::Genesis::Roads::RoadsData_RoadSettings*);
MARK_REF_T(::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::RoadsData_IntersectionMode, "Rowlan.Genesis.Roads", "RoadsData/IntersectionMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::RoadsData_RoadMode, "Rowlan.Genesis.Roads", "RoadsData/RoadMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode, "Rowlan.Genesis.Roads", "RoadsData/RoadSystemMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*, "Rowlan.Genesis.Roads", "RoadsData/RoadSystemSettings/JitterSettings");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::RoadsData*, "Rowlan.Genesis.Roads", "RoadsData");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::RoadsData_RoadSettings*, "Rowlan.Genesis.Roads", "RoadsData/RoadSettings");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*, "Rowlan.Genesis.Roads", "RoadsData/RoadSystemSettings");
// Dependencies 
namespace Rowlan::Genesis::Roads {
// Is value type: true
// CS Name: Rowlan.Genesis.Roads.RoadsData/RoadSystemMode
struct CORDL_TYPE RoadsData_RoadSystemMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RoadsData_RoadSystemMode_Unwrapped
enum struct __RoadsData_RoadSystemMode_Unwrapped : int32_t {
__E_Design = static_cast<int32_t>(0x0),
__E_Batch = static_cast<int32_t>(0x1),
__E_Global = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoadsData_RoadSystemMode_Unwrapped () const noexcept {
return static_cast<__RoadsData_RoadSystemMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RoadsData_RoadSystemMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoadsData_RoadSystemMode(int32_t  value__) noexcept;

/// @brief Field Batch value: I32(1)
static ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode const Batch;

/// @brief Field Design value: I32(0)
static ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode const Design;

/// @brief Field Global value: I32(2)
static ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode const Global;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
// Dependencies 
namespace Rowlan::Genesis::Roads {
// Is value type: true
// CS Name: Rowlan.Genesis.Roads.RoadsData/IntersectionMode
struct CORDL_TYPE RoadsData_IntersectionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RoadsData_IntersectionMode_Unwrapped
enum struct __RoadsData_IntersectionMode_Unwrapped : int32_t {
__E_Design = static_cast<int32_t>(0x0),
__E_Align = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoadsData_IntersectionMode_Unwrapped () const noexcept {
return static_cast<__RoadsData_IntersectionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RoadsData_IntersectionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoadsData_IntersectionMode(int32_t  value__) noexcept;

/// @brief Field Align value: I32(1)
static ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode const Align;

/// @brief Field Design value: I32(0)
static ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode const Design;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData_IntersectionMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::RoadsData_IntersectionMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
// Dependencies 
namespace Rowlan::Genesis::Roads {
// Is value type: true
// CS Name: Rowlan.Genesis.Roads.RoadsData/RoadMode
struct CORDL_TYPE RoadsData_RoadMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RoadsData_RoadMode_Unwrapped
enum struct __RoadsData_RoadMode_Unwrapped : int32_t {
__E_Design = static_cast<int32_t>(0x0),
__E_Objects = static_cast<int32_t>(0x1),
__E_Align = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoadsData_RoadMode_Unwrapped () const noexcept {
return static_cast<__RoadsData_RoadMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RoadsData_RoadMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoadsData_RoadMode(int32_t  value__) noexcept;

/// @brief Field Align value: I32(2)
static ::Rowlan::Genesis::Roads::RoadsData_RoadMode const Align;

/// @brief Field Design value: I32(0)
static ::Rowlan::Genesis::Roads::RoadsData_RoadMode const Design;

/// @brief Field Objects value: I32(1)
static ::Rowlan::Genesis::Roads::RoadsData_RoadMode const Objects;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData_RoadMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::RoadsData_RoadMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
// Dependencies System.Object, UnityEngine.Vector2
namespace Rowlan::Genesis::Roads {
// Is value type: false
// CS Name: Rowlan.Genesis.Roads.RoadsData/RoadSystemSettings/JitterSettings
class CORDL_TYPE RoadSystemSettings_RoadsData_JitterSettings : public ::System::Object {
public:
// Declarations
/// @brief Field heightOffset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightOffset, put=__cordl_internal_set_heightOffset)) ::UnityEngine::Vector2  heightOffset;

/// @brief Field positionOffset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionOffset, put=__cordl_internal_set_positionOffset)) ::UnityEngine::Vector2  positionOffset;

/// @brief Field rotationOffset, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationOffset, put=__cordl_internal_set_rotationOffset)) ::UnityEngine::Vector2  rotationOffset;

static inline ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_heightOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_heightOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_positionOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_positionOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rotationOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rotationOffset() ;

constexpr void __cordl_internal_set_heightOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_positionOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x181abead0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadSystemSettings_RoadsData_JitterSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadSystemSettings_RoadsData_JitterSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadSystemSettings_RoadsData_JitterSettings(RoadSystemSettings_RoadsData_JitterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadSystemSettings_RoadsData_JitterSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadSystemSettings_RoadsData_JitterSettings(RoadSystemSettings_RoadsData_JitterSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20408};

/// @brief Field rotationOffset, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rotationOffset;

/// @brief Field heightOffset, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___heightOffset;

/// @brief Field positionOffset, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___positionOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings, ___rotationOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings, ___heightOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings, ___positionOffset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
// Dependencies System.Object
namespace Rowlan::Genesis::Roads {
// Is value type: false
// CS Name: Rowlan.Genesis.Roads.RoadsData/RoadSystemSettings
class CORDL_TYPE RoadsData_RoadSystemSettings : public ::System::Object {
public:
// Declarations
using JitterSettings = ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings;

/// @brief Field jitterSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_jitterSettings, put=__cordl_internal_set_jitterSettings)) ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*  jitterSettings;

static inline ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings* New_ctor() ;

constexpr ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings* const& __cordl_internal_get_jitterSettings() const;

constexpr ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*& __cordl_internal_get_jitterSettings() ;

constexpr void __cordl_internal_set_jitterSettings(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*  value) ;

/// @brief Method .ctor, addr 0x181abf980, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadsData_RoadSystemSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadsData_RoadSystemSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadsData_RoadSystemSettings(RoadsData_RoadSystemSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadsData_RoadSystemSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadsData_RoadSystemSettings(RoadsData_RoadSystemSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20409};

/// @brief Field jitterSettings, offset: 0x10, size: 0x8, def value: None
 ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*  ___jitterSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings, ___jitterSettings) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings) == 0x18, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
// Dependencies System.Object
namespace Rowlan::Genesis::Roads {
// Is value type: false
// CS Name: Rowlan.Genesis.Roads.RoadsData/RoadSettings
class CORDL_TYPE RoadsData_RoadSettings : public ::System::Object {
public:
// Declarations
static inline ::Rowlan::Genesis::Roads::RoadsData_RoadSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadsData_RoadSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadsData_RoadSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadsData_RoadSettings(RoadsData_RoadSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadsData_RoadSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadsData_RoadSettings(RoadsData_RoadSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::Roads::RoadsData_RoadSettings) == 0x10, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
// Dependencies Rowlan.Genesis.Roads.RoadsData::IntersectionMode, Rowlan.Genesis.Roads.RoadsData::RoadMode, Rowlan.Genesis.Roads.RoadsData::RoadSystemMode, UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Roads {
// Is value type: false
// CS Name: Rowlan.Genesis.Roads.RoadsData
class CORDL_TYPE RoadsData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using IntersectionMode = ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode;

using RoadMode = ::Rowlan::Genesis::Roads::RoadsData_RoadMode;

using RoadSettings = ::Rowlan::Genesis::Roads::RoadsData_RoadSettings;

using RoadSystemMode = ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode;

using RoadSystemSettings = ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings;

/// @brief Field autoAssignment, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoAssignment, put=__cordl_internal_set_autoAssignment)) bool  autoAssignment;

/// @brief Field gameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field helpBoxVisible, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_helpBoxVisible, put=__cordl_internal_set_helpBoxVisible)) bool  helpBoxVisible;

/// @brief Field intersectionMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_intersectionMode, put=__cordl_internal_set_intersectionMode)) ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode  intersectionMode;

/// @brief Field roadMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_roadMode, put=__cordl_internal_set_roadMode)) ::Rowlan::Genesis::Roads::RoadsData_RoadMode  roadMode;

/// @brief Field roadSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_roadSettings, put=__cordl_internal_set_roadSettings)) ::Rowlan::Genesis::Roads::RoadsData_RoadSettings*  roadSettings;

/// @brief Field roadSystemMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_roadSystemMode, put=__cordl_internal_set_roadSystemMode)) ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode  roadSystemMode;

/// @brief Field roadSystemSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_roadSystemSettings, put=__cordl_internal_set_roadSystemSettings)) ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*  roadSystemSettings;

static inline ::Rowlan::Genesis::Roads::RoadsData* New_ctor() ;

/// @brief Method Reset, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_autoAssignment() const;

constexpr bool& __cordl_internal_get_autoAssignment() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr bool const& __cordl_internal_get_helpBoxVisible() const;

constexpr bool& __cordl_internal_get_helpBoxVisible() ;

constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode const& __cordl_internal_get_intersectionMode() const;

constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode& __cordl_internal_get_intersectionMode() ;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode const& __cordl_internal_get_roadMode() const;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode& __cordl_internal_get_roadMode() ;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSettings* const& __cordl_internal_get_roadSettings() const;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSettings*& __cordl_internal_get_roadSettings() ;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode const& __cordl_internal_get_roadSystemMode() const;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode& __cordl_internal_get_roadSystemMode() ;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings* const& __cordl_internal_get_roadSystemSettings() const;

constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*& __cordl_internal_get_roadSystemSettings() ;

constexpr void __cordl_internal_set_autoAssignment(bool  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_helpBoxVisible(bool  value) ;

constexpr void __cordl_internal_set_intersectionMode(::Rowlan::Genesis::Roads::RoadsData_IntersectionMode  value) ;

constexpr void __cordl_internal_set_roadMode(::Rowlan::Genesis::Roads::RoadsData_RoadMode  value) ;

constexpr void __cordl_internal_set_roadSettings(::Rowlan::Genesis::Roads::RoadsData_RoadSettings*  value) ;

constexpr void __cordl_internal_set_roadSystemMode(::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode  value) ;

constexpr void __cordl_internal_set_roadSystemSettings(::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*  value) ;

/// @brief Method .ctor, addr 0x181abf9d0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadsData(RoadsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadsData(RoadsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20411};

/// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field autoAssignment, offset: 0x20, size: 0x1, def value: None
 bool  ___autoAssignment;

/// @brief Field helpBoxVisible, offset: 0x21, size: 0x1, def value: None
 bool  ___helpBoxVisible;

/// @brief Field roadSystemMode, offset: 0x24, size: 0x4, def value: None
 ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode  ___roadSystemMode;

/// @brief Field roadSystemSettings, offset: 0x28, size: 0x8, def value: None
 ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*  ___roadSystemSettings;

/// @brief Field roadMode, offset: 0x30, size: 0x4, def value: None
 ::Rowlan::Genesis::Roads::RoadsData_RoadMode  ___roadMode;

/// @brief Field roadSettings, offset: 0x38, size: 0x8, def value: None
 ::Rowlan::Genesis::Roads::RoadsData_RoadSettings*  ___roadSettings;

/// @brief Field intersectionMode, offset: 0x40, size: 0x4, def value: None
 ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode  ___intersectionMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___autoAssignment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___helpBoxVisible) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___roadSystemMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___roadSystemSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___roadMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___roadSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Roads::RoadsData, ___intersectionMode) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Roads::RoadsData) == 0x48, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
