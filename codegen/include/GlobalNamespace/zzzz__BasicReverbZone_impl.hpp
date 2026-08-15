#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicReverbZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicReverbZone_def.hpp"
#include "GlobalNamespace/zzzz__AudioBasicReverb_def.hpp"
#include "GlobalNamespace/zzzz__BasicReverbConfig_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BasicReverbZone::*)()>(&::GlobalNamespace::BasicReverbZone::get_Initialized)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.get_InZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BasicReverbZone::*)()>(&::GlobalNamespace::BasicReverbZone::get_InZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"get_InZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.set_InZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbZone::*)(bool)>(&::GlobalNamespace::BasicReverbZone::set_InZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"set_InZone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbZone::*)()>(&::GlobalNamespace::BasicReverbZone::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18049c750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BasicReverbZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18049c640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BasicReverbZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18049c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbZone::*)()>(&::GlobalNamespace::BasicReverbZone::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbZone::*)()>(&::GlobalNamespace::BasicReverbZone::Initialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18049c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicReverbZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbZone::*)()>(&::GlobalNamespace::BasicReverbZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BasicReverbConfig>& GlobalNamespace::BasicReverbZone::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::UnityW<::GlobalNamespace::BasicReverbConfig> const& GlobalNamespace::BasicReverbZone::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void GlobalNamespace::BasicReverbZone::__cordl_internal_set_Config(::UnityW<::GlobalNamespace::BasicReverbConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
constexpr int32_t& GlobalNamespace::BasicReverbZone::__cordl_internal_get_Priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr int32_t const& GlobalNamespace::BasicReverbZone::__cordl_internal_get_Priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr void GlobalNamespace::BasicReverbZone::__cordl_internal_set_Priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Priority = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb>& GlobalNamespace::BasicReverbZone::__cordl_internal_get__basicReverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basicReverb;
}
constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb> const& GlobalNamespace::BasicReverbZone::__cordl_internal_get__basicReverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basicReverb;
}
constexpr void GlobalNamespace::BasicReverbZone::__cordl_internal_set__basicReverb(::UnityW<::GlobalNamespace::AudioBasicReverb>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____basicReverb = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::BasicReverbZone::__cordl_internal_get__playerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::BasicReverbZone::__cordl_internal_get__playerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCollider;
}
constexpr void GlobalNamespace::BasicReverbZone::__cordl_internal_set__playerCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerCollider = value;
}
constexpr bool& GlobalNamespace::BasicReverbZone::__cordl_internal_get__InZone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InZone_k__BackingField;
}
constexpr bool const& GlobalNamespace::BasicReverbZone::__cordl_internal_get__InZone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InZone_k__BackingField;
}
constexpr void GlobalNamespace::BasicReverbZone::__cordl_internal_set__InZone_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InZone_k__BackingField = value;
}
inline bool GlobalNamespace::BasicReverbZone::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BasicReverbZone::get_InZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"get_InZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BasicReverbZone::set_InZone(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"set_InZone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicReverbZone::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicReverbZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BasicReverbZone::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BasicReverbZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicReverbZone::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicReverbZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicReverbZone* GlobalNamespace::BasicReverbZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicReverbZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicReverbZone::BasicReverbZone()   {
}
