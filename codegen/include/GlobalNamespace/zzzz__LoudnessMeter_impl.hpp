#pragma once
// IWYU pragma private; include "GlobalNamespace/LoudnessMeter.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__LoudnessMeter_def.hpp"
#include "GlobalNamespace/zzzz__LoudnessMeter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType::LoudnessMeter_LoudnessMeterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType::LoudnessMeter_LoudnessMeterType()   {
}
constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType  GlobalNamespace::LoudnessMeter_LoudnessMeterType::Peak{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType  GlobalNamespace::LoudnessMeter_LoudnessMeterType::RMS{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.get_ChannelLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::LoudnessMeter::*)()>(&::GlobalNamespace::LoudnessMeter::get_ChannelLevels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"get_ChannelLevels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.set_ChannelLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoudnessMeter::*)(::ArrayW<float_t>)>(&::GlobalNamespace::LoudnessMeter::set_ChannelLevels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"set_ChannelLevels", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.get_ChannelLevelsLerped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::LoudnessMeter::*)()>(&::GlobalNamespace::LoudnessMeter::get_ChannelLevelsLerped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"get_ChannelLevelsLerped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.set_ChannelLevelsLerped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoudnessMeter::*)(::ArrayW<float_t>)>(&::GlobalNamespace::LoudnessMeter::set_ChannelLevelsLerped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"set_ChannelLevelsLerped", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LoudnessMeter::*)()>(&::GlobalNamespace::LoudnessMeter::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                    {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoudnessMeter::*)(bool)>(&::GlobalNamespace::LoudnessMeter::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                    {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LoudnessMeter::*)()>(&::GlobalNamespace::LoudnessMeter::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                    {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoudnessMeter::*)(bool)>(&::GlobalNamespace::LoudnessMeter::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                    {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoudnessMeter::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::LoudnessMeter::ProcessSamples)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18049f2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                    {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoudnessMeter::*)(float_t)>(&::GlobalNamespace::LoudnessMeter::UpdateVariables)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18049f490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                    {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter.GetAvg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LoudnessMeter::*)()>(&::GlobalNamespace::LoudnessMeter::GetAvg)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"GetAvg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LoudnessMeter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LoudnessMeter::*)()>(&::GlobalNamespace::LoudnessMeter::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18049f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType& GlobalNamespace::LoudnessMeter::__cordl_internal_get_MeterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeterType;
}
constexpr ::GlobalNamespace::LoudnessMeter_LoudnessMeterType const& GlobalNamespace::LoudnessMeter::__cordl_internal_get_MeterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeterType;
}
constexpr void GlobalNamespace::LoudnessMeter::__cordl_internal_set_MeterType(::GlobalNamespace::LoudnessMeter_LoudnessMeterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MeterType = value;
}
constexpr float_t& GlobalNamespace::LoudnessMeter::__cordl_internal_get_LerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LerpSpeed;
}
constexpr float_t const& GlobalNamespace::LoudnessMeter::__cordl_internal_get_LerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LerpSpeed;
}
constexpr void GlobalNamespace::LoudnessMeter::__cordl_internal_set_LerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LerpSpeed = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::LoudnessMeter::__cordl_internal_get__ChannelLevels_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelLevels_k__BackingField;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::LoudnessMeter::__cordl_internal_get__ChannelLevels_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelLevels_k__BackingField;
}
constexpr void GlobalNamespace::LoudnessMeter::__cordl_internal_set__ChannelLevels_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChannelLevels_k__BackingField = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::LoudnessMeter::__cordl_internal_get__ChannelLevelsLerped_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelLevelsLerped_k__BackingField;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::LoudnessMeter::__cordl_internal_get__ChannelLevelsLerped_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelLevelsLerped_k__BackingField;
}
constexpr void GlobalNamespace::LoudnessMeter::__cordl_internal_set__ChannelLevelsLerped_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChannelLevelsLerped_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LoudnessMeter::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::LoudnessMeter::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::LoudnessMeter::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::LoudnessMeter::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::LoudnessMeter::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::LoudnessMeter::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
inline void GlobalNamespace::LoudnessMeter::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::LoudnessMeter*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::LoudnessMeter::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::LoudnessMeter*>();
}
inline ::ArrayW<float_t> GlobalNamespace::LoudnessMeter::get_ChannelLevels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"get_ChannelLevels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::LoudnessMeter::set_ChannelLevels(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"set_ChannelLevels", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> GlobalNamespace::LoudnessMeter::get_ChannelLevelsLerped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"get_ChannelLevelsLerped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::LoudnessMeter::set_ChannelLevelsLerped(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"set_ChannelLevelsLerped", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LoudnessMeter::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LoudnessMeter::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LoudnessMeter::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LoudnessMeter::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LoudnessMeter::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::LoudnessMeter::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline float_t GlobalNamespace::LoudnessMeter::GetAvg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {"GetAvg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LoudnessMeter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LoudnessMeter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LoudnessMeter* GlobalNamespace::LoudnessMeter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LoudnessMeter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LoudnessMeter::LoudnessMeter()   {
}
