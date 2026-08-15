#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderLookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderLookup)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderLookup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColliderLookup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColliderLookup*, "", "ColliderLookup");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColliderLookup
class CORDL_TYPE ColliderLookup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _collider, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__collider, put=setStaticF__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field colliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_colliders, put=setStaticF_colliders)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Method Add, addr 0x18045a9f0, size 0xb0, virtual false, abstract: false, final false
static inline void Add(::UnityEngine::Collider*  collider) ;

/// @brief Method GetColliderFromId, addr 0x18045aaa0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> GetColliderFromId(int32_t  id) ;

static inline ::GlobalNamespace::ColliderLookup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18045aac0, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Collider> getStaticF__collider() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>* getStaticF_colliders() ;

static inline void setStaticF__collider(::UnityW<::UnityEngine::Collider>  value) ;

static inline void setStaticF_colliders(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderLookup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderLookup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderLookup(ColliderLookup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderLookup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderLookup(ColliderLookup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColliderLookup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
