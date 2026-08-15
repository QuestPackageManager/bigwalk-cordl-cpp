#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSampleReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSampleReader_def.hpp"
#include "GlobalNamespace/zzzz__AudioSampleReader_def.hpp"
#include "GlobalNamespace/zzzz__AudioSampleSaver_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSampleReader___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleReader___c::*)()>(&::GlobalNamespace::AudioSampleReader___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleReader___c._Awake_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleReader___c::*)(::ArrayW<float_t>)>(&::GlobalNamespace::AudioSampleReader___c::_Awake_b__2_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18038e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader___c*>(),
                        {"<Awake>b__2_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioSampleReader___c::setStaticF___9(::GlobalNamespace::AudioSampleReader___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AudioSampleReader___c*, "<>9", ::GlobalNamespace::AudioSampleReader___c*>(std::forward<::GlobalNamespace::AudioSampleReader___c*>(value));
}
inline ::GlobalNamespace::AudioSampleReader___c* GlobalNamespace::AudioSampleReader___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AudioSampleReader___c*, "<>9", ::GlobalNamespace::AudioSampleReader___c*>();
}
inline void GlobalNamespace::AudioSampleReader___c::setStaticF___9__2_0(::UnityEngine::AudioClip_PCMReaderCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__2_0", ::GlobalNamespace::AudioSampleReader___c*>(std::forward<::UnityEngine::AudioClip_PCMReaderCallback*>(value));
}
inline ::UnityEngine::AudioClip_PCMReaderCallback* GlobalNamespace::AudioSampleReader___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::AudioClip_PCMReaderCallback*, "<>9__2_0", ::GlobalNamespace::AudioSampleReader___c*>();
}
inline void GlobalNamespace::AudioSampleReader___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSampleReader___c::_Awake_b__2_0(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader___c*>(),
                        {"<Awake>b__2_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::GlobalNamespace::AudioSampleReader___c* GlobalNamespace::AudioSampleReader___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSampleReader___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSampleReader___c::AudioSampleReader___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioSampleReader.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleReader::*)()>(&::GlobalNamespace::AudioSampleReader::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180391710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleReader.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleReader::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::AudioSampleReader::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180391840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleReader::*)()>(&::GlobalNamespace::AudioSampleReader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver>& GlobalNamespace::AudioSampleReader::__cordl_internal_get_saver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saver;
}
constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver> const& GlobalNamespace::AudioSampleReader::__cordl_internal_get_saver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saver;
}
constexpr void GlobalNamespace::AudioSampleReader::__cordl_internal_set_saver(::UnityW<::GlobalNamespace::AudioSampleSaver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saver = value;
}
constexpr int32_t& GlobalNamespace::AudioSampleReader::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr int32_t const& GlobalNamespace::AudioSampleReader::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::AudioSampleReader::__cordl_internal_set_delay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
inline void GlobalNamespace::AudioSampleReader::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSampleReader::OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AudioSampleReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSampleReader* GlobalNamespace::AudioSampleReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSampleReader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSampleReader::AudioSampleReader()   {
}
