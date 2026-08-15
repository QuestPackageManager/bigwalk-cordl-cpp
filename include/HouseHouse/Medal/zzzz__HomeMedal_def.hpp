#pragma once
// IWYU pragma private; include "HouseHouse/Medal/HomeMedal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HouseHouse/Medal/zzzz__MedalType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HomeMedal)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace HouseHouse::Medal {
class HomeMedal;
}
// Write type traits
MARK_REF_T(::HouseHouse::Medal::HomeMedal*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Medal::HomeMedal*, "HouseHouse.Medal", "HomeMedal");
// Dependencies HouseHouse.Medal.MedalType, UnityEngine.MonoBehaviour
namespace HouseHouse::Medal {
// Is value type: false
// CS Name: HouseHouse.Medal.HomeMedal
class CORDL_TYPE HomeMedal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field medalType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_medalType, put=__cordl_internal_set_medalType)) ::HouseHouse::Medal::MedalType  medalType;

/// @brief Field playerCharacter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field propHome, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHome, put=__cordl_internal_set_propHome)) ::UnityW<::GlobalNamespace::PropHome>  propHome;

static inline ::HouseHouse::Medal::HomeMedal* New_ctor() ;

/// @brief Method OnChangeLocal, addr 0x1803c6ec0, size 0x50, virtual false, abstract: false, final false
inline void OnChangeLocal(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  old, ::GlobalNamespace::Prop*  newProp) ;

/// @brief Method OnDisable, addr 0x1803c6f10, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803c7000, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::HouseHouse::Medal::MedalType const& __cordl_internal_get_medalType() const;

constexpr ::HouseHouse::Medal::MedalType& __cordl_internal_get_medalType() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_propHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_propHome() ;

constexpr void __cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HomeMedal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HomeMedal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HomeMedal(HomeMedal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HomeMedal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HomeMedal(HomeMedal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5770};

/// @brief Field propHome, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___propHome;

/// @brief Field playerCharacter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field medalType, offset: 0x30, size: 0x4, def value: None
 ::HouseHouse::Medal::MedalType  ___medalType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Medal::HomeMedal, ___propHome) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Medal::HomeMedal, ___playerCharacter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Medal::HomeMedal, ___medalType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Medal::HomeMedal) == 0x38, "Size mismatch!");

} // namespace end def HouseHouse::Medal
