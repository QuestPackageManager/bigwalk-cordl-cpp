#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectRemovalZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroEffectRemovalZone)
namespace Enviro {
struct EnviroEffectRemovalZone_Mode;
}
// Forward declare root types
namespace Enviro {
struct EnviroEffectRemovalZone_Mode;
}
namespace Enviro {
class EnviroEffectRemovalZone;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroEffectRemovalZone_Mode);
MARK_REF_T(::Enviro::EnviroEffectRemovalZone*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffectRemovalZone_Mode, "Enviro", "EnviroEffectRemovalZone/Mode");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffectRemovalZone*, "Enviro", "EnviroEffectRemovalZone");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroEffectRemovalZone/Mode
struct CORDL_TYPE EnviroEffectRemovalZone_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroEffectRemovalZone_Mode_Unwrapped
enum struct __EnviroEffectRemovalZone_Mode_Unwrapped : int32_t {
__E_Spherical = static_cast<int32_t>(0x0),
__E_Cubical = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroEffectRemovalZone_Mode_Unwrapped () const noexcept {
return static_cast<__EnviroEffectRemovalZone_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffectRemovalZone_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroEffectRemovalZone_Mode(int32_t  value__) noexcept;

/// @brief Field Cubical value: I32(1)
static ::Enviro::EnviroEffectRemovalZone_Mode const Cubical;

/// @brief Field Spherical value: I32(0)
static ::Enviro::EnviroEffectRemovalZone_Mode const Spherical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffectRemovalZone_Mode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffectRemovalZone_Mode) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroEffectRemovalZone::Mode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEffectRemovalZone
class CORDL_TYPE EnviroEffectRemovalZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::Enviro::EnviroEffectRemovalZone_Mode;

/// @brief Field density, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) float_t  density;

/// @brief Field feather, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_feather, put=__cordl_internal_set_feather)) float_t  feather;

/// @brief Field radius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field size, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Field stretch, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stretch, put=__cordl_internal_set_stretch)) float_t  stretch;

/// @brief Field type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Enviro::EnviroEffectRemovalZone_Mode  type;

/// @brief Method AddToZoneToManager, addr 0x1805fe1a0, size 0x120, virtual false, abstract: false, final false
inline void AddToZoneToManager() ;

static inline ::Enviro::EnviroEffectRemovalZone* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1805fe2c0, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1805fe2c0, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1805fe300, size 0x2a0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x1805fe5a0, size 0x140, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveZoneFromManager, addr 0x1805fe6e0, size 0x190, virtual false, abstract: false, final false
inline void RemoveZoneFromManager() ;

/// @brief Method Update, addr 0x1805fe870, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_density() const;

constexpr float_t& __cordl_internal_get_density() ;

constexpr float_t const& __cordl_internal_get_feather() const;

constexpr float_t& __cordl_internal_get_feather() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr float_t const& __cordl_internal_get_stretch() const;

constexpr float_t& __cordl_internal_get_stretch() ;

constexpr ::Enviro::EnviroEffectRemovalZone_Mode const& __cordl_internal_get_type() const;

constexpr ::Enviro::EnviroEffectRemovalZone_Mode& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_density(float_t  value) ;

constexpr void __cordl_internal_set_feather(float_t  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_stretch(float_t  value) ;

constexpr void __cordl_internal_set_type(::Enviro::EnviroEffectRemovalZone_Mode  value) ;

/// @brief Method .ctor, addr 0x1805fe8c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffectRemovalZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectRemovalZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEffectRemovalZone(EnviroEffectRemovalZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectRemovalZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEffectRemovalZone(EnviroEffectRemovalZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18407};

/// @brief Field type, offset: 0x20, size: 0x4, def value: None
 ::Enviro::EnviroEffectRemovalZone_Mode  ___type;

/// @brief Field density, offset: 0x24, size: 0x4, def value: None
 float_t  ___density;

/// @brief Field radius, offset: 0x28, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field stretch, offset: 0x2c, size: 0x4, def value: None
 float_t  ___stretch;

/// @brief Field feather, offset: 0x30, size: 0x4, def value: None
 float_t  ___feather;

/// @brief Field size, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffectRemovalZone, ___type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectRemovalZone, ___density) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectRemovalZone, ___radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectRemovalZone, ___stretch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectRemovalZone, ___feather) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectRemovalZone, ___size) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffectRemovalZone) == 0x40, "Size mismatch!");

} // namespace end def Enviro
