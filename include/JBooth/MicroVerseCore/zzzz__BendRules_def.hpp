#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BendRules.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BendRules)
namespace JBooth::MicroVerseCore {
struct BendRules_CapMode;
}
namespace JBooth::MicroVerseCore {
struct BendRules_CullMode;
}
namespace JBooth::MicroVerseCore {
struct BendRules_Mode;
}
namespace JBooth::MicroVerseCore {
class BendRules_PlaceRules;
}
namespace JBooth::MicroVerseCore {
class BendRules_SpawnRules;
}
namespace Unity::Mathematics {
struct Random;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct BendRules_CapMode;
}
namespace JBooth::MicroVerseCore {
struct BendRules_CullMode;
}
namespace JBooth::MicroVerseCore {
struct BendRules_Mode;
}
namespace JBooth::MicroVerseCore {
class BendRules;
}
namespace JBooth::MicroVerseCore {
class BendRules_PlaceRules;
}
namespace JBooth::MicroVerseCore {
class BendRules_SpawnRules;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::BendRules_CapMode);
MARK_VAL_T(::JBooth::MicroVerseCore::BendRules_CullMode);
MARK_VAL_T(::JBooth::MicroVerseCore::BendRules_Mode);
MARK_REF_T(::JBooth::MicroVerseCore::BendRules*);
MARK_REF_T(::JBooth::MicroVerseCore::BendRules_PlaceRules*);
MARK_REF_T(::JBooth::MicroVerseCore::BendRules_SpawnRules*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BendRules_CapMode, "JBooth.MicroVerseCore", "BendRules/CapMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BendRules_CullMode, "JBooth.MicroVerseCore", "BendRules/CullMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BendRules_Mode, "JBooth.MicroVerseCore", "BendRules/Mode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BendRules*, "JBooth.MicroVerseCore", "BendRules");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BendRules_PlaceRules*, "JBooth.MicroVerseCore", "BendRules/PlaceRules");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BendRules_SpawnRules*, "JBooth.MicroVerseCore", "BendRules/SpawnRules");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.BendRules/Mode
struct CORDL_TYPE BendRules_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BendRules_Mode_Unwrapped
enum struct __BendRules_Mode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Bend = static_cast<int32_t>(0x0),
__E_Place = static_cast<int32_t>(0x1),
__E_PlaceRotate = static_cast<int32_t>(0x2),
__E_PlaceRotateNoSlope = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BendRules_Mode_Unwrapped () const noexcept {
return static_cast<__BendRules_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BendRules_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BendRules_Mode(int32_t  value__) noexcept;

/// @brief Field Bend value: I32(0)
static ::JBooth::MicroVerseCore::BendRules_Mode const Bend;

/// @brief Field None value: I32(-1)
static ::JBooth::MicroVerseCore::BendRules_Mode const None;

/// @brief Field Place value: I32(1)
static ::JBooth::MicroVerseCore::BendRules_Mode const Place;

/// @brief Field PlaceRotate value: I32(2)
static ::JBooth::MicroVerseCore::BendRules_Mode const PlaceRotate;

/// @brief Field PlaceRotateNoSlope value: I32(3)
static ::JBooth::MicroVerseCore::BendRules_Mode const PlaceRotateNoSlope;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17928};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_Mode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BendRules_Mode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.BendRules/CapMode
struct CORDL_TYPE BendRules_CapMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BendRules_CapMode_Unwrapped
enum struct __BendRules_CapMode_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_BeginOnly = static_cast<int32_t>(0x1),
__E_Along = static_cast<int32_t>(0x2),
__E_EndOnly = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BendRules_CapMode_Unwrapped () const noexcept {
return static_cast<__BendRules_CapMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BendRules_CapMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BendRules_CapMode(int32_t  value__) noexcept;

/// @brief Field Along value: I32(2)
static ::JBooth::MicroVerseCore::BendRules_CapMode const Along;

/// @brief Field Always value: I32(0)
static ::JBooth::MicroVerseCore::BendRules_CapMode const Always;

/// @brief Field BeginOnly value: I32(1)
static ::JBooth::MicroVerseCore::BendRules_CapMode const BeginOnly;

/// @brief Field EndOnly value: I32(3)
static ::JBooth::MicroVerseCore::BendRules_CapMode const EndOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_CapMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BendRules_CapMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.BendRules/CullMode
struct CORDL_TYPE BendRules_CullMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BendRules_CullMode_Unwrapped
enum struct __BendRules_CullMode_Unwrapped : int32_t {
__E_Cull = static_cast<int32_t>(0x0),
__E_Clamp = static_cast<int32_t>(0x1),
__E_Overflow = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BendRules_CullMode_Unwrapped () const noexcept {
return static_cast<__BendRules_CullMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BendRules_CullMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BendRules_CullMode(int32_t  value__) noexcept;

/// @brief Field Clamp value: I32(1)
static ::JBooth::MicroVerseCore::BendRules_CullMode const Clamp;

/// @brief Field Cull value: I32(0)
static ::JBooth::MicroVerseCore::BendRules_CullMode const Cull;

/// @brief Field Overflow value: I32(2)
static ::JBooth::MicroVerseCore::BendRules_CullMode const Overflow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_CullMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BendRules_CullMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.BendRules::CapMode, JBooth.MicroVerseCore.BendRules::CullMode, System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.BendRules/SpawnRules
class CORDL_TYPE BendRules_SpawnRules : public ::System::Object {
public:
// Declarations
/// @brief Field capMode, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_capMode, put=__cordl_internal_set_capMode)) ::JBooth::MicroVerseCore::BendRules_CapMode  capMode;

/// @brief Field chance, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_chance, put=__cordl_internal_set_chance)) float_t  chance;

/// @brief Field cullingMode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cullingMode, put=__cordl_internal_set_cullingMode)) ::JBooth::MicroVerseCore::BendRules_CullMode  cullingMode;

/// @brief Field requiredLeft, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredLeft, put=__cordl_internal_set_requiredLeft)) float_t  requiredLeft;

static inline ::JBooth::MicroVerseCore::BendRules_SpawnRules* New_ctor() ;

constexpr ::JBooth::MicroVerseCore::BendRules_CapMode const& __cordl_internal_get_capMode() const;

constexpr ::JBooth::MicroVerseCore::BendRules_CapMode& __cordl_internal_get_capMode() ;

constexpr float_t const& __cordl_internal_get_chance() const;

constexpr float_t& __cordl_internal_get_chance() ;

constexpr ::JBooth::MicroVerseCore::BendRules_CullMode const& __cordl_internal_get_cullingMode() const;

constexpr ::JBooth::MicroVerseCore::BendRules_CullMode& __cordl_internal_get_cullingMode() ;

constexpr float_t const& __cordl_internal_get_requiredLeft() const;

constexpr float_t& __cordl_internal_get_requiredLeft() ;

constexpr void __cordl_internal_set_capMode(::JBooth::MicroVerseCore::BendRules_CapMode  value) ;

constexpr void __cordl_internal_set_chance(float_t  value) ;

constexpr void __cordl_internal_set_cullingMode(::JBooth::MicroVerseCore::BendRules_CullMode  value) ;

constexpr void __cordl_internal_set_requiredLeft(float_t  value) ;

/// @brief Method .ctor, addr 0x181417850, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BendRules_SpawnRules() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BendRules_SpawnRules", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BendRules_SpawnRules(BendRules_SpawnRules && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BendRules_SpawnRules", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BendRules_SpawnRules(BendRules_SpawnRules const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17931};

/// @brief Field chance, offset: 0x10, size: 0x4, def value: None
 float_t  ___chance;

/// @brief Field capMode, offset: 0x14, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BendRules_CapMode  ___capMode;

/// @brief Field requiredLeft, offset: 0x18, size: 0x4, def value: None
 float_t  ___requiredLeft;

/// @brief Field cullingMode, offset: 0x1c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BendRules_CullMode  ___cullingMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_SpawnRules, ___chance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_SpawnRules, ___capMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_SpawnRules, ___requiredLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_SpawnRules, ___cullingMode) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BendRules_SpawnRules) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object, UnityEngine.Vector3
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.BendRules/PlaceRules
class CORDL_TYPE BendRules_PlaceRules : public ::System::Object {
public:
// Declarations
/// @brief Field positionVariance, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_positionVariance, put=__cordl_internal_set_positionVariance)) ::UnityEngine::Vector3  positionVariance;

/// @brief Field rotationVariance, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationVariance, put=__cordl_internal_set_rotationVariance)) ::UnityEngine::Vector3  rotationVariance;

/// @brief Field scaleUniform, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleUniform, put=__cordl_internal_set_scaleUniform)) bool  scaleUniform;

/// @brief Field scaleVariant, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_scaleVariant, put=__cordl_internal_set_scaleVariant)) ::UnityEngine::Vector3  scaleVariant;

static inline ::JBooth::MicroVerseCore::BendRules_PlaceRules* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_positionVariance() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_positionVariance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationVariance() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationVariance() ;

constexpr bool const& __cordl_internal_get_scaleUniform() const;

constexpr bool& __cordl_internal_get_scaleUniform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scaleVariant() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scaleVariant() ;

constexpr void __cordl_internal_set_positionVariance(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotationVariance(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scaleUniform(bool  value) ;

constexpr void __cordl_internal_set_scaleVariant(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x18140ddd0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BendRules_PlaceRules() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BendRules_PlaceRules", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BendRules_PlaceRules(BendRules_PlaceRules && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BendRules_PlaceRules", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BendRules_PlaceRules(BendRules_PlaceRules const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17932};

/// @brief Field positionVariance, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___positionVariance;

/// @brief Field rotationVariance, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationVariance;

/// @brief Field scaleVariant, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scaleVariant;

/// @brief Field scaleUniform, offset: 0x34, size: 0x1, def value: None
 bool  ___scaleUniform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_PlaceRules, ___positionVariance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_PlaceRules, ___rotationVariance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_PlaceRules, ___scaleVariant) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules_PlaceRules, ___scaleUniform) == 0x34, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BendRules_PlaceRules) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.BendRules::Mode, UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.BendRules
class CORDL_TYPE BendRules : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CapMode = ::JBooth::MicroVerseCore::BendRules_CapMode;

using CullMode = ::JBooth::MicroVerseCore::BendRules_CullMode;

using Mode = ::JBooth::MicroVerseCore::BendRules_Mode;

using PlaceRules = ::JBooth::MicroVerseCore::BendRules_PlaceRules;

using SpawnRules = ::JBooth::MicroVerseCore::BendRules_SpawnRules;

/// @brief Field mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::JBooth::MicroVerseCore::BendRules_Mode  mode;

/// @brief Field placeRules, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeRules, put=__cordl_internal_set_placeRules)) ::JBooth::MicroVerseCore::BendRules_PlaceRules*  placeRules;

/// @brief Field spawnRules, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnRules, put=__cordl_internal_set_spawnRules)) ::JBooth::MicroVerseCore::BendRules_SpawnRules*  spawnRules;

/// @brief Method GetDesiredCapMode, addr 0x181405bf0, size 0x20, virtual false, abstract: false, final false
static inline ::JBooth::MicroVerseCore::BendRules_CapMode GetDesiredCapMode(float_t  remainingLength, float_t  meshLength, float_t  totalLength) ;

static inline ::JBooth::MicroVerseCore::BendRules* New_ctor() ;

/// @brief Method ShouldSpawn, addr 0x181405c10, size 0xc0, virtual false, abstract: false, final false
static inline bool ShouldSpawn(::JBooth::MicroVerseCore::BendRules*  rules, float_t  curLength, float_t  meshLength, float_t  totalLength, ::Unity::Mathematics::Random  rand) ;

constexpr ::JBooth::MicroVerseCore::BendRules_Mode const& __cordl_internal_get_mode() const;

constexpr ::JBooth::MicroVerseCore::BendRules_Mode& __cordl_internal_get_mode() ;

constexpr ::JBooth::MicroVerseCore::BendRules_PlaceRules* const& __cordl_internal_get_placeRules() const;

constexpr ::JBooth::MicroVerseCore::BendRules_PlaceRules*& __cordl_internal_get_placeRules() ;

constexpr ::JBooth::MicroVerseCore::BendRules_SpawnRules* const& __cordl_internal_get_spawnRules() const;

constexpr ::JBooth::MicroVerseCore::BendRules_SpawnRules*& __cordl_internal_get_spawnRules() ;

constexpr void __cordl_internal_set_mode(::JBooth::MicroVerseCore::BendRules_Mode  value) ;

constexpr void __cordl_internal_set_placeRules(::JBooth::MicroVerseCore::BendRules_PlaceRules*  value) ;

constexpr void __cordl_internal_set_spawnRules(::JBooth::MicroVerseCore::BendRules_SpawnRules*  value) ;

/// @brief Method .ctor, addr 0x181405cd0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BendRules() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BendRules", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BendRules(BendRules && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BendRules", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BendRules(BendRules const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17933};

/// @brief Field mode, offset: 0x20, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BendRules_Mode  ___mode;

/// @brief Field spawnRules, offset: 0x28, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::BendRules_SpawnRules*  ___spawnRules;

/// @brief Field placeRules, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::BendRules_PlaceRules*  ___placeRules;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BendRules, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules, ___spawnRules) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendRules, ___placeRules) == 0x30, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BendRules) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
