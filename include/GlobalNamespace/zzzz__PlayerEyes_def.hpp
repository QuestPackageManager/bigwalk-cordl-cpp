#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerEyes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerEyes)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerEyeMood;
}
namespace GlobalNamespace {
class PlayerEyeSet;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerEyes;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerEyes*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerEyes*, "", "PlayerEyes");
// Dependencies PlayerEyeMood, System.Object, UnityEngine.Material, UnityEngine.Renderer, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerEyes
class CORDL_TYPE PlayerEyes : public ::System::Object {
public:
// Declarations
/// @brief Field _animatableLeft, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__animatableLeft, put=__cordl_internal_set__animatableLeft)) ::UnityEngine::Vector2  _animatableLeft;

/// @brief Field _animatableRight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__animatableRight, put=__cordl_internal_set__animatableRight)) ::UnityEngine::Vector2  _animatableRight;

/// @brief Field binocularsActive, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_binocularsActive, put=__cordl_internal_set_binocularsActive)) bool  binocularsActive;

/// @brief Field eyeSet, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeSet, put=__cordl_internal_set_eyeSet)) ::UnityW<::GlobalNamespace::PlayerEyeSet>  eyeSet;

/// @brief Field logVerbose, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field materialInstances, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialInstances, put=__cordl_internal_set_materialInstances)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materialInstances;

/// @brief Field moodLeft, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_moodLeft, put=__cordl_internal_set_moodLeft)) ::GlobalNamespace::PlayerEyeMood  moodLeft;

/// @brief Field moodRight, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_moodRight, put=__cordl_internal_set_moodRight)) ::GlobalNamespace::PlayerEyeMood  moodRight;

/// @brief Field playerCharacter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field propertyEyeMoodLeft, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_propertyEyeMoodLeft, put=setStaticF_propertyEyeMoodLeft)) ::StringW  propertyEyeMoodLeft;

/// @brief Field propertyEyeMoodRight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_propertyEyeMoodRight, put=setStaticF_propertyEyeMoodRight)) ::StringW  propertyEyeMoodRight;

/// @brief Field renderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field submeshIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_submeshIndex, put=__cordl_internal_set_submeshIndex)) int32_t  submeshIndex;

/// @brief Field xrayActive, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_xrayActive, put=__cordl_internal_set_xrayActive)) bool  xrayActive;

/// @brief Method Initialize, addr 0x1804673f0, size 0xd0, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerEyes* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1804674c0, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetEyeMood, addr 0x180467510, size 0x10, virtual false, abstract: false, final false
inline void SetEyeMood(::GlobalNamespace::PlayerEyeMood  bothEyesMood) ;

/// @brief Method SetEyeMood, addr 0x180467520, size 0x320, virtual false, abstract: false, final false
inline void SetEyeMood(::GlobalNamespace::PlayerEyeMood  moodLeft, ::GlobalNamespace::PlayerEyeMood  moodRight) ;

/// @brief Method Update, addr 0x180467840, size 0x360, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__animatableLeft() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__animatableLeft() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__animatableRight() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__animatableRight() ;

constexpr bool const& __cordl_internal_get_binocularsActive() const;

constexpr bool& __cordl_internal_get_binocularsActive() ;

constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet> const& __cordl_internal_get_eyeSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet>& __cordl_internal_get_eyeSet() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materialInstances() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materialInstances() ;

constexpr ::GlobalNamespace::PlayerEyeMood const& __cordl_internal_get_moodLeft() const;

constexpr ::GlobalNamespace::PlayerEyeMood& __cordl_internal_get_moodLeft() ;

constexpr ::GlobalNamespace::PlayerEyeMood const& __cordl_internal_get_moodRight() const;

constexpr ::GlobalNamespace::PlayerEyeMood& __cordl_internal_get_moodRight() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr int32_t const& __cordl_internal_get_submeshIndex() const;

constexpr int32_t& __cordl_internal_get_submeshIndex() ;

constexpr bool const& __cordl_internal_get_xrayActive() const;

constexpr bool& __cordl_internal_get_xrayActive() ;

constexpr void __cordl_internal_set__animatableLeft(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__animatableRight(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_binocularsActive(bool  value) ;

constexpr void __cordl_internal_set_eyeSet(::UnityW<::GlobalNamespace::PlayerEyeSet>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_materialInstances(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_moodLeft(::GlobalNamespace::PlayerEyeMood  value) ;

constexpr void __cordl_internal_set_moodRight(::GlobalNamespace::PlayerEyeMood  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_submeshIndex(int32_t  value) ;

constexpr void __cordl_internal_set_xrayActive(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_propertyEyeMoodLeft() ;

static inline ::StringW getStaticF_propertyEyeMoodRight() ;

static inline void setStaticF_propertyEyeMoodLeft(::StringW  value) ;

static inline void setStaticF_propertyEyeMoodRight(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerEyes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerEyes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerEyes(PlayerEyes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerEyes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerEyes(PlayerEyes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5450};

/// @brief Field eyeSet, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerEyeSet>  ___eyeSet;

/// @brief Field moodLeft, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEyeMood  ___moodLeft;

/// @brief Field moodRight, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEyeMood  ___moodRight;

/// @brief Field renderers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field submeshIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___submeshIndex;

/// @brief Field binocularsActive, offset: 0x2c, size: 0x1, def value: None
 bool  ___binocularsActive;

/// @brief Field xrayActive, offset: 0x2d, size: 0x1, def value: None
 bool  ___xrayActive;

/// @brief Field logVerbose, offset: 0x2e, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field materialInstances, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materialInstances;

/// @brief Field playerCharacter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field _animatableLeft, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____animatableLeft;

/// @brief Field _animatableRight, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____animatableRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___eyeSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___moodLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___moodRight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___submeshIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___binocularsActive) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___xrayActive) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___logVerbose) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___materialInstances) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ___playerCharacter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ____animatableLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyes, ____animatableRight) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerEyes) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
