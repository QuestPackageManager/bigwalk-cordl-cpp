#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformingBody.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformingBody_def.hpp"
#include "GlobalNamespace/zzzz__PlatformingBody_def.hpp"
#include "GlobalNamespace/zzzz__StickyPlatform_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
// Ctor Parameters [CppParam { name: "otherBody", ty: "::UnityW<::GlobalNamespace::PlatformingBody>", modifiers: "", def_value: Some("{}") }, CppParam { name: "contactCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformingBody_PlatformingContact::PlatformingBody_PlatformingContact(::UnityW<::GlobalNamespace::PlatformingBody>  otherBody, int32_t  contactCount) noexcept  {
this->otherBody = otherBody;
this->contactCount = contactCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformingBody_PlatformingContact::PlatformingBody_PlatformingContact()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.get_rb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GlobalNamespace::PlatformingBody::*)()>(&::GlobalNamespace::PlatformingBody::get_rb)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18040f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"get_rb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.get_isServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlatformingBody::*)()>(&::GlobalNamespace::PlatformingBody::get_isServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803163c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"get_isServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)()>(&::GlobalNamespace::PlatformingBody::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18040e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.SetConnectedPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)(::GlobalNamespace::StickyPlatform*)>(&::GlobalNamespace::PlatformingBody::SetConnectedPlatform)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18040ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"SetConnectedPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::PlatformingBody::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18040ea50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::PlatformingBody::OnCollisionExit)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18040ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.RemoveContact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)(::GlobalNamespace::PlatformingBody*)>(&::GlobalNamespace::PlatformingBody::RemoveContact)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18040ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"RemoveContact", {}, {::i2c::type_of<::GlobalNamespace::PlatformingBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.RemoveAllContacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)(::GlobalNamespace::PlatformingBody*)>(&::GlobalNamespace::PlatformingBody::RemoveAllContacts)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18040edc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"RemoveAllContacts", {}, {::i2c::type_of<::GlobalNamespace::PlatformingBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.OnCollisionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)()>(&::GlobalNamespace::PlatformingBody::OnCollisionChange)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18040e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"OnCollisionChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.SetNodePlatformState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)(::GlobalNamespace::StickyPlatform*, ::GlobalNamespace::PlatformingBody*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*)>(&::GlobalNamespace::PlatformingBody::SetNodePlatformState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18040f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"SetNodePlatformState", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>(), ::i2c::type_of<::GlobalNamespace::PlatformingBody*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.CheckNodeForPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::StickyPlatform> (::GlobalNamespace::PlatformingBody::*)(::GlobalNamespace::PlatformingBody*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*)>(&::GlobalNamespace::PlatformingBody::CheckNodeForPlatform)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18040e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"CheckNodeForPlatform", {}, {::i2c::type_of<::GlobalNamespace::PlatformingBody*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.EmptyContacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)()>(&::GlobalNamespace::PlatformingBody::EmptyContacts)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18040e700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"EmptyContacts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody.get_hasContacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlatformingBody::*)()>(&::GlobalNamespace::PlatformingBody::get_hasContacts)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18040f270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"get_hasContacts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformingBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformingBody::*)()>(&::GlobalNamespace::PlatformingBody::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& GlobalNamespace::PlatformingBody::__cordl_internal_get_hasPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPlatform;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& GlobalNamespace::PlatformingBody::__cordl_internal_get_hasPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPlatform;
}
constexpr void GlobalNamespace::PlatformingBody::__cordl_internal_set_hasPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPlatform = value;
}
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform>& GlobalNamespace::PlatformingBody::__cordl_internal_get_HouseNetworkTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HouseNetworkTransform;
}
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform> const& GlobalNamespace::PlatformingBody::__cordl_internal_get_HouseNetworkTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HouseNetworkTransform;
}
constexpr void GlobalNamespace::PlatformingBody::__cordl_internal_set_HouseNetworkTransform(::UnityW<::LobbyNetworking::HouseNetworkTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HouseNetworkTransform = value;
}
constexpr bool& GlobalNamespace::PlatformingBody::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlatformingBody::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlatformingBody::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::PlatformingBody::__cordl_internal_get__rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::PlatformingBody::__cordl_internal_get__rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rb;
}
constexpr void GlobalNamespace::PlatformingBody::__cordl_internal_set__rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rb = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>*& GlobalNamespace::PlatformingBody::__cordl_internal_get_contacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contacts;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>* const& GlobalNamespace::PlatformingBody::__cordl_internal_get_contacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contacts;
}
constexpr void GlobalNamespace::PlatformingBody::__cordl_internal_set_contacts(::System::Collections::Generic::List_1<::GlobalNamespace::PlatformingBody_PlatformingContact>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contacts = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*& GlobalNamespace::PlatformingBody::__cordl_internal_get_checkedBodies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkedBodies;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>* const& GlobalNamespace::PlatformingBody::__cordl_internal_get_checkedBodies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkedBodies;
}
constexpr void GlobalNamespace::PlatformingBody::__cordl_internal_set_checkedBodies(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkedBodies = value;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& GlobalNamespace::PlatformingBody::__cordl_internal_get_connectedPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedPlatform;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& GlobalNamespace::PlatformingBody::__cordl_internal_get_connectedPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedPlatform;
}
constexpr void GlobalNamespace::PlatformingBody::__cordl_internal_set_connectedPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedPlatform = value;
}
inline ::UnityW<::UnityEngine::Rigidbody> GlobalNamespace::PlatformingBody::get_rb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"get_rb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline bool GlobalNamespace::PlatformingBody::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"get_isServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformingBody::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformingBody::SetConnectedPlatform(::GlobalNamespace::StickyPlatform*  connectedPlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"SetConnectedPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlatform);
}
inline void GlobalNamespace::PlatformingBody::OnCollisionEnter(::UnityEngine::Collision*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::PlatformingBody::OnCollisionExit(::UnityEngine::Collision*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::PlatformingBody::RemoveContact(::GlobalNamespace::PlatformingBody*  otherBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"RemoveContact", {}, {::i2c::type_of<::GlobalNamespace::PlatformingBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherBody);
}
inline void GlobalNamespace::PlatformingBody::RemoveAllContacts(::GlobalNamespace::PlatformingBody*  otherBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"RemoveAllContacts", {}, {::i2c::type_of<::GlobalNamespace::PlatformingBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherBody);
}
inline void GlobalNamespace::PlatformingBody::OnCollisionChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"OnCollisionChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformingBody::SetNodePlatformState(::GlobalNamespace::StickyPlatform*  connectedPlatform, ::GlobalNamespace::PlatformingBody*  node, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  alreadyChecked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"SetNodePlatformState", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>(), ::i2c::type_of<::GlobalNamespace::PlatformingBody*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlatform, node, alreadyChecked);
}
inline ::UnityW<::GlobalNamespace::StickyPlatform> GlobalNamespace::PlatformingBody::CheckNodeForPlatform(::GlobalNamespace::PlatformingBody*  node, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*  alreadyChecked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"CheckNodeForPlatform", {}, {::i2c::type_of<::GlobalNamespace::PlatformingBody*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformingBody>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::StickyPlatform>>(this, ___internal_method, node, alreadyChecked);
}
inline void GlobalNamespace::PlatformingBody::EmptyContacts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"EmptyContacts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlatformingBody::get_hasContacts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {"get_hasContacts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformingBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformingBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformingBody* GlobalNamespace::PlatformingBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformingBody*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformingBody::PlatformingBody()   {
}
