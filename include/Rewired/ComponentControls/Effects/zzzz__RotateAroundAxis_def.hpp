#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Effects/RotateAroundAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotateAroundAxis)
namespace Rewired::ComponentControls::Effects {
struct RotateAroundAxis_RotationAxis;
}
namespace Rewired::ComponentControls::Effects {
struct RotateAroundAxis_Speed;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::ComponentControls::Effects {
struct RotateAroundAxis_RotationAxis;
}
namespace Rewired::ComponentControls::Effects {
struct RotateAroundAxis_Speed;
}
namespace Rewired::ComponentControls::Effects {
class RotateAroundAxis;
}
// Write type traits
MARK_VAL_T(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis);
MARK_VAL_T(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed);
MARK_REF_T(::Rewired::ComponentControls::Effects::RotateAroundAxis*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis, "Rewired.ComponentControls.Effects", "RotateAroundAxis/RotationAxis");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed, "Rewired.ComponentControls.Effects", "RotateAroundAxis/Speed");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Effects::RotateAroundAxis*, "Rewired.ComponentControls.Effects", "RotateAroundAxis");
// Dependencies 
namespace Rewired::ComponentControls::Effects {
// Is value type: true
// CS Name: Rewired.ComponentControls.Effects.RotateAroundAxis/Speed
struct CORDL_TYPE RotateAroundAxis_Speed {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotateAroundAxis_Speed_Unwrapped
enum struct __RotateAroundAxis_Speed_Unwrapped : int32_t {
__E_Stopped = static_cast<int32_t>(0x0),
__E_Slow = static_cast<int32_t>(0x1),
__E_Fast = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotateAroundAxis_Speed_Unwrapped () const noexcept {
return static_cast<__RotateAroundAxis_Speed_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotateAroundAxis_Speed() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RotateAroundAxis_Speed(int32_t  value__) noexcept;

/// @brief Field Fast value: I32(2)
static ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed const Fast;

/// @brief Field Slow value: I32(1)
static ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed const Slow;

/// @brief Field Stopped value: I32(0)
static ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed const Stopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Effects
// Dependencies 
namespace Rewired::ComponentControls::Effects {
// Is value type: true
// CS Name: Rewired.ComponentControls.Effects.RotateAroundAxis/RotationAxis
struct CORDL_TYPE RotateAroundAxis_RotationAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotateAroundAxis_RotationAxis_Unwrapped
enum struct __RotateAroundAxis_RotationAxis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotateAroundAxis_RotationAxis_Unwrapped () const noexcept {
return static_cast<__RotateAroundAxis_RotationAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotateAroundAxis_RotationAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RotateAroundAxis_RotationAxis(int32_t  value__) noexcept;

/// @brief Field X value: I32(0)
static ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis const X;

/// @brief Field Y value: I32(1)
static ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis const Y;

/// @brief Field Z value: I32(2)
static ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Effects
// Dependencies Rewired.ComponentControls.Effects.RotateAroundAxis::RotationAxis, Rewired.ComponentControls.Effects.RotateAroundAxis::Speed, UnityEngine.MonoBehaviour, UnityEngine.Space
namespace Rewired::ComponentControls::Effects {
// Is value type: false
// CS Name: Rewired.ComponentControls.Effects.RotateAroundAxis
class CORDL_TYPE RotateAroundAxis : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationAxis = ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis;

using Speed = ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed;

/// @brief Field _fastRotationSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fastRotationSpeed, put=__cordl_internal_set__fastRotationSpeed)) float_t  _fastRotationSpeed;

/// @brief Field _relativeTo, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityEngine::Space  _relativeTo;

/// @brief Field _reverse, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__reverse, put=__cordl_internal_set__reverse)) bool  _reverse;

/// @brief Field _rotateAroundAxis, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotateAroundAxis, put=__cordl_internal_set__rotateAroundAxis)) ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  _rotateAroundAxis;

/// @brief Field _slowRotationSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__slowRotationSpeed, put=__cordl_internal_set__slowRotationSpeed)) float_t  _slowRotationSpeed;

/// @brief Field _speed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  _speed;

 __declspec(property(get=get_fastRotationSpeed, put=set_fastRotationSpeed)) float_t  fastRotationSpeed;

 __declspec(property(get=get_relativeTo, put=set_relativeTo)) ::UnityEngine::Space  relativeTo;

 __declspec(property(get=get_reverse, put=set_reverse)) bool  reverse;

 __declspec(property(get=get_rotateAroundAxis, put=set_rotateAroundAxis)) ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  rotateAroundAxis;

 __declspec(property(get=get_slowRotationSpeed, put=set_slowRotationSpeed)) float_t  slowRotationSpeed;

 __declspec(property(get=get_speed, put=set_speed)) ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  speed;

static inline ::Rewired::ComponentControls::Effects::RotateAroundAxis* New_ctor() ;

/// @brief Method SetSpeed, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void SetSpeed(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  speed) ;

/// @brief Method SetSpeed, addr 0x1818f3af0, size 0x60, virtual false, abstract: false, final false
inline void SetSpeed(int32_t  speed) ;

/// @brief Method Update, addr 0x1818f3b50, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__fastRotationSpeed() const;

constexpr float_t& __cordl_internal_get__fastRotationSpeed() ;

constexpr ::UnityEngine::Space const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityEngine::Space& __cordl_internal_get__relativeTo() ;

constexpr bool const& __cordl_internal_get__reverse() const;

constexpr bool& __cordl_internal_get__reverse() ;

constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis const& __cordl_internal_get__rotateAroundAxis() const;

constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis& __cordl_internal_get__rotateAroundAxis() ;

constexpr float_t const& __cordl_internal_get__slowRotationSpeed() const;

constexpr float_t& __cordl_internal_get__slowRotationSpeed() ;

constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed const& __cordl_internal_get__speed() const;

constexpr ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed& __cordl_internal_get__speed() ;

constexpr void __cordl_internal_set__fastRotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityEngine::Space  value) ;

constexpr void __cordl_internal_set__reverse(bool  value) ;

constexpr void __cordl_internal_set__rotateAroundAxis(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  value) ;

constexpr void __cordl_internal_set__slowRotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__speed(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  value) ;

/// @brief Method .ctor, addr 0x1818f3c70, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_fastRotationSpeed, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_fastRotationSpeed() ;

/// @brief Method get_relativeTo, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Space get_relativeTo() ;

/// @brief Method get_reverse, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_reverse() ;

/// @brief Method get_rotateAroundAxis, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis get_rotateAroundAxis() ;

/// @brief Method get_slowRotationSpeed, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_slowRotationSpeed() ;

/// @brief Method get_speed, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed get_speed() ;

/// @brief Method oUOpAvwVnLngqoFfiLcKwvTnOgec, addr 0x1818f3ca0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 oUOpAvwVnLngqoFfiLcKwvTnOgec(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_fastRotationSpeed, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_fastRotationSpeed(float_t  value) ;

/// @brief Method set_relativeTo, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_relativeTo(::UnityEngine::Space  value) ;

/// @brief Method set_reverse, addr 0x180c29b80, size 0x2090, virtual false, abstract: false, final false
inline void set_reverse(bool  value) ;

/// @brief Method set_rotateAroundAxis, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_rotateAroundAxis(::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  value) ;

/// @brief Method set_slowRotationSpeed, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_slowRotationSpeed(float_t  value) ;

/// @brief Method set_speed, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_speed(::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotateAroundAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotateAroundAxis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotateAroundAxis(RotateAroundAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotateAroundAxis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotateAroundAxis(RotateAroundAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2802};

/// @brief Field _speed, offset: 0x20, size: 0x4, def value: None
 ::Rewired::ComponentControls::Effects::RotateAroundAxis_Speed  ____speed;

/// @brief Field _slowRotationSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ____slowRotationSpeed;

/// @brief Field _fastRotationSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ____fastRotationSpeed;

/// @brief Field _rotateAroundAxis, offset: 0x2c, size: 0x4, def value: None
 ::Rewired::ComponentControls::Effects::RotateAroundAxis_RotationAxis  ____rotateAroundAxis;

/// @brief Field _relativeTo, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::Space  ____relativeTo;

/// @brief Field _reverse, offset: 0x34, size: 0x1, def value: None
 bool  ____reverse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis, ____speed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis, ____slowRotationSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis, ____fastRotationSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis, ____rotateAroundAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis, ____relativeTo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Effects::RotateAroundAxis, ____reverse) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Effects::RotateAroundAxis) == 0x38, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Effects
