#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformingBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformingBody)
namespace GlobalNamespace {
struct PlatformingBody_PlatformingContact;
}
namespace GlobalNamespace {
class StickyPlatform;
}
namespace LobbyNetworking {
class HouseNetworkTransform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformingBody;
}
namespace GlobalNamespace {
struct PlatformingBody_PlatformingContact;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformingBody*);
MARK_VAL_T(::GlobalNamespace::PlatformingBody_PlatformingContact);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformingBody*, "", "PlatformingBody");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformingBody_PlatformingContact, "", "PlatformingBody/PlatformingContact");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformingBody/PlatformingContact
struct CORDL_TYPE PlatformingBody_PlatformingContact {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlatformingBody_PlatformingContact() ;

// Ctor Parameters [CppParam { name: "otherBody", ty: "::UnityW<::GlobalNamespace::PlatformingBody>", modifiers: "", def_value: None }, CppParam { name: "contactCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlatformingBody_PlatformingContact(::UnityW<::GlobalNamespace::PlatformingBody>  otherBody, int32_t  contactCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field otherBody, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformingBody>  otherBody;

/// @brief Field contactCount, offset: 0x8, size: 0x4, def value: None
 int32_t  contactCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformingBody_PlatformingContact, otherBody) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformingBody_PlatformingContact, contactCount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformingBody_PlatformingContact) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformingBody
class CORDL_TYPE PlatformingBody : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlatformingContact = ::GlobalNamespace::PlatformingBody_PlatformingContact;

/// @brief Field HouseNetworkTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_HouseNetworkTransform, put=__cordl_internal_set_HouseNetworkTransform)) ::UnityW<::LobbyNetworking::HouseNetworkTransform>  HouseNetworkTransform;

/// @brief Field _rb, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rb, put=__cordl_internal_set__rb)) ::UnityW<::UnityEngine::Rigidbody>  _rb;

/// @brief Field checkedBodies, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkedBodies, put=__cordl_internal_set_checkedBodies)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  checkedBodies;

/// @brief Field connectedPlatform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedPlatform, put=__cordl_internal_set_connectedPlatform)) ::UnityW<::GlobalNamespace::StickyPlatform>  connectedPlatform;

/// @brief Field contacts, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_contacts, put=__cordl_internal_set_contacts)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>*  contacts;

 __declspec(property(get=get_hasContacts)) bool  hasContacts;

/// @brief Field hasPlatform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hasPlatform, put=__cordl_internal_set_hasPlatform)) ::UnityW<::GlobalNamespace::StickyPlatform>  hasPlatform;

 __declspec(property(get=get_isServer)) bool  isServer;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

 __declspec(property(get=get_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Method Awake, addr 0x18040e540, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckNodeForPlatform, addr 0x18040e5e0, size 0x120, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::StickyPlatform> CheckNodeForPlatform(::GlobalNamespace::PlatformingBody*  node, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  alreadyChecked) ;

/// @brief Method EmptyContacts, addr 0x18040e700, size 0x120, virtual false, abstract: false, final false
inline void EmptyContacts() ;

static inline ::GlobalNamespace::PlatformingBody* New_ctor() ;

/// @brief Method OnCollisionChange, addr 0x18040e820, size 0x230, virtual false, abstract: false, final false
inline void OnCollisionChange() ;

/// @brief Method OnCollisionEnter, addr 0x18040ea50, size 0x210, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  col) ;

/// @brief Method OnCollisionExit, addr 0x18040ec60, size 0x160, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  col) ;

/// @brief Method RemoveAllContacts, addr 0x18040edc0, size 0xa0, virtual false, abstract: false, final false
inline void RemoveAllContacts(::GlobalNamespace::PlatformingBody*  otherBody) ;

/// @brief Method RemoveContact, addr 0x18040ee60, size 0x100, virtual false, abstract: false, final false
inline void RemoveContact(::GlobalNamespace::PlatformingBody*  otherBody) ;

/// @brief Method SetConnectedPlatform, addr 0x18040ef60, size 0x200, virtual false, abstract: false, final false
inline void SetConnectedPlatform(::GlobalNamespace::StickyPlatform*  connectedPlatform) ;

/// @brief Method SetNodePlatformState, addr 0x18040f160, size 0x110, virtual false, abstract: false, final false
inline void SetNodePlatformState(::GlobalNamespace::StickyPlatform*  connectedPlatform, ::GlobalNamespace::PlatformingBody*  node, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  alreadyChecked) ;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform> const& __cordl_internal_get_HouseNetworkTransform() const;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform>& __cordl_internal_get_HouseNetworkTransform() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rb() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>* const& __cordl_internal_get_checkedBodies() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*& __cordl_internal_get_checkedBodies() ;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& __cordl_internal_get_connectedPlatform() const;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& __cordl_internal_get_connectedPlatform() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>* const& __cordl_internal_get_contacts() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>*& __cordl_internal_get_contacts() ;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& __cordl_internal_get_hasPlatform() const;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& __cordl_internal_get_hasPlatform() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_HouseNetworkTransform(::UnityW<::LobbyNetworking::HouseNetworkTransform>  value) ;

constexpr void __cordl_internal_set__rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_checkedBodies(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  value) ;

constexpr void __cordl_internal_set_connectedPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value) ;

constexpr void __cordl_internal_set_contacts(::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>*  value) ;

constexpr void __cordl_internal_set_hasPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_hasContacts, addr 0x18040f270, size 0x20, virtual false, abstract: false, final false
inline bool get_hasContacts() ;

/// @brief Method get_isServer, addr 0x1803163c0, size 0x40, virtual false, abstract: false, final false
inline bool get_isServer() ;

/// @brief Method get_rb, addr 0x18040f290, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_rb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformingBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformingBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformingBody(PlatformingBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformingBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformingBody(PlatformingBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5101};

/// @brief Field hasPlatform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StickyPlatform>  ___hasPlatform;

/// @brief Field HouseNetworkTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::LobbyNetworking::HouseNetworkTransform>  ___HouseNetworkTransform;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _rb, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rb;

/// @brief Field contacts, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>*  ___contacts;

/// @brief Field checkedBodies, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  ___checkedBodies;

/// @brief Field connectedPlatform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StickyPlatform>  ___connectedPlatform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformingBody, ___hasPlatform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformingBody, ___HouseNetworkTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformingBody, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformingBody, ____rb) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformingBody, ___contacts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformingBody, ___checkedBodies) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformingBody, ___connectedPlatform) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformingBody) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
