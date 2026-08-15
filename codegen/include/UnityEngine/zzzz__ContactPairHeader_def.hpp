#pragma once
// IWYU pragma private; include "UnityEngine/ContactPairHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__CollisionPairHeaderFlags_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPairHeader)
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPair;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPairHeader;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPairHeader);
DEFINE_IL2CPP_CLASS(::UnityEngine::ContactPairHeader, "UnityEngine", "ContactPairHeader");
// Dependencies System.IntPtr, UnityEngine.CollisionPairHeaderFlags, UnityEngine.EntityId, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ContactPairHeader
struct CORDL_TYPE ContactPairHeader {
public:
// Declarations
 __declspec(property(get=get_body)) ::UnityW<::UnityEngine::Component>  body;

 __declspec(property(get=get_hasRemovedBody)) bool  hasRemovedBody;

 __declspec(property(get=get_otherBody)) ::UnityW<::UnityEngine::Component>  otherBody;

/// @brief Method GetContactPair, addr 0x1822fc500, size 0x50, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::ContactPair> GetContactPair(int32_t  index) ;

/// @brief Method GetContactPair_Internal, addr 0x1822fc500, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::ContactPair* GetContactPair_Internal(int32_t  index) ;

/// @brief Method get_body, addr 0x1822fc550, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_body() ;

/// @brief Method get_hasRemovedBody, addr 0x1822fc590, size 0x20, virtual false, abstract: false, final false
inline bool get_hasRemovedBody() ;

/// @brief Method get_otherBody, addr 0x1822fc5b0, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_otherBody() ;

// Ctor Parameters []
// @brief default ctor
constexpr ContactPairHeader() ;

// Ctor Parameters [CppParam { name: "m_BodyID", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "m_OtherBodyID", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_NbPairs", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::CollisionPairHeaderFlags", modifiers: "", def_value: None }, CppParam { name: "m_ThisBodyLinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_ThisBodyAngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_OtherBodyLinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_OtherBodyAngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr ContactPairHeader(::UnityEngine::EntityId  m_BodyID, ::UnityEngine::EntityId  m_OtherBodyID, ::System::IntPtr  m_StartPtr, uint32_t  m_NbPairs, ::UnityEngine::CollisionPairHeaderFlags  m_Flags, ::UnityEngine::Vector3  m_ThisBodyLinearVelocity, ::UnityEngine::Vector3  m_ThisBodyAngularVelocity, ::UnityEngine::Vector3  m_OtherBodyLinearVelocity, ::UnityEngine::Vector3  m_OtherBodyAngularVelocity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20200};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_BodyID, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  m_BodyID;

/// @brief Field m_OtherBodyID, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::EntityId  m_OtherBodyID;

/// @brief Field m_StartPtr, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_StartPtr;

/// @brief Field m_NbPairs, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_NbPairs;

/// @brief Field m_Flags, offset: 0x14, size: 0x2, def value: None
 ::UnityEngine::CollisionPairHeaderFlags  m_Flags;

/// @brief Field m_ThisBodyLinearVelocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_ThisBodyLinearVelocity;

/// @brief Field m_ThisBodyAngularVelocity, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_ThisBodyAngularVelocity;

/// @brief Field m_OtherBodyLinearVelocity, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_OtherBodyLinearVelocity;

/// @brief Field m_OtherBodyAngularVelocity, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_OtherBodyAngularVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ContactPairHeader, m_BodyID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_OtherBodyID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_StartPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_NbPairs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_Flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_ThisBodyLinearVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_ThisBodyAngularVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_OtherBodyLinearVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_OtherBodyAngularVelocity) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ContactPairHeader) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine
