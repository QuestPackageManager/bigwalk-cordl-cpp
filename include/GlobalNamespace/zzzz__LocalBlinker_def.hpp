#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalBlinker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocalBlinker)
namespace GlobalNamespace {
class PeckEffectToggle;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalBlinker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalBlinker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalBlinker*, "", "LocalBlinker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalBlinker
class CORDL_TYPE LocalBlinker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field downTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_downTime, put=__cordl_internal_set_downTime)) float_t  downTime;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field timeNextChange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeNextChange, put=__cordl_internal_set_timeNextChange)) double_t  timeNextChange;

/// @brief Field toggler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggler, put=__cordl_internal_set_toggler)) ::UnityW<::GlobalNamespace::PeckEffectToggle>  toggler;

/// @brief Field upTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_upTime, put=__cordl_internal_set_upTime)) float_t  upTime;

static inline ::GlobalNamespace::LocalBlinker* New_ctor() ;

/// @brief Method SetPulse, addr 0x180402240, size 0xe0, virtual false, abstract: false, final false
inline void SetPulse(bool  active) ;

/// @brief Method Update, addr 0x180402320, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_downTime() const;

constexpr float_t& __cordl_internal_get_downTime() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr double_t const& __cordl_internal_get_timeNextChange() const;

constexpr double_t& __cordl_internal_get_timeNextChange() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectToggle> const& __cordl_internal_get_toggler() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectToggle>& __cordl_internal_get_toggler() ;

constexpr float_t const& __cordl_internal_get_upTime() const;

constexpr float_t& __cordl_internal_get_upTime() ;

constexpr void __cordl_internal_set_downTime(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_timeNextChange(double_t  value) ;

constexpr void __cordl_internal_set_toggler(::UnityW<::GlobalNamespace::PeckEffectToggle>  value) ;

constexpr void __cordl_internal_set_upTime(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalBlinker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalBlinker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalBlinker(LocalBlinker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalBlinker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalBlinker(LocalBlinker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5077};

/// @brief Field toggler, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectToggle>  ___toggler;

/// @brief Field downTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___downTime;

/// @brief Field upTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___upTime;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field timeNextChange, offset: 0x38, size: 0x8, def value: None
 double_t  ___timeNextChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalBlinker, ___toggler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalBlinker, ___downTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalBlinker, ___upTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalBlinker, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalBlinker, ___timeNextChange) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalBlinker) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
