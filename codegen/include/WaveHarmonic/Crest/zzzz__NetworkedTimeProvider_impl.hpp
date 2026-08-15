#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/NetworkedTimeProvider.hpp"
#include "WaveHarmonic/Crest/zzzz__TimeProvider_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__NetworkedTimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultTimeProvider_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::NetworkedTimeProvider.get_TimeOffsetToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::NetworkedTimeProvider::*)()>(&::WaveHarmonic::Crest::NetworkedTimeProvider::get_TimeOffsetToServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                        {"get_TimeOffsetToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::NetworkedTimeProvider.set_TimeOffsetToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::NetworkedTimeProvider::*)(float_t)>(&::WaveHarmonic::Crest::NetworkedTimeProvider::set_TimeOffsetToServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                        {"set_TimeOffsetToServer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::NetworkedTimeProvider.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::NetworkedTimeProvider::*)()>(&::WaveHarmonic::Crest::NetworkedTimeProvider::get_Time)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::NetworkedTimeProvider.get_Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::NetworkedTimeProvider::*)()>(&::WaveHarmonic::Crest::NetworkedTimeProvider::get_Delta)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::NetworkedTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::NetworkedTimeProvider::*)()>(&::WaveHarmonic::Crest::NetworkedTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::NetworkedTimeProvider::__cordl_internal_get__TimeOffsetToServer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeOffsetToServer_k__BackingField;
}
constexpr float_t const& WaveHarmonic::Crest::NetworkedTimeProvider::__cordl_internal_get__TimeOffsetToServer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeOffsetToServer_k__BackingField;
}
constexpr void WaveHarmonic::Crest::NetworkedTimeProvider::__cordl_internal_set__TimeOffsetToServer_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeOffsetToServer_k__BackingField = value;
}
constexpr ::WaveHarmonic::Crest::DefaultTimeProvider*& WaveHarmonic::Crest::NetworkedTimeProvider::__cordl_internal_get__DefaultTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultTimeProvider;
}
constexpr ::WaveHarmonic::Crest::DefaultTimeProvider* const& WaveHarmonic::Crest::NetworkedTimeProvider::__cordl_internal_get__DefaultTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultTimeProvider;
}
constexpr void WaveHarmonic::Crest::NetworkedTimeProvider::__cordl_internal_set__DefaultTimeProvider(::WaveHarmonic::Crest::DefaultTimeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultTimeProvider = value;
}
inline float_t WaveHarmonic::Crest::NetworkedTimeProvider::get_TimeOffsetToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                        {"get_TimeOffsetToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::NetworkedTimeProvider::set_TimeOffsetToServer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                        {"set_TimeOffsetToServer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::NetworkedTimeProvider::get_Time()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::NetworkedTimeProvider::get_Delta()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::NetworkedTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::NetworkedTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::NetworkedTimeProvider* WaveHarmonic::Crest::NetworkedTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::NetworkedTimeProvider*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::NetworkedTimeProvider::NetworkedTimeProvider()   {
}
