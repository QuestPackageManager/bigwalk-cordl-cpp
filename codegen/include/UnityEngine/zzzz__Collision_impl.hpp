#pragma once
// IWYU pragma private; include "UnityEngine/Collision.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_impl.hpp"
#include "UnityEngine/zzzz__ContactPair_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_impl.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::UnityEngine::Collision.get_rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_rigidbody)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822fc470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_body
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_body)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822fc250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_body", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_collider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_collider)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822fc290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_collider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_gameObject)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822fc390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.set_Flipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(bool)>(&::UnityEngine::Collision::set_Flipped)> {
  constexpr static std::size_t size = 0x1ac0;
  constexpr static std::size_t addrs = 0x1813bddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"set_Flipped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contactCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contactCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_contactCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ContactPoint> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contacts)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822fc320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_contacts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822fc1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(::by_ref<::UnityEngine::ContactPairHeader>, ::by_ref<::UnityEngine::ContactPair>, bool)>(&::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822fc100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.Reuse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Collision::*)(::by_ref<::UnityEngine::ContactPairHeader>, ::by_ref<::UnityEngine::ContactPair>)>(&::UnityEngine::Collision::Reuse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822fc080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"Reuse", {}, {::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.GetContact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ContactPoint (::UnityEngine::Collision::*)(int32_t)>(&::UnityEngine::Collision::GetContact)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1822fbe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"GetContact", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ContactPairHeader& UnityEngine::Collision::__cordl_internal_get_m_Header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Header;
}
constexpr ::UnityEngine::ContactPairHeader const& UnityEngine::Collision::__cordl_internal_get_m_Header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Header;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Header(::UnityEngine::ContactPairHeader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Header = value;
}
constexpr ::UnityEngine::ContactPair& UnityEngine::Collision::__cordl_internal_get_m_Pair()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pair;
}
constexpr ::UnityEngine::ContactPair const& UnityEngine::Collision::__cordl_internal_get_m_Pair() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pair;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Pair(::UnityEngine::ContactPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pair = value;
}
constexpr bool& UnityEngine::Collision::__cordl_internal_get_m_Flipped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flipped;
}
constexpr bool const& UnityEngine::Collision::__cordl_internal_get_m_Flipped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flipped;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Flipped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flipped = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint>& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint> const& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyContacts = value;
}
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::Collision::get_rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Collision::get_body()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_body", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Collision::get_collider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_collider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Collision::get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::Collision::set_Flipped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"set_Flipped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Collision::get_contactCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_contactCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ContactPoint> UnityEngine::Collision::get_contacts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"get_contacts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ContactPoint>>(this, ___internal_method);
}
inline void UnityEngine::Collision::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Collision::_ctor(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Collision::Reuse(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"Reuse", {}, {::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, pair);
}
inline ::UnityEngine::ContactPoint UnityEngine::Collision::GetContact(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Collision*>(),
                        {"GetContact", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactPoint>(this, ___internal_method, index);
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Collision*>());
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair, bool  flipped)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Collision*>(header, pair, flipped));
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision::Collision()   {
}
