#pragma once
// IWYU pragma private; include "UnityEngine/Collision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collision)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct ContactPoint;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace UnityEngine {
class Collision;
}
// Write type traits
MARK_REF_T(::UnityEngine::Collision*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Collision*, "UnityEngine", "Collision");
// Dependencies System.Object, UnityEngine.ContactPair, UnityEngine.ContactPairHeader, UnityEngine.ContactPoint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collision
class CORDL_TYPE Collision : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_Flipped)) bool  Flipped;

 __declspec(property(get=get_body)) ::UnityW<::UnityEngine::Component>  body;

 __declspec(property(get=get_collider)) ::UnityW<::UnityEngine::Collider>  collider;

 __declspec(property(get=get_contactCount)) int32_t  contactCount;

 __declspec(property(get=get_contacts)) ::ArrayW<::UnityEngine::ContactPoint>  contacts;

 __declspec(property(get=get_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field m_Flipped, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Flipped, put=__cordl_internal_set_m_Flipped)) bool  m_Flipped;

/// @brief Field m_Header, offset 0x10, size 0x48 
 __declspec(property(get=__cordl_internal_get_m_Header, put=__cordl_internal_set_m_Header)) ::UnityEngine::ContactPairHeader  m_Header;

/// @brief Field m_LegacyContacts, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyContacts, put=__cordl_internal_set_m_LegacyContacts)) ::ArrayW<::UnityEngine::ContactPoint>  m_LegacyContacts;

/// @brief Field m_Pair, offset 0x58, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_Pair, put=__cordl_internal_set_m_Pair)) ::UnityEngine::ContactPair  m_Pair;

 __declspec(property(get=get_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

/// @brief Method GetContact, addr 0x1822fbe70, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::ContactPoint GetContact(int32_t  index) ;

static inline ::UnityEngine::Collision* New_ctor() ;

static inline ::UnityEngine::Collision* New_ctor(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method Reuse, addr 0x1822fc080, size 0x80, virtual false, abstract: false, final false
inline void Reuse(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair) ;

constexpr bool const& __cordl_internal_get_m_Flipped() const;

constexpr bool& __cordl_internal_get_m_Flipped() ;

constexpr ::UnityEngine::ContactPairHeader const& __cordl_internal_get_m_Header() const;

constexpr ::UnityEngine::ContactPairHeader& __cordl_internal_get_m_Header() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint> const& __cordl_internal_get_m_LegacyContacts() const;

constexpr ::ArrayW<::UnityEngine::ContactPoint>& __cordl_internal_get_m_LegacyContacts() ;

constexpr ::UnityEngine::ContactPair const& __cordl_internal_get_m_Pair() const;

constexpr ::UnityEngine::ContactPair& __cordl_internal_get_m_Pair() ;

constexpr void __cordl_internal_set_m_Flipped(bool  value) ;

constexpr void __cordl_internal_set_m_Header(::UnityEngine::ContactPairHeader  value) ;

constexpr void __cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint>  value) ;

constexpr void __cordl_internal_set_m_Pair(::UnityEngine::ContactPair  value) ;

/// @brief Method .ctor, addr 0x1822fc1e0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1822fc100, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method get_body, addr 0x1822fc250, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_body() ;

/// @brief Method get_collider, addr 0x1822fc290, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_collider() ;

/// @brief Method get_contactCount, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_contactCount() ;

/// @brief Method get_contacts, addr 0x1822fc320, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::ContactPoint> get_contacts() ;

/// @brief Method get_gameObject, addr 0x1822fc390, size 0xe0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_gameObject() ;

/// @brief Method get_rigidbody, addr 0x1822fc470, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_rigidbody() ;

/// @brief Method set_Flipped, addr 0x1813bddf0, size 0x1ac0, virtual false, abstract: false, final false
inline void set_Flipped(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collision(Collision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collision(Collision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20178};

/// @brief Field m_Header, offset: 0x10, size: 0x48, def value: None
 ::UnityEngine::ContactPairHeader  ___m_Header;

/// @brief Field m_Pair, offset: 0x58, size: 0x28, def value: None
 ::UnityEngine::ContactPair  ___m_Pair;

/// @brief Field m_Flipped, offset: 0x80, size: 0x1, def value: None
 bool  ___m_Flipped;

/// @brief Field m_LegacyContacts, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::ContactPoint>  ___m_LegacyContacts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Collision, ___m_Header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Pair) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Flipped) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_LegacyContacts) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Collision) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine
