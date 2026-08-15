#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanPusher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OceanPusher)
namespace GlobalNamespace {
class ContactModificationHandler;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
// Forward declare root types
namespace GlobalNamespace {
class OceanPusher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OceanPusher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OceanPusher*, "", "OceanPusher");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OceanPusher
class CORDL_TYPE OceanPusher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field contactModificationHandler, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_contactModificationHandler, put=__cordl_internal_set_contactModificationHandler)) ::GlobalNamespace::ContactModificationHandler*  contactModificationHandler;

/// @brief Field magnetPoint, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_magnetPoint, put=__cordl_internal_set_magnetPoint)) ::UnityEngine::Vector3  magnetPoint;

/// @brief Field myColliders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myColliders, put=__cordl_internal_set_myColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  myColliders;

/// @brief Field speed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field validTargets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_validTargets, put=__cordl_internal_set_validTargets)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  validTargets;

static inline ::GlobalNamespace::OceanPusher* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x18037f740, size 0xb0, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDestroy, addr 0x18037f7f0, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18037f810, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18037f880, size 0x50, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18037f8d0, size 0x100, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RunPair, addr 0x18037f9d0, size 0x250, virtual false, abstract: false, final false
inline void RunPair(::UnityEngine::ModifiableContactPair  pair, bool  flipped) ;

constexpr ::GlobalNamespace::ContactModificationHandler* const& __cordl_internal_get_contactModificationHandler() const;

constexpr ::GlobalNamespace::ContactModificationHandler*& __cordl_internal_get_contactModificationHandler() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_magnetPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_magnetPoint() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_myColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_myColliders() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>* const& __cordl_internal_get_validTargets() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>*& __cordl_internal_get_validTargets() ;

constexpr void __cordl_internal_set_contactModificationHandler(::GlobalNamespace::ContactModificationHandler*  value) ;

constexpr void __cordl_internal_set_magnetPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_myColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_validTargets(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OceanPusher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OceanPusher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OceanPusher(OceanPusher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OceanPusher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OceanPusher(OceanPusher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5573};

/// @brief Field myColliders, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___myColliders;

/// @brief Field magnetPoint, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___magnetPoint;

/// @brief Field speed, offset: 0x34, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field validTargets, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  ___validTargets;

/// @brief Field contactModificationHandler, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::ContactModificationHandler*  ___contactModificationHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OceanPusher, ___myColliders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanPusher, ___magnetPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanPusher, ___speed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanPusher, ___validTargets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OceanPusher, ___contactModificationHandler) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OceanPusher) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
