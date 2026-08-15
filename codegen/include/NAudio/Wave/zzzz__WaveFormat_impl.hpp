#pragma once
// IWYU pragma private; include "NAudio/Wave/WaveFormat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
//  Writing Method size for method: ::NAudio::Wave::WaveFormat.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::NAudio::Wave::WaveFormat::*)()>(&::NAudio::Wave::WaveFormat::get_Channels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFormat.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::NAudio::Wave::WaveFormat::*)()>(&::NAudio::Wave::WaveFormat::get_SampleRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {"get_SampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFormat::*)(int32_t, int32_t)>(&::NAudio::Wave::WaveFormat::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d5d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFormat.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NAudio::Wave::WaveFormat::*)(::NAudio::Wave::WaveFormat*)>(&::NAudio::Wave::WaveFormat::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d5c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {"Equals", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFormat.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::NAudio::Wave::WaveFormat::*)()>(&::NAudio::Wave::WaveFormat::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d5cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFormat*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFormat.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::NAudio::Wave::WaveFormat::*)()>(&::NAudio::Wave::WaveFormat::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d5ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFormat*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& NAudio::Wave::WaveFormat::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr int32_t const& NAudio::Wave::WaveFormat::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void NAudio::Wave::WaveFormat::__cordl_internal_set__channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
constexpr int32_t& NAudio::Wave::WaveFormat::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& NAudio::Wave::WaveFormat::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void NAudio::Wave::WaveFormat::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
inline int32_t NAudio::Wave::WaveFormat::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t NAudio::Wave::WaveFormat::get_SampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {"get_SampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void NAudio::Wave::WaveFormat::_ctor(int32_t  sampleRate, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, channels);
}
inline bool NAudio::Wave::WaveFormat::Equals(::NAudio::Wave::WaveFormat*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFormat*>(),
                        {"Equals", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t NAudio::Wave::WaveFormat::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFormat*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW NAudio::Wave::WaveFormat::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFormat*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* NAudio::Wave::WaveFormat::New_ctor(int32_t  sampleRate, int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NAudio::Wave::WaveFormat*>(sampleRate, channels));
}
// Ctor Parameters []
constexpr ::NAudio::Wave::WaveFormat::WaveFormat()   {
}
