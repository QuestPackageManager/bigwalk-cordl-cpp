#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Terraform/TerraformData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerraformData)
namespace Rowlan::Genesis::Terraform {
struct TerraformData_FalloffMode;
}
namespace Rowlan::Genesis::Terraform {
struct TerraformData_HeightStampMode;
}
namespace Rowlan::Genesis::Terraform {
struct TerraformData_SplineMode;
}
namespace Rowlan::Genesis::Terraform {
class TerraformData_SplineSettings;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Rowlan::Genesis::Terraform {
struct TerraformData_FalloffMode;
}
namespace Rowlan::Genesis::Terraform {
struct TerraformData_HeightStampMode;
}
namespace Rowlan::Genesis::Terraform {
struct TerraformData_SplineMode;
}
namespace Rowlan::Genesis::Terraform {
class TerraformData;
}
namespace Rowlan::Genesis::Terraform {
class TerraformData_SplineSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::Terraform::TerraformData_FalloffMode);
MARK_VAL_T(::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode);
MARK_VAL_T(::Rowlan::Genesis::Terraform::TerraformData_SplineMode);
MARK_REF_T(::Rowlan::Genesis::Terraform::TerraformData*);
MARK_REF_T(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Terraform::TerraformData_FalloffMode, "Rowlan.Genesis.Terraform", "TerraformData/FalloffMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode, "Rowlan.Genesis.Terraform", "TerraformData/HeightStampMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Terraform::TerraformData_SplineMode, "Rowlan.Genesis.Terraform", "TerraformData/SplineMode");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Terraform::TerraformData*, "Rowlan.Genesis.Terraform", "TerraformData");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*, "Rowlan.Genesis.Terraform", "TerraformData/SplineSettings");
// Dependencies 
namespace Rowlan::Genesis::Terraform {
// Is value type: true
// CS Name: Rowlan.Genesis.Terraform.TerraformData/HeightStampMode
struct CORDL_TYPE TerraformData_HeightStampMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerraformData_HeightStampMode_Unwrapped
enum struct __TerraformData_HeightStampMode_Unwrapped : int32_t {
__E_Transform = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerraformData_HeightStampMode_Unwrapped () const noexcept {
return static_cast<__TerraformData_HeightStampMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerraformData_HeightStampMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerraformData_HeightStampMode(int32_t  value__) noexcept;

/// @brief Field Transform value: I32(0)
static ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode const Transform;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20395};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Terraform
// Dependencies 
namespace Rowlan::Genesis::Terraform {
// Is value type: true
// CS Name: Rowlan.Genesis.Terraform.TerraformData/SplineMode
struct CORDL_TYPE TerraformData_SplineMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerraformData_SplineMode_Unwrapped
enum struct __TerraformData_SplineMode_Unwrapped : int32_t {
__E_Operations = static_cast<int32_t>(0x0),
__E_Shape = static_cast<int32_t>(0x1),
__E_Mask = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerraformData_SplineMode_Unwrapped () const noexcept {
return static_cast<__TerraformData_SplineMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerraformData_SplineMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerraformData_SplineMode(int32_t  value__) noexcept;

/// @brief Field Mask value: I32(2)
static ::Rowlan::Genesis::Terraform::TerraformData_SplineMode const Mask;

/// @brief Field Operations value: I32(0)
static ::Rowlan::Genesis::Terraform::TerraformData_SplineMode const Operations;

/// @brief Field Shape value: I32(1)
static ::Rowlan::Genesis::Terraform::TerraformData_SplineMode const Shape;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20396};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData_SplineMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Terraform::TerraformData_SplineMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Terraform
// Dependencies 
namespace Rowlan::Genesis::Terraform {
// Is value type: true
// CS Name: Rowlan.Genesis.Terraform.TerraformData/FalloffMode
struct CORDL_TYPE TerraformData_FalloffMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerraformData_FalloffMode_Unwrapped
enum struct __TerraformData_FalloffMode_Unwrapped : int32_t {
__E_Hierarchy = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerraformData_FalloffMode_Unwrapped () const noexcept {
return static_cast<__TerraformData_FalloffMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerraformData_FalloffMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerraformData_FalloffMode(int32_t  value__) noexcept;

/// @brief Field Hierarchy value: I32(0)
static ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode const Hierarchy;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData_FalloffMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Terraform::TerraformData_FalloffMode) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Terraform
// Dependencies System.Object, UnityEngine.Vector2
namespace Rowlan::Genesis::Terraform {
// Is value type: false
// CS Name: Rowlan.Genesis.Terraform.TerraformData/SplineSettings
class CORDL_TYPE TerraformData_SplineSettings : public ::System::Object {
public:
// Declarations
/// @brief Field deformationAngle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_deformationAngle, put=__cordl_internal_set_deformationAngle)) ::UnityEngine::Vector2  deformationAngle;

/// @brief Field douglasPeuckerReductionTolerance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_douglasPeuckerReductionTolerance, put=__cordl_internal_set_douglasPeuckerReductionTolerance)) float_t  douglasPeuckerReductionTolerance;

/// @brief Field subdivisionRange, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_subdivisionRange, put=__cordl_internal_set_subdivisionRange)) ::UnityEngine::Vector2  subdivisionRange;

static inline ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_deformationAngle() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_deformationAngle() ;

constexpr float_t const& __cordl_internal_get_douglasPeuckerReductionTolerance() const;

constexpr float_t& __cordl_internal_get_douglasPeuckerReductionTolerance() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_subdivisionRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_subdivisionRange() ;

constexpr void __cordl_internal_set_deformationAngle(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_douglasPeuckerReductionTolerance(float_t  value) ;

constexpr void __cordl_internal_set_subdivisionRange(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x181abfa90, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerraformData_SplineSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerraformData_SplineSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerraformData_SplineSettings(TerraformData_SplineSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerraformData_SplineSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerraformData_SplineSettings(TerraformData_SplineSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20398};

/// @brief Field deformationAngle, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___deformationAngle;

/// @brief Field subdivisionRange, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___subdivisionRange;

/// @brief Field douglasPeuckerReductionTolerance, offset: 0x20, size: 0x4, def value: None
 float_t  ___douglasPeuckerReductionTolerance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings, ___deformationAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings, ___subdivisionRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings, ___douglasPeuckerReductionTolerance) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Terraform
// Dependencies Rowlan.Genesis.Terraform.TerraformData::FalloffMode, Rowlan.Genesis.Terraform.TerraformData::HeightStampMode, Rowlan.Genesis.Terraform.TerraformData::SplineMode, UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Terraform {
// Is value type: false
// CS Name: Rowlan.Genesis.Terraform.TerraformData
class CORDL_TYPE TerraformData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FalloffMode = ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode;

using HeightStampMode = ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode;

using SplineMode = ::Rowlan::Genesis::Terraform::TerraformData_SplineMode;

using SplineSettings = ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings;

/// @brief Field autoAssignment, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoAssignment, put=__cordl_internal_set_autoAssignment)) bool  autoAssignment;

/// @brief Field falloffMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_falloffMode, put=__cordl_internal_set_falloffMode)) ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode  falloffMode;

/// @brief Field gameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field heightStampMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightStampMode, put=__cordl_internal_set_heightStampMode)) ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode  heightStampMode;

/// @brief Field helpBoxVisible, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_helpBoxVisible, put=__cordl_internal_set_helpBoxVisible)) bool  helpBoxVisible;

/// @brief Field splineMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_splineMode, put=__cordl_internal_set_splineMode)) ::Rowlan::Genesis::Terraform::TerraformData_SplineMode  splineMode;

/// @brief Field splineSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineSettings, put=__cordl_internal_set_splineSettings)) ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*  splineSettings;

static inline ::Rowlan::Genesis::Terraform::TerraformData* New_ctor() ;

/// @brief Method Reset, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_autoAssignment() const;

constexpr bool& __cordl_internal_get_autoAssignment() ;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode const& __cordl_internal_get_falloffMode() const;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode& __cordl_internal_get_falloffMode() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode const& __cordl_internal_get_heightStampMode() const;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode& __cordl_internal_get_heightStampMode() ;

constexpr bool const& __cordl_internal_get_helpBoxVisible() const;

constexpr bool& __cordl_internal_get_helpBoxVisible() ;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode const& __cordl_internal_get_splineMode() const;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode& __cordl_internal_get_splineMode() ;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings* const& __cordl_internal_get_splineSettings() const;

constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*& __cordl_internal_get_splineSettings() ;

constexpr void __cordl_internal_set_autoAssignment(bool  value) ;

constexpr void __cordl_internal_set_falloffMode(::Rowlan::Genesis::Terraform::TerraformData_FalloffMode  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_heightStampMode(::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode  value) ;

constexpr void __cordl_internal_set_helpBoxVisible(bool  value) ;

constexpr void __cordl_internal_set_splineMode(::Rowlan::Genesis::Terraform::TerraformData_SplineMode  value) ;

constexpr void __cordl_internal_set_splineSettings(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*  value) ;

/// @brief Method .ctor, addr 0x181abfba0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerraformData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerraformData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerraformData(TerraformData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerraformData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerraformData(TerraformData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20399};

/// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field autoAssignment, offset: 0x20, size: 0x1, def value: None
 bool  ___autoAssignment;

/// @brief Field helpBoxVisible, offset: 0x21, size: 0x1, def value: None
 bool  ___helpBoxVisible;

/// @brief Field splineMode, offset: 0x24, size: 0x4, def value: None
 ::Rowlan::Genesis::Terraform::TerraformData_SplineMode  ___splineMode;

/// @brief Field splineSettings, offset: 0x28, size: 0x8, def value: None
 ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*  ___splineSettings;

/// @brief Field heightStampMode, offset: 0x30, size: 0x4, def value: None
 ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode  ___heightStampMode;

/// @brief Field falloffMode, offset: 0x34, size: 0x4, def value: None
 ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode  ___falloffMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData, ___autoAssignment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData, ___helpBoxVisible) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData, ___splineMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData, ___splineSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData, ___heightStampMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Terraform::TerraformData, ___falloffMode) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Terraform::TerraformData) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Terraform
