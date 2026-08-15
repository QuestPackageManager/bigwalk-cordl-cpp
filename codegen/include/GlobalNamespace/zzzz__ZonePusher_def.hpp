#pragma once
// IWYU pragma private; include "GlobalNamespace/ZonePusher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ZonePusher)
namespace GlobalNamespace {
class PropZone;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
struct ZonePusher_PushProp;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ZonePusher;
}
namespace GlobalNamespace {
struct ZonePusher_PushProp;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZonePusher*);
MARK_VAL_T(::GlobalNamespace::ZonePusher_PushProp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZonePusher*, "", "ZonePusher");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZonePusher_PushProp, "", "ZonePusher/PushProp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ZonePusher/PushProp
struct CORDL_TYPE ZonePusher_PushProp {
public:
// Declarations
/// @brief Method .ctor, addr 0x180388980, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Prop*  prop, float_t  entryTime) ;

// Ctor Parameters []
// @brief default ctor
constexpr ZonePusher_PushProp() ;

// Ctor Parameters [CppParam { name: "prop", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: None }, CppParam { name: "entryTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr ZonePusher_PushProp(::UnityW<::GlobalNamespace::Prop>  prop, float_t  entryTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5587};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field prop, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  prop;

/// @brief Field entryTime, offset: 0x8, size: 0x4, def value: None
 float_t  entryTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZonePusher_PushProp, prop) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZonePusher_PushProp, entryTime) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZonePusher_PushProp) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZonePusher
class CORDL_TYPE ZonePusher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PushProp = ::GlobalNamespace::ZonePusher_PushProp;

/// @brief Field _pushProps, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pushProps, put=__cordl_internal_set__pushProps)) ::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>*  _pushProps;

/// @brief Field logVerbose, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field magnetDuration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnetDuration, put=__cordl_internal_set_magnetDuration)) float_t  magnetDuration;

/// @brief Field magnetPoint, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_magnetPoint, put=__cordl_internal_set_magnetPoint)) ::UnityEngine::Vector3  magnetPoint;

/// @brief Field propZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propZone, put=__cordl_internal_set_propZone)) ::UnityW<::GlobalNamespace::PropZone>  propZone;

/// @brief Field speed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Method FixedUpdate, addr 0x18038f4e0, size 0x260, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::ZonePusher* New_ctor() ;

/// @brief Method OnDisable, addr 0x18038f740, size 0x1a0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18038f8e0, size 0x50, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18038f930, size 0x370, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x18038fca0, size 0x120, virtual false, abstract: false, final false
inline void OnEnter(::GlobalNamespace::Prop*  prop) ;

/// @brief Method OnExit, addr 0x18038fdc0, size 0xd0, virtual false, abstract: false, final false
inline void OnExit(::GlobalNamespace::Prop*  prop) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>* const& __cordl_internal_get__pushProps() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>*& __cordl_internal_get__pushProps() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_magnetDuration() const;

constexpr float_t& __cordl_internal_get_magnetDuration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_magnetPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_magnetPoint() ;

constexpr ::UnityW<::GlobalNamespace::PropZone> const& __cordl_internal_get_propZone() const;

constexpr ::UnityW<::GlobalNamespace::PropZone>& __cordl_internal_get_propZone() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set__pushProps(::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_magnetDuration(float_t  value) ;

constexpr void __cordl_internal_set_magnetPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_propZone(::UnityW<::GlobalNamespace::PropZone>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZonePusher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZonePusher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZonePusher(ZonePusher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZonePusher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZonePusher(ZonePusher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5588};

/// @brief Field propZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropZone>  ___propZone;

/// @brief Field magnetPoint, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___magnetPoint;

/// @brief Field speed, offset: 0x34, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field magnetDuration, offset: 0x38, size: 0x4, def value: None
 float_t  ___magnetDuration;

/// @brief Field logVerbose, offset: 0x3c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _pushProps, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ZonePusher_PushProp>*  ____pushProps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZonePusher, ___propZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZonePusher, ___magnetPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZonePusher, ___speed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZonePusher, ___magnetDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZonePusher, ___logVerbose) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZonePusher, ____pushProps) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZonePusher) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
