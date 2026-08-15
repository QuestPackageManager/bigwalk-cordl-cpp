#pragma once
// IWYU pragma private; include "GlobalNamespace/Corpse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Corpse)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class CorpseLooks;
}
namespace GlobalNamespace {
class LimbSpline;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PropHomeGrasperPositioner;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Corpse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Corpse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Corpse*, "", "Corpse");
// Dependencies Mirror.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Corpse
class CORDL_TYPE Corpse : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkheadColorIndex, put=set_NetworkheadColorIndex)) int32_t  NetworkheadColorIndex;

 __declspec(property(get=get_NetworklegsColorIndex, put=set_NetworklegsColorIndex)) int32_t  NetworklegsColorIndex;

 __declspec(property(get=get_NetworktorsoColorIndex, put=set_NetworktorsoColorIndex)) int32_t  NetworktorsoColorIndex;

/// @brief Field allCorpses, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allCorpses, put=setStaticF_allCorpses)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>*  allCorpses;

/// @brief Field backpackHome, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_backpackHome, put=__cordl_internal_set_backpackHome)) ::UnityW<::GlobalNamespace::PropHome>  backpackHome;

/// @brief Field baseMaterial, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseMaterial, put=__cordl_internal_set_baseMaterial)) ::UnityW<::UnityEngine::Material>  baseMaterial;

/// @brief Field blindfoldHome, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_blindfoldHome, put=__cordl_internal_set_blindfoldHome)) ::UnityW<::GlobalNamespace::PropHome>  blindfoldHome;

/// @brief Field corpseLooks, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_corpseLooks, put=__cordl_internal_set_corpseLooks)) ::UnityW<::GlobalNamespace::CorpseLooks>  corpseLooks;

/// @brief Field deadLimbs, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_deadLimbs, put=__cordl_internal_set_deadLimbs)) ::UnityW<::UnityEngine::Transform>  deadLimbs;

/// @brief Field deathSound, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_deathSound, put=__cordl_internal_set_deathSound)) ::UnityW<::GlobalNamespace::AudioAsset>  deathSound;

/// @brief Field grasperHome, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_grasperHome, put=__cordl_internal_set_grasperHome)) ::UnityW<::GlobalNamespace::PropHome>  grasperHome;

/// @brief Field grasperPositioner, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_grasperPositioner, put=__cordl_internal_set_grasperPositioner)) ::UnityW<::GlobalNamespace::PropHomeGrasperPositioner>  grasperPositioner;

/// @brief Field headColorIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_headColorIndex, put=__cordl_internal_set_headColorIndex)) int32_t  headColorIndex;

/// @brief Field holsterHome, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_holsterHome, put=__cordl_internal_set_holsterHome)) ::UnityW<::GlobalNamespace::PropHome>  holsterHome;

/// @brief Field identifier, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_identifier, put=__cordl_internal_set_identifier)) ::StringW  identifier;

/// @brief Field leftArm, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArm, put=__cordl_internal_set_leftArm)) ::UnityW<::GlobalNamespace::LimbSpline>  leftArm;

/// @brief Field legsColorIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_legsColorIndex, put=__cordl_internal_set_legsColorIndex)) int32_t  legsColorIndex;

/// @brief Field liveLimbs, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_liveLimbs, put=__cordl_internal_set_liveLimbs)) ::UnityW<::UnityEngine::Transform>  liveLimbs;

/// @brief Field prop, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_prop, put=__cordl_internal_set_prop)) ::UnityW<::GlobalNamespace::Prop>  prop;

/// @brief Field reviveSound, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveSound, put=__cordl_internal_set_reviveSound)) ::UnityW<::GlobalNamespace::AudioAsset>  reviveSound;

/// @brief Field rightArm, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArm, put=__cordl_internal_set_rightArm)) ::UnityW<::GlobalNamespace::LimbSpline>  rightArm;

/// @brief Field torsoColorIndex, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_torsoColorIndex, put=__cordl_internal_set_torsoColorIndex)) int32_t  torsoColorIndex;

/// @brief Method Awake, addr 0x1803f92e0, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateAndSpawn, addr 0x1803f93c0, size 0x470, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::Corpse> CreateAndSpawn(::GlobalNamespace::PlayerCharacter*  sourcePlayer, ::UnityEngine::GameObject*  prefab) ;

/// @brief Method DeserializeSyncVars, addr 0x1803f9830, size 0x2e0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method EmptyPocket, addr 0x1803f9b10, size 0x90, virtual false, abstract: false, final false
inline void EmptyPocket(::GlobalNamespace::PropHome*  pocket) ;

/// @brief Method ExpireDueToRevival, addr 0x1803f9ba0, size 0x160, virtual false, abstract: false, final false
inline void ExpireDueToRevival(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method FindMatch, addr 0x1803f9d00, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::Corpse> FindMatch(::StringW  identifier) ;

/// @brief Method Initialize, addr 0x1803f9db0, size 0x80, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsMatch, addr 0x1803f9e30, size 0x20, virtual false, abstract: false, final false
inline bool IsMatch(::StringW  identifier) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::Corpse* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803f9e50, size 0xa0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803f9ef0, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803f9f30, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSetHead, addr 0x1803fa010, size 0x60, virtual false, abstract: false, final false
inline void OnSetHead(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetLegs, addr 0x1803fa070, size 0x60, virtual false, abstract: false, final false
inline void OnSetLegs(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetTorso, addr 0x1803fa0d0, size 0x60, virtual false, abstract: false, final false
inline void OnSetTorso(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method RefreshLiveLimbs, addr 0x1803fa130, size 0x310, virtual false, abstract: false, final false
inline void RefreshLiveLimbs(::GlobalNamespace::PropHome*  home, ::GlobalNamespace::Prop*  oldProp, ::GlobalNamespace::Prop*  newProp) ;

/// @brief Method SerializeSyncVars, addr 0x1803fa440, size 0x90, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerEmptyAllPockets, addr 0x1803fa4d0, size 0x1d0, virtual false, abstract: false, final false
inline void ServerEmptyAllPockets() ;

/// @brief Method Start, addr 0x1803fa6a0, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_backpackHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_backpackHome() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_baseMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_baseMaterial() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_blindfoldHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_blindfoldHome() ;

constexpr ::UnityW<::GlobalNamespace::CorpseLooks> const& __cordl_internal_get_corpseLooks() const;

constexpr ::UnityW<::GlobalNamespace::CorpseLooks>& __cordl_internal_get_corpseLooks() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_deadLimbs() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_deadLimbs() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_deathSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_deathSound() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_grasperHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_grasperHome() ;

constexpr ::UnityW<::GlobalNamespace::PropHomeGrasperPositioner> const& __cordl_internal_get_grasperPositioner() const;

constexpr ::UnityW<::GlobalNamespace::PropHomeGrasperPositioner>& __cordl_internal_get_grasperPositioner() ;

constexpr int32_t const& __cordl_internal_get_headColorIndex() const;

constexpr int32_t& __cordl_internal_get_headColorIndex() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_holsterHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_holsterHome() ;

constexpr ::StringW const& __cordl_internal_get_identifier() const;

constexpr ::StringW& __cordl_internal_get_identifier() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_leftArm() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_leftArm() ;

constexpr int32_t const& __cordl_internal_get_legsColorIndex() const;

constexpr int32_t& __cordl_internal_get_legsColorIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_liveLimbs() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_liveLimbs() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_prop() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_prop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_reviveSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_reviveSound() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_rightArm() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_rightArm() ;

constexpr int32_t const& __cordl_internal_get_torsoColorIndex() const;

constexpr int32_t& __cordl_internal_get_torsoColorIndex() ;

constexpr void __cordl_internal_set_backpackHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blindfoldHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_corpseLooks(::UnityW<::GlobalNamespace::CorpseLooks>  value) ;

constexpr void __cordl_internal_set_deadLimbs(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_deathSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_grasperHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_grasperPositioner(::UnityW<::GlobalNamespace::PropHomeGrasperPositioner>  value) ;

constexpr void __cordl_internal_set_headColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_holsterHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_identifier(::StringW  value) ;

constexpr void __cordl_internal_set_leftArm(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_legsColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_liveLimbs(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_reviveSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_rightArm(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_torsoColorIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>* getStaticF_allCorpses() ;

/// @brief Method get_NetworkheadColorIndex, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkheadColorIndex() ;

/// @brief Method get_NetworklegsColorIndex, addr 0x1803fa740, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworklegsColorIndex() ;

/// @brief Method get_NetworktorsoColorIndex, addr 0x1803fa750, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworktorsoColorIndex() ;

static inline void setStaticF_allCorpses(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Corpse>>*  value) ;

/// @brief Method set_NetworkheadColorIndex, addr 0x1803fa760, size 0x70, virtual false, abstract: false, final false
inline void set_NetworkheadColorIndex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworklegsColorIndex, addr 0x1803fa7d0, size 0x70, virtual false, abstract: false, final false
inline void set_NetworklegsColorIndex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworktorsoColorIndex, addr 0x1803fa840, size 0x70, virtual false, abstract: false, final false
inline void set_NetworktorsoColorIndex(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Corpse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Corpse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Corpse(Corpse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Corpse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Corpse(Corpse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5034};

/// @brief Field headColorIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___headColorIndex;

/// @brief Field torsoColorIndex, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___torsoColorIndex;

/// @brief Field legsColorIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ___legsColorIndex;

/// @brief Field identifier, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___identifier;

/// @brief Field baseMaterial, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___baseMaterial;

/// @brief Field prop, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___prop;

/// @brief Field backpackHome, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___backpackHome;

/// @brief Field holsterHome, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___holsterHome;

/// @brief Field grasperHome, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___grasperHome;

/// @brief Field blindfoldHome, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___blindfoldHome;

/// @brief Field liveLimbs, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___liveLimbs;

/// @brief Field deadLimbs, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___deadLimbs;

/// @brief Field leftArm, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___leftArm;

/// @brief Field rightArm, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___rightArm;

/// @brief Field corpseLooks, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CorpseLooks>  ___corpseLooks;

/// @brief Field grasperPositioner, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHomeGrasperPositioner>  ___grasperPositioner;

/// @brief Field deathSound, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___deathSound;

/// @brief Field reviveSound, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___reviveSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Corpse, ___headColorIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___torsoColorIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___legsColorIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___identifier) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___baseMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___prop) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___backpackHome) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___holsterHome) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___grasperHome) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___blindfoldHome) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___liveLimbs) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___deadLimbs) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___leftArm) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___rightArm) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___corpseLooks) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___grasperPositioner) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___deathSound) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Corpse, ___reviveSound) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Corpse) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
