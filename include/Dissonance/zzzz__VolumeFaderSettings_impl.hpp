#pragma once
// IWYU pragma private; include "Dissonance/VolumeFaderSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__VolumeFaderSettings_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::VolumeFaderSettings.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::VolumeFaderSettings::*)()>(&::Dissonance::VolumeFaderSettings::get_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VolumeFaderSettings.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VolumeFaderSettings::*)(float_t)>(&::Dissonance::VolumeFaderSettings::set_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VolumeFaderSettings.get_FadeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::VolumeFaderSettings::*)()>(&::Dissonance::VolumeFaderSettings::get_FadeIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"get_FadeIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VolumeFaderSettings.set_FadeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VolumeFaderSettings::*)(::System::TimeSpan)>(&::Dissonance::VolumeFaderSettings::set_FadeIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"set_FadeIn", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VolumeFaderSettings.get_FadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::VolumeFaderSettings::*)()>(&::Dissonance::VolumeFaderSettings::get_FadeOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"get_FadeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VolumeFaderSettings.set_FadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VolumeFaderSettings::*)(::System::TimeSpan)>(&::Dissonance::VolumeFaderSettings::set_FadeOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"set_FadeOut", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VolumeFaderSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VolumeFaderSettings::*)()>(&::Dissonance::VolumeFaderSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Dissonance::VolumeFaderSettings::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr float_t const& Dissonance::VolumeFaderSettings::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void Dissonance::VolumeFaderSettings::__cordl_internal_set__volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr int64_t& Dissonance::VolumeFaderSettings::__cordl_internal_get__fadeInTicks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeInTicks;
}
constexpr int64_t const& Dissonance::VolumeFaderSettings::__cordl_internal_get__fadeInTicks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeInTicks;
}
constexpr void Dissonance::VolumeFaderSettings::__cordl_internal_set__fadeInTicks(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeInTicks = value;
}
constexpr int64_t& Dissonance::VolumeFaderSettings::__cordl_internal_get__fadeOutTicks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutTicks;
}
constexpr int64_t const& Dissonance::VolumeFaderSettings::__cordl_internal_get__fadeOutTicks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutTicks;
}
constexpr void Dissonance::VolumeFaderSettings::__cordl_internal_set__fadeOutTicks(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOutTicks = value;
}
inline float_t Dissonance::VolumeFaderSettings::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::VolumeFaderSettings::set_Volume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan Dissonance::VolumeFaderSettings::get_FadeIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"get_FadeIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void Dissonance::VolumeFaderSettings::set_FadeIn(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"set_FadeIn", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan Dissonance::VolumeFaderSettings::get_FadeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"get_FadeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void Dissonance::VolumeFaderSettings::set_FadeOut(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {"set_FadeOut", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VolumeFaderSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VolumeFaderSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::VolumeFaderSettings* Dissonance::VolumeFaderSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VolumeFaderSettings*>());
}
// Ctor Parameters []
constexpr ::Dissonance::VolumeFaderSettings::VolumeFaderSettings()   {
}
