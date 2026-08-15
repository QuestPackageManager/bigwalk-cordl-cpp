#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterMixer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioFilterMixer_def.hpp"
#include "GlobalNamespace/zzzz__IAudioFilter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioFilterMixer.get_SynthesizerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioFilterMixer::*)()>(&::GlobalNamespace::AudioFilterMixer::get_SynthesizerMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"get_SynthesizerMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterMixer.set_SynthesizerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterMixer::*)(bool)>(&::GlobalNamespace::AudioFilterMixer::set_SynthesizerMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180499eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"set_SynthesizerMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterMixer.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioFilterMixer::*)()>(&::GlobalNamespace::AudioFilterMixer::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ed970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterMixer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterMixer::*)()>(&::GlobalNamespace::AudioFilterMixer::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180499bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterMixer.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterMixer::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::AudioFilterMixer::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180499c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterMixer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterMixer::*)()>(&::GlobalNamespace::AudioFilterMixer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*& GlobalNamespace::AudioFilterMixer::__cordl_internal_get_Filters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filters;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>* const& GlobalNamespace::AudioFilterMixer::__cordl_internal_get_Filters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filters;
}
constexpr void GlobalNamespace::AudioFilterMixer::__cordl_internal_set_Filters(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Filters = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioFilterMixer::__cordl_internal_get__cachedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedData;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioFilterMixer::__cordl_internal_get__cachedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedData;
}
constexpr void GlobalNamespace::AudioFilterMixer::__cordl_internal_set__cachedData(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedData = value;
}
constexpr bool& GlobalNamespace::AudioFilterMixer::__cordl_internal_get__SynthesizerMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynthesizerMode_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioFilterMixer::__cordl_internal_get__SynthesizerMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynthesizerMode_k__BackingField;
}
constexpr void GlobalNamespace::AudioFilterMixer::__cordl_internal_set__SynthesizerMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SynthesizerMode_k__BackingField = value;
}
inline bool GlobalNamespace::AudioFilterMixer::get_SynthesizerMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"get_SynthesizerMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterMixer::set_SynthesizerMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"set_SynthesizerMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioFilterMixer::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterMixer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterMixer::OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AudioFilterMixer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterMixer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioFilterMixer* GlobalNamespace::AudioFilterMixer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioFilterMixer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioFilterMixer::AudioFilterMixer()   {
}
