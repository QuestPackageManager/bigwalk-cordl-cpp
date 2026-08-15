#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSend.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__AudioReceive_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSend_def.hpp"
#include "GlobalNamespace/zzzz__AudioReceive_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSend.get_Receives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>> (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::get_Receives)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_Receives", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.set_Receives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(::ArrayW<::GlobalNamespace::AudioReceive*>)>(&::GlobalNamespace::AudioSend::set_Receives)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18049a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_Receives", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::AudioReceive*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.get_VolBeforeSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::get_VolBeforeSend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_VolBeforeSend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.set_VolBeforeSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(float_t)>(&::GlobalNamespace::AudioSend::set_VolBeforeSend)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_VolBeforeSend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.get_VolAfterSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::get_VolAfterSend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_VolAfterSend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.set_VolAfterSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(float_t)>(&::GlobalNamespace::AudioSend::set_VolAfterSend)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_VolAfterSend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.get_CachedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::get_CachedData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_CachedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.set_CachedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(::ArrayW<float_t>)>(&::GlobalNamespace::AudioSend::set_CachedData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_CachedData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(bool)>(&::GlobalNamespace::AudioSend::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(bool)>(&::GlobalNamespace::AudioSend::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180499fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::AudioSend::ProcessSamples)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18049a3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)(float_t)>(&::GlobalNamespace::AudioSend::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend.ClearData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::ClearData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"ClearData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSend._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSend::*)()>(&::GlobalNamespace::AudioSend::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>& GlobalNamespace::AudioSend::__cordl_internal_get__audioReceives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioReceives;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>> const& GlobalNamespace::AudioSend::__cordl_internal_get__audioReceives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioReceives;
}
constexpr void GlobalNamespace::AudioSend::__cordl_internal_set__audioReceives(::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioReceives = value;
}
constexpr float_t& GlobalNamespace::AudioSend::__cordl_internal_get__volBeforeSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volBeforeSend;
}
constexpr float_t const& GlobalNamespace::AudioSend::__cordl_internal_get__volBeforeSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volBeforeSend;
}
constexpr void GlobalNamespace::AudioSend::__cordl_internal_set__volBeforeSend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volBeforeSend = value;
}
constexpr float_t& GlobalNamespace::AudioSend::__cordl_internal_get__volAfterSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volAfterSend;
}
constexpr float_t const& GlobalNamespace::AudioSend::__cordl_internal_get__volAfterSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volAfterSend;
}
constexpr void GlobalNamespace::AudioSend::__cordl_internal_set__volAfterSend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volAfterSend = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioSend::__cordl_internal_get__CachedData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedData_k__BackingField;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioSend::__cordl_internal_get__CachedData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedData_k__BackingField;
}
constexpr void GlobalNamespace::AudioSend::__cordl_internal_set__CachedData_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedData_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioSend::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::AudioSend::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::AudioSend::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::AudioSend::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::AudioSend::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::AudioSend::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
inline void GlobalNamespace::AudioSend::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::AudioSend*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::AudioSend::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::AudioSend*>();
}
inline ::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>> GlobalNamespace::AudioSend::get_Receives()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_Receives", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::AudioReceive>>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::set_Receives(::ArrayW<::GlobalNamespace::AudioReceive*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_Receives", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::AudioReceive*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSend::get_VolBeforeSend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_VolBeforeSend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::set_VolBeforeSend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_VolBeforeSend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSend::get_VolAfterSend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_VolAfterSend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::set_VolAfterSend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_VolAfterSend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> GlobalNamespace::AudioSend::get_CachedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"get_CachedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::set_CachedData(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"set_CachedData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSend::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSend::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioSend::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AudioSend::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSend*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioSend::ClearData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {"ClearData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSend::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSend*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSend* GlobalNamespace::AudioSend::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSend*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSend::AudioSend()   {
}
