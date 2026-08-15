#pragma once
// IWYU pragma private; include "GlobalNamespace/Crosshair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Crosshair)
namespace GlobalNamespace {
struct Crosshair_CrosshairMode;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct Crosshair_CrosshairMode;
}
namespace GlobalNamespace {
class Crosshair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Crosshair_CrosshairMode);
MARK_REF_T(::GlobalNamespace::Crosshair*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Crosshair_CrosshairMode, "", "Crosshair/CrosshairMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Crosshair*, "", "Crosshair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Crosshair/CrosshairMode
struct CORDL_TYPE Crosshair_CrosshairMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Crosshair_CrosshairMode_Unwrapped
enum struct __Crosshair_CrosshairMode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Holding = static_cast<int32_t>(0x1),
__E_Windup = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Crosshair_CrosshairMode_Unwrapped () const noexcept {
return static_cast<__Crosshair_CrosshairMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Crosshair_CrosshairMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Crosshair_CrosshairMode(int32_t  value__) noexcept;

/// @brief Field Holding value: I32(1)
static ::GlobalNamespace::Crosshair_CrosshairMode const Holding;

/// @brief Field Normal value: I32(0)
static ::GlobalNamespace::Crosshair_CrosshairMode const Normal;

/// @brief Field Windup value: I32(2)
static ::GlobalNamespace::Crosshair_CrosshairMode const Windup;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Crosshair_CrosshairMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Crosshair_CrosshairMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Crosshair::CrosshairMode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Crosshair
class CORDL_TYPE Crosshair : public ::System::Object {
public:
// Declarations
using CrosshairMode = ::GlobalNamespace::Crosshair_CrosshairMode;

/// @brief Field boilCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_boilCurve, put=__cordl_internal_set_boilCurve)) ::UnityEngine::AnimationCurve*  boilCurve;

/// @brief Field boilFequency, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_boilFequency, put=__cordl_internal_set_boilFequency)) float_t  boilFequency;

/// @brief Field crosshairHolding, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_crosshairHolding, put=__cordl_internal_set_crosshairHolding)) ::UnityW<::UnityEngine::Transform>  crosshairHolding;

/// @brief Field crosshairMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_crosshairMode, put=__cordl_internal_set_crosshairMode)) ::GlobalNamespace::Crosshair_CrosshairMode  crosshairMode;

/// @brief Field crosshairNormal, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_crosshairNormal, put=__cordl_internal_set_crosshairNormal)) ::UnityW<::UnityEngine::Transform>  crosshairNormal;

/// @brief Field crosshairWindup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_crosshairWindup, put=__cordl_internal_set_crosshairWindup)) ::UnityW<::UnityEngine::RectTransform>  crosshairWindup;

/// @brief Field hideTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideTransform, put=__cordl_internal_set_hideTransform)) ::UnityW<::UnityEngine::Transform>  hideTransform;

/// @brief Field logVerbose, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field windupCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_windupCurve, put=__cordl_internal_set_windupCurve)) ::UnityEngine::AnimationCurve*  windupCurve;

/// @brief Field windupPower, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_windupPower, put=__cordl_internal_set_windupPower)) float_t  windupPower;

/// @brief Field wings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_wings, put=__cordl_internal_set_wings)) ::UnityW<::UnityEngine::Transform>  wings;

/// @brief Method GetCrosshairTransform, addr 0x180420340, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetCrosshairTransform(::GlobalNamespace::Crosshair_CrosshairMode  crosshairMode) ;

/// @brief Method Initialize, addr 0x180420360, size 0x120, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::Crosshair* New_ctor() ;

/// @brief Method OnSettingsChange, addr 0x180420360, size 0x120, virtual false, abstract: false, final false
static inline void OnSettingsChange() ;

/// @brief Method SetCrosshairMode, addr 0x180420480, size 0x600, virtual false, abstract: false, final false
static inline void SetCrosshairMode(::GlobalNamespace::Crosshair_CrosshairMode  crosshairMode, float_t  windupPower) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_boilCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_boilCurve() ;

constexpr float_t const& __cordl_internal_get_boilFequency() const;

constexpr float_t& __cordl_internal_get_boilFequency() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_crosshairHolding() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_crosshairHolding() ;

constexpr ::GlobalNamespace::Crosshair_CrosshairMode const& __cordl_internal_get_crosshairMode() const;

constexpr ::GlobalNamespace::Crosshair_CrosshairMode& __cordl_internal_get_crosshairMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_crosshairNormal() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_crosshairNormal() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_crosshairWindup() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_crosshairWindup() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hideTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hideTransform() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_windupCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_windupCurve() ;

constexpr float_t const& __cordl_internal_get_windupPower() const;

constexpr float_t& __cordl_internal_get_windupPower() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_wings() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_wings() ;

constexpr void __cordl_internal_set_boilCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_boilFequency(float_t  value) ;

constexpr void __cordl_internal_set_crosshairHolding(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_crosshairMode(::GlobalNamespace::Crosshair_CrosshairMode  value) ;

constexpr void __cordl_internal_set_crosshairNormal(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_crosshairWindup(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_hideTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_windupCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_windupPower(float_t  value) ;

constexpr void __cordl_internal_set_wings(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180420a80, size 0x40, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Crosshair* get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Crosshair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Crosshair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Crosshair(Crosshair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Crosshair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Crosshair(Crosshair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5215};

/// @brief Field crosshairNormal, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___crosshairNormal;

/// @brief Field crosshairHolding, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___crosshairHolding;

/// @brief Field crosshairWindup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___crosshairWindup;

/// @brief Field wings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___wings;

/// @brief Field hideTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hideTransform;

/// @brief Field windupCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___windupCurve;

/// @brief Field boilCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___boilCurve;

/// @brief Field boilFequency, offset: 0x48, size: 0x4, def value: None
 float_t  ___boilFequency;

/// @brief Field logVerbose, offset: 0x4c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field crosshairMode, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::Crosshair_CrosshairMode  ___crosshairMode;

/// @brief Field windupPower, offset: 0x54, size: 0x4, def value: None
 float_t  ___windupPower;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Crosshair, ___crosshairNormal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___crosshairHolding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___crosshairWindup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___wings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___hideTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___windupCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___boilCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___boilFequency) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___logVerbose) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___crosshairMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crosshair, ___windupPower) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Crosshair) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
