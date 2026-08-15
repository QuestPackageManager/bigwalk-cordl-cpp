#pragma once
// IWYU pragma private; include "GlobalNamespace/ContactModificationHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContactModificationHandler)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct PhysicsScene;
}
// Forward declare root types
namespace GlobalNamespace {
class ContactModificationHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ContactModificationHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContactModificationHandler*, "", "ContactModificationHandler");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ContactModificationHandler
class CORDL_TYPE ContactModificationHandler : public ::System::Object {
public:
// Declarations
/// @brief Field collidersIds, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersIds, put=__cordl_internal_set_collidersIds)) ::System::Collections::Generic::List_1<int32_t>*  collidersIds;

/// @brief Field delegateDictionary, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_delegateDictionary, put=setStaticF_delegateDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>*  delegateDictionary;

/// @brief Field pairHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pairHandler, put=__cordl_internal_set_pairHandler)) ::System::Action_2<::UnityEngine::ModifiableContactPair,bool>*  pairHandler;

/// @brief Method AddCollider, addr 0x18041e0a0, size 0x1c0, virtual false, abstract: false, final false
inline void AddCollider(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::ContactModificationHandler* New_ctor() ;

/// @brief Method OnContactModifyEvent, addr 0x18041e260, size 0x2b0, virtual false, abstract: false, final false
static inline void OnContactModifyEvent(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  pairs) ;

/// @brief Method PreDestroy, addr 0x18041e510, size 0xc0, virtual false, abstract: false, final false
inline void PreDestroy() ;

/// @brief Method RemoveCollider, addr 0x18041e5d0, size 0x90, virtual false, abstract: false, final false
inline void RemoveCollider(::UnityEngine::Collider*  collider) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_collidersIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_collidersIds() ;

constexpr ::System::Action_2<::UnityEngine::ModifiableContactPair,bool>* const& __cordl_internal_get_pairHandler() const;

constexpr ::System::Action_2<::UnityEngine::ModifiableContactPair,bool>*& __cordl_internal_get_pairHandler() ;

constexpr void __cordl_internal_set_collidersIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_pairHandler(::System::Action_2<::UnityEngine::ModifiableContactPair,bool>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>* getStaticF_delegateDictionary() ;

static inline void setStaticF_delegateDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContactModificationHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContactModificationHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContactModificationHandler(ContactModificationHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContactModificationHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContactModificationHandler(ContactModificationHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5180};

/// @brief Field collidersIds, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___collidersIds;

/// @brief Field pairHandler, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::ModifiableContactPair,bool>*  ___pairHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContactModificationHandler, ___collidersIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContactModificationHandler, ___pairHandler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContactModificationHandler) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
