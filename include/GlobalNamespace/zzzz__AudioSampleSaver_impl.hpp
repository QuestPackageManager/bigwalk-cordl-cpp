#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSampleSaver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSampleSaver_def.hpp"
#include "GlobalNamespace/zzzz__IAudioFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSampleSaver::*)()>(&::GlobalNamespace::AudioSampleSaver::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"get_InternalBypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)(bool)>(&::GlobalNamespace::AudioSampleSaver::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"set_InternalBypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSampleSaver::*)()>(&::GlobalNamespace::AudioSampleSaver::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"get_Bypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)(bool)>(&::GlobalNamespace::AudioSampleSaver::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)()>(&::GlobalNamespace::AudioSampleSaver::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180391970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.BetterModulo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioSampleSaver::*)(int32_t, int32_t)>(&::GlobalNamespace::AudioSampleSaver::BetterModulo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803919b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"BetterModulo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.SaveOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)(float_t)>(&::GlobalNamespace::AudioSampleSaver::SaveOne)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180391c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"SaveOne", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)(::ArrayW<float_t>)>(&::GlobalNamespace::AudioSampleSaver::AddData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803918d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"AddData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)()>(&::GlobalNamespace::AudioSampleSaver::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803919d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)(float_t)>(&::GlobalNamespace::AudioSampleSaver::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"UpdateVariables", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::AudioSampleSaver::ProcessSamples)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180391af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver.LoadReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::GlobalNamespace::AudioSampleSaver::LoadReader)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803919f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"LoadReader", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSampleSaver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSampleSaver::*)()>(&::GlobalNamespace::AudioSampleSaver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180391c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver>& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_flatLineSaver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatLineSaver;
}
constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver> const& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_flatLineSaver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatLineSaver;
}
constexpr void GlobalNamespace::AudioSampleSaver::__cordl_internal_set_flatLineSaver(::UnityW<::GlobalNamespace::AudioSampleSaver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatLineSaver = value;
}
constexpr bool& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_clearToOne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearToOne;
}
constexpr bool const& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_clearToOne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearToOne;
}
constexpr void GlobalNamespace::AudioSampleSaver::__cordl_internal_set_clearToOne(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearToOne = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_savedSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedSamples;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_savedSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedSamples;
}
constexpr void GlobalNamespace::AudioSampleSaver::__cordl_internal_set_savedSamples(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedSamples = value;
}
constexpr int32_t& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_channelsToBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelsToBuffer;
}
constexpr int32_t const& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_channelsToBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelsToBuffer;
}
constexpr void GlobalNamespace::AudioSampleSaver::__cordl_internal_set_channelsToBuffer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelsToBuffer = value;
}
constexpr int32_t& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_saveIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIndex;
}
constexpr int32_t const& GlobalNamespace::AudioSampleSaver::__cordl_internal_get_saveIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIndex;
}
constexpr void GlobalNamespace::AudioSampleSaver::__cordl_internal_set_saveIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveIndex = value;
}
constexpr bool& GlobalNamespace::AudioSampleSaver::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::AudioSampleSaver::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::AudioSampleSaver::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::AudioSampleSaver::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::AudioSampleSaver::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::AudioSampleSaver::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
inline bool GlobalNamespace::AudioSampleSaver::get_InternalBypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"get_InternalBypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSampleSaver::set_InternalBypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"set_InternalBypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSampleSaver::get_Bypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"get_Bypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSampleSaver::set_Bypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioSampleSaver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AudioSampleSaver::BetterModulo(int32_t  x, int32_t  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"BetterModulo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, m);
}
inline void GlobalNamespace::AudioSampleSaver::SaveOne(float_t  singleData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"SaveOne", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, singleData);
}
inline void GlobalNamespace::AudioSampleSaver::AddData(::ArrayW<float_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"AddData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::AudioSampleSaver::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSampleSaver::UpdateVariables(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"UpdateVariables", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioSampleSaver::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AudioSampleSaver::LoadReader(::ArrayW<float_t>  data, int32_t  channels, int32_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {"LoadReader", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels, delay);
}
inline void GlobalNamespace::AudioSampleSaver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSampleSaver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSampleSaver* GlobalNamespace::AudioSampleSaver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSampleSaver*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr  GlobalNamespace::AudioSampleSaver::operator ::GlobalNamespace::IAudioFilter*() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* GlobalNamespace::AudioSampleSaver::i___GlobalNamespace__IAudioFilter() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSampleSaver::AudioSampleSaver()   {
}
