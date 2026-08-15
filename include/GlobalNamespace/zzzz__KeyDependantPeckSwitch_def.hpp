#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyDependantPeckSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KeyDependantPeckSwitch)
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class UnlockTrailStation;
}
// Forward declare root types
namespace GlobalNamespace {
class KeyDependantPeckSwitch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KeyDependantPeckSwitch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyDependantPeckSwitch*, "", "KeyDependantPeckSwitch");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeyDependantPeckSwitch
class CORDL_TYPE KeyDependantPeckSwitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field onPlaceBlank, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlaceBlank, put=__cordl_internal_set_onPlaceBlank)) ::UnityW<::GlobalNamespace::PeckSwitch>  onPlaceBlank;

/// @brief Field onPlaceCut, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlaceCut, put=__cordl_internal_set_onPlaceCut)) ::UnityW<::GlobalNamespace::PeckSwitch>  onPlaceCut;

/// @brief Field propHome, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHome, put=__cordl_internal_set_propHome)) ::UnityW<::GlobalNamespace::PropHome>  propHome;

/// @brief Field station, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_station, put=__cordl_internal_set_station)) ::UnityW<::GlobalNamespace::UnlockTrailStation>  station;

/// @brief Method Awake, addr 0x18040a640, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::KeyDependantPeckSwitch* New_ctor() ;

/// @brief Method OnPin, addr 0x18040a720, size 0x1a0, virtual false, abstract: false, final false
inline void OnPin(::GlobalNamespace::Prop*  keyProp) ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onPlaceBlank() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onPlaceBlank() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onPlaceCut() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onPlaceCut() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_propHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_propHome() ;

constexpr ::UnityW<::GlobalNamespace::UnlockTrailStation> const& __cordl_internal_get_station() const;

constexpr ::UnityW<::GlobalNamespace::UnlockTrailStation>& __cordl_internal_get_station() ;

constexpr void __cordl_internal_set_onPlaceBlank(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onPlaceCut(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_station(::UnityW<::GlobalNamespace::UnlockTrailStation>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyDependantPeckSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyDependantPeckSwitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyDependantPeckSwitch(KeyDependantPeckSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyDependantPeckSwitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyDependantPeckSwitch(KeyDependantPeckSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5148};

/// @brief Field station, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UnlockTrailStation>  ___station;

/// @brief Field propHome, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___propHome;

/// @brief Field onPlaceBlank, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onPlaceBlank;

/// @brief Field onPlaceCut, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onPlaceCut;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyDependantPeckSwitch, ___station) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyDependantPeckSwitch, ___propHome) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyDependantPeckSwitch, ___onPlaceBlank) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyDependantPeckSwitch, ___onPlaceCut) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyDependantPeckSwitch) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
