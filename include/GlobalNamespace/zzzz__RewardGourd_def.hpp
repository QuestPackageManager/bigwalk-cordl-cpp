#pragma once
// IWYU pragma private; include "GlobalNamespace/RewardGourd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GourdFlag_def.hpp"
#include "GlobalNamespace/zzzz__PropBlock_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(RewardGourd)
namespace GlobalNamespace {
struct GourdFlag_GourdState;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RewardGourd;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RewardGourd*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RewardGourd*, "", "RewardGourd");
// Dependencies GourdFlag::GourdState, Mirror.NetworkBehaviour, PropBlock, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: RewardGourd
class CORDL_TYPE RewardGourd : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkgourdState, put=set_NetworkgourdState)) ::GlobalNamespace::GourdFlag_GourdState  NetworkgourdState;

/// @brief Field customMapPosition, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapPosition, put=__cordl_internal_set_customMapPosition)) ::UnityW<::UnityEngine::Transform>  customMapPosition;

/// @brief Field gourdState, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_gourdState, put=__cordl_internal_set_gourdState)) ::GlobalNamespace::GourdFlag_GourdState  gourdState;

/// @brief Field isVariantChallenge, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_isVariantChallenge, put=__cordl_internal_set_isVariantChallenge)) bool  isVariantChallenge;

/// @brief Field prop, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_prop, put=__cordl_internal_set_prop)) ::UnityW<::GlobalNamespace::Prop>  prop;

/// @brief Field propertyBlockHelper, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelper, put=__cordl_internal_set_propertyBlockHelper)) ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field propsToMakeSavable, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_propsToMakeSavable, put=__cordl_internal_set_propsToMakeSavable)) ::ArrayW<::UnityW<::GlobalNamespace::PropBlock>>  propsToMakeSavable;

/// @brief Field variantChallengeColor, offset 0x7c, size 0x10 
 __declspec(property(get=__cordl_internal_get_variantChallengeColor, put=__cordl_internal_set_variantChallengeColor)) ::UnityEngine::Color  variantChallengeColor;

/// @brief Method Awake, addr 0x180408640, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x180408760, size 0xe0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method GetMapPosition, addr 0x180408840, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMapPosition() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::RewardGourd* New_ctor() ;

/// @brief Method OnChangeGourdState, addr 0x1804088a0, size 0x60, virtual false, abstract: false, final false
inline void OnChangeGourdState(::GlobalNamespace::GourdFlag_GourdState  oldValue, ::GlobalNamespace::GourdFlag_GourdState  newValue) ;

/// @brief Method OnSpawn, addr 0x180408900, size 0x20, virtual false, abstract: false, final false
inline void OnSpawn(bool  isInventory) ;

/// @brief Method SerializeSyncVars, addr 0x180408920, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerSetGourdState, addr 0x180408970, size 0x1e0, virtual false, abstract: false, final false
inline void ServerSetGourdState(::GlobalNamespace::GourdFlag_GourdState  newGourdState) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customMapPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customMapPosition() ;

constexpr ::GlobalNamespace::GourdFlag_GourdState const& __cordl_internal_get_gourdState() const;

constexpr ::GlobalNamespace::GourdFlag_GourdState& __cordl_internal_get_gourdState() ;

constexpr bool const& __cordl_internal_get_isVariantChallenge() const;

constexpr bool& __cordl_internal_get_isVariantChallenge() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_prop() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_prop() ;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& __cordl_internal_get_propertyBlockHelper() const;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& __cordl_internal_get_propertyBlockHelper() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropBlock>> const& __cordl_internal_get_propsToMakeSavable() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropBlock>>& __cordl_internal_get_propsToMakeSavable() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_variantChallengeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_variantChallengeColor() ;

constexpr void __cordl_internal_set_customMapPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gourdState(::GlobalNamespace::GourdFlag_GourdState  value) ;

constexpr void __cordl_internal_set_isVariantChallenge(bool  value) ;

constexpr void __cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_propsToMakeSavable(::ArrayW<::UnityW<::GlobalNamespace::PropBlock>>  value) ;

constexpr void __cordl_internal_set_variantChallengeColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkgourdState, addr 0x180408b50, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::GourdFlag_GourdState get_NetworkgourdState() ;

/// @brief Method set_NetworkgourdState, addr 0x180408b60, size 0x110, virtual false, abstract: false, final false
inline void set_NetworkgourdState(::ByRefConst<::GlobalNamespace::GourdFlag_GourdState>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewardGourd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewardGourd", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewardGourd(RewardGourd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewardGourd", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewardGourd(RewardGourd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5071};

/// @brief Field prop, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___prop;

/// @brief Field customMapPosition, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customMapPosition;

/// @brief Field isVariantChallenge, offset: 0x78, size: 0x1, def value: None
 bool  ___isVariantChallenge;

/// @brief Field variantChallengeColor, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Color  ___variantChallengeColor;

/// @brief Field propertyBlockHelper, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  ___propertyBlockHelper;

/// @brief Field propsToMakeSavable, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PropBlock>>  ___propsToMakeSavable;

/// @brief Field gourdState, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::GourdFlag_GourdState  ___gourdState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RewardGourd, ___prop) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RewardGourd, ___customMapPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RewardGourd, ___isVariantChallenge) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RewardGourd, ___variantChallengeColor) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RewardGourd, ___propertyBlockHelper) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RewardGourd, ___propsToMakeSavable) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RewardGourd, ___gourdState) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RewardGourd) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
