#pragma once
// IWYU pragma private; include "GlobalNamespace/FlareDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlareDriver)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class FlareDriver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlareDriver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlareDriver*, "", "FlareDriver");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlareDriver
class CORDL_TYPE FlareDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field LightFadeProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LightFadeProperty, put=setStaticF_LightFadeProperty)) int32_t  LightFadeProperty;

/// @brief Field LightOnProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LightOnProperty, put=setStaticF_LightOnProperty)) int32_t  LightOnProperty;

/// @brief Field changeTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_changeTime, put=__cordl_internal_set_changeTime)) float_t  changeTime;

/// @brief Field isActive, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field occasionalPartner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field propertyBlockHelper, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelper, put=__cordl_internal_set_propertyBlockHelper)) ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field transitionDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_transitionDuration, put=__cordl_internal_set_transitionDuration)) float_t  transitionDuration;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x1803fc0f0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::FlareDriver* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x1803fc120, size 0xc0, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method SetState, addr 0x1803fc1e0, size 0x160, virtual false, abstract: false, final false
inline void SetState(bool  active) ;

constexpr float_t const& __cordl_internal_get_changeTime() const;

constexpr float_t& __cordl_internal_get_changeTime() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& __cordl_internal_get_propertyBlockHelper() const;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& __cordl_internal_get_propertyBlockHelper() ;

constexpr float_t const& __cordl_internal_get_transitionDuration() const;

constexpr float_t& __cordl_internal_get_transitionDuration() ;

constexpr void __cordl_internal_set_changeTime(float_t  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_transitionDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_LightFadeProperty() ;

static inline int32_t getStaticF_LightOnProperty() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

static inline void setStaticF_LightFadeProperty(int32_t  value) ;

static inline void setStaticF_LightOnProperty(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlareDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlareDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlareDriver(FlareDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlareDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlareDriver(FlareDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5046};

/// @brief Field occasionalPartner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field propertyBlockHelper, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  ___propertyBlockHelper;

/// @brief Field transitionDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___transitionDuration;

/// @brief Field isActive, offset: 0x34, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field changeTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___changeTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlareDriver, ___occasionalPartner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlareDriver, ___propertyBlockHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlareDriver, ___transitionDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlareDriver, ___isActive) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlareDriver, ___changeTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlareDriver) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
