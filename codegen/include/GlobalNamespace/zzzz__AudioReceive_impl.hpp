#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioReceive.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__AudioReceive_def.hpp"
#include "GlobalNamespace/zzzz__AudioSend_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioReceive::*)()>(&::GlobalNamespace::AudioReceive::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(bool)>(&::GlobalNamespace::AudioReceive::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioReceive::*)()>(&::GlobalNamespace::AudioReceive::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(bool)>(&::GlobalNamespace::AudioReceive::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.get_Vol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioReceive::*)()>(&::GlobalNamespace::AudioReceive::get_Vol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"get_Vol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.set_Vol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(float_t)>(&::GlobalNamespace::AudioReceive::set_Vol)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"set_Vol", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.get_Sends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>* (::GlobalNamespace::AudioReceive::*)()>(&::GlobalNamespace::AudioReceive::get_Sends)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"get_Sends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.set_Sends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*)>(&::GlobalNamespace::AudioReceive::set_Sends)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"set_Sends", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)()>(&::GlobalNamespace::AudioReceive::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180499fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(float_t)>(&::GlobalNamespace::AudioReceive::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::AudioReceive::ProcessSamples)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18049a080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.AssignSends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(::GlobalNamespace::AudioSend*)>(&::GlobalNamespace::AudioReceive::AssignSends)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180499ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"AssignSends", {}, {::i2c::type_of<::GlobalNamespace::AudioSend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive.RemoveSends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)(::GlobalNamespace::AudioSend*)>(&::GlobalNamespace::AudioReceive::RemoveSends)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18049a290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"RemoveSends", {}, {::i2c::type_of<::GlobalNamespace::AudioSend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReceive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReceive::*)()>(&::GlobalNamespace::AudioReceive::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18049a330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioReceive::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::AudioReceive::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::AudioReceive::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::AudioReceive::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::AudioReceive::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::AudioReceive::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr float_t& GlobalNamespace::AudioReceive::__cordl_internal_get__vol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vol;
}
constexpr float_t const& GlobalNamespace::AudioReceive::__cordl_internal_get__vol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vol;
}
constexpr void GlobalNamespace::AudioReceive::__cordl_internal_set__vol(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vol = value;
}
constexpr bool& GlobalNamespace::AudioReceive::__cordl_internal_get_MultiplyMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplyMode;
}
constexpr bool const& GlobalNamespace::AudioReceive::__cordl_internal_get_MultiplyMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplyMode;
}
constexpr void GlobalNamespace::AudioReceive::__cordl_internal_set_MultiplyMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultiplyMode = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioReceive::__cordl_internal_get__mixedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixedData;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioReceive::__cordl_internal_get__mixedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixedData;
}
constexpr void GlobalNamespace::AudioReceive::__cordl_internal_set__mixedData(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mixedData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*& GlobalNamespace::AudioReceive::__cordl_internal_get__Sends_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sends_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>* const& GlobalNamespace::AudioReceive::__cordl_internal_get__Sends_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sends_k__BackingField;
}
constexpr void GlobalNamespace::AudioReceive::__cordl_internal_set__Sends_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sends_k__BackingField = value;
}
inline void GlobalNamespace::AudioReceive::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::AudioReceive*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::AudioReceive::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::AudioReceive*>();
}
inline bool GlobalNamespace::AudioReceive::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReceive::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioReceive::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReceive::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioReceive::get_Vol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"get_Vol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReceive::set_Vol(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"set_Vol", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>* GlobalNamespace::AudioReceive::get_Sends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"get_Sends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReceive::set_Sends(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"set_Sends", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSend>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioReceive::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReceive::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioReceive::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioReceive*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AudioReceive::AssignSends(::GlobalNamespace::AudioSend*  send)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"AssignSends", {}, {::i2c::type_of<::GlobalNamespace::AudioSend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, send);
}
inline void GlobalNamespace::AudioReceive::RemoveSends(::GlobalNamespace::AudioSend*  send)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {"RemoveSends", {}, {::i2c::type_of<::GlobalNamespace::AudioSend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, send);
}
inline void GlobalNamespace::AudioReceive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReceive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioReceive* GlobalNamespace::AudioReceive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioReceive*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioReceive::AudioReceive()   {
}
