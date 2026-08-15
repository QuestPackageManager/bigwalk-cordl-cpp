#pragma once
// IWYU pragma private; include "Mirror/Examples/CCU/CCUNetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CCUNetworkManager)
namespace Mirror::Examples::CCU {
class CCUNetworkManager___c;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Random;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Mirror::Examples::CCU {
class CCUNetworkManager;
}
namespace Mirror::Examples::CCU {
class CCUNetworkManager___c;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::CCU::CCUNetworkManager*);
MARK_REF_T(::Mirror::Examples::CCU::CCUNetworkManager___c*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::CCU::CCUNetworkManager*, "Mirror.Examples.CCU", "CCUNetworkManager");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::CCU::CCUNetworkManager___c*, "Mirror.Examples.CCU", "CCUNetworkManager/<>c");
// Dependencies System.Object
namespace Mirror::Examples::CCU {
// Is value type: false
// CS Name: Mirror.Examples.CCU.CCUNetworkManager/<>c
class CORDL_TYPE CCUNetworkManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::Examples::CCU::CCUNetworkManager___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  __9__6_0;

static inline ::Mirror::Examples::CCU::CCUNetworkManager___c* New_ctor() ;

/// @brief Method <GetStartPosition>b__6_0, addr 0x18143d030, size 0x10, virtual false, abstract: false, final false
inline bool _GetStartPosition_b__6_0(::UnityEngine::Transform*  t) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::Examples::CCU::CCUNetworkManager___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::Mirror::Examples::CCU::CCUNetworkManager___c*  value) ;

static inline void setStaticF___9__6_0(::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CCUNetworkManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CCUNetworkManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CCUNetworkManager___c(CCUNetworkManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CCUNetworkManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CCUNetworkManager___c(CCUNetworkManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::CCU::CCUNetworkManager___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Examples::CCU
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::CCU {
// Is value type: false
// CS Name: Mirror.Examples.CCU.CCUNetworkManager
class CORDL_TYPE CCUNetworkManager : public ::Mirror::NetworkManager {
public:
// Declarations
using __c = ::Mirror::Examples::CCU::CCUNetworkManager___c;

/// @brief Field interleave, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_interleave, put=__cordl_internal_set_interleave)) float_t  interleave;

/// @brief Field random, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::System::Random*  random;

/// @brief Field spawnAmount, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnAmount, put=__cordl_internal_set_spawnAmount)) int32_t  spawnAmount;

/// @brief Field spawnPositionRatio, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnPositionRatio, put=__cordl_internal_set_spawnPositionRatio)) float_t  spawnPositionRatio;

/// @brief Field spawnPrefab, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPrefab, put=__cordl_internal_set_spawnPrefab)) ::UnityW<::UnityEngine::GameObject>  spawnPrefab;

/// @brief Method GetStartPosition, addr 0x181553b50, size 0x170, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetStartPosition() ;

static inline ::Mirror::Examples::CCU::CCUNetworkManager* New_ctor() ;

/// @brief Method OnStartServer, addr 0x181553cc0, size 0x10, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method SpawnAll, addr 0x181553cd0, size 0x360, virtual false, abstract: false, final false
inline void SpawnAll() ;

constexpr float_t const& __cordl_internal_get_interleave() const;

constexpr float_t& __cordl_internal_get_interleave() ;

constexpr ::System::Random* const& __cordl_internal_get_random() const;

constexpr ::System::Random*& __cordl_internal_get_random() ;

constexpr int32_t const& __cordl_internal_get_spawnAmount() const;

constexpr int32_t& __cordl_internal_get_spawnAmount() ;

constexpr float_t const& __cordl_internal_get_spawnPositionRatio() const;

constexpr float_t& __cordl_internal_get_spawnPositionRatio() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spawnPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spawnPrefab() ;

constexpr void __cordl_internal_set_interleave(float_t  value) ;

constexpr void __cordl_internal_set_random(::System::Random*  value) ;

constexpr void __cordl_internal_set_spawnAmount(int32_t  value) ;

constexpr void __cordl_internal_set_spawnPositionRatio(float_t  value) ;

constexpr void __cordl_internal_set_spawnPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x181554030, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CCUNetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CCUNetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CCUNetworkManager(CCUNetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CCUNetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CCUNetworkManager(CCUNetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19339};

/// @brief Field spawnAmount, offset: 0x84, size: 0x4, def value: None
 int32_t  ___spawnAmount;

/// @brief Field interleave, offset: 0x88, size: 0x4, def value: None
 float_t  ___interleave;

/// @brief Field spawnPrefab, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spawnPrefab;

/// @brief Field spawnPositionRatio, offset: 0x98, size: 0x4, def value: None
 float_t  ___spawnPositionRatio;

/// @brief Field random, offset: 0xa0, size: 0x8, def value: None
 ::System::Random*  ___random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::CCU::CCUNetworkManager, ___spawnAmount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::CCUNetworkManager, ___interleave) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::CCUNetworkManager, ___spawnPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::CCUNetworkManager, ___spawnPositionRatio) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::CCUNetworkManager, ___random) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::CCU::CCUNetworkManager) == 0xa8, "Size mismatch!");

} // namespace end def Mirror::Examples::CCU
