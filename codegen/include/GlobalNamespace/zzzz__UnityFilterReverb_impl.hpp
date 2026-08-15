#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterReverb.hpp"
#include "GlobalNamespace/zzzz__UnityFilterBase_impl.hpp"
#include "UnityEngine/zzzz__AudioReverbPreset_impl.hpp"
#include "GlobalNamespace/zzzz__UnityFilterReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "UnityEngine/zzzz__AudioReverbFilter_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityFilterReverb.get_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Behaviour> (::GlobalNamespace::UnityFilterReverb::*)()>(&::GlobalNamespace::UnityFilterReverb::get_Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterReverb.set_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterReverb::*)(::UnityEngine::Behaviour*)>(&::GlobalNamespace::UnityFilterReverb::set_Filter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterReverb.get_IsDebugBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityFilterReverb::*)()>(&::GlobalNamespace::UnityFilterReverb::get_IsDebugBypassed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a6c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterReverb.SetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterReverb::*)(::GlobalNamespace::AudioSourceRefs*)>(&::GlobalNamespace::UnityFilterReverb::SetFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a69b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterReverb.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterReverb::*)()>(&::GlobalNamespace::UnityFilterReverb::UpdateValues)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804a69e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterReverb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterReverb::*)()>(&::GlobalNamespace::UnityFilterReverb::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804a6b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioReverbFilter>& GlobalNamespace::UnityFilterReverb::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::AudioReverbFilter> const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set__filter(::UnityW<::UnityEngine::AudioReverbFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr ::UnityEngine::AudioReverbPreset& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Preset;
}
constexpr ::UnityEngine::AudioReverbPreset const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Preset;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_Preset(::UnityEngine::AudioReverbPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Preset = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_DryLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryLevel;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_DryLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryLevel;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_DryLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DryLevel = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Room()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Room;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Room() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Room;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_Room(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Room = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_RoomHF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomHF;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_RoomHF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomHF;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_RoomHF(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomHF = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_RoomLF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLF;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_RoomLF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLF;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_RoomLF(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomLF = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_DecayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayTime;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_DecayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayTime;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_DecayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DecayTime = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_DecayHFRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayHFRatio;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_DecayHFRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayHFRatio;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_DecayHFRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DecayHFRatio = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReflectionsLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectionsLevel;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReflectionsLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectionsLevel;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_ReflectionsLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReflectionsLevel = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReflectionsDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectionsDelay;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReflectionsDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectionsDelay;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_ReflectionsDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReflectionsDelay = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReverbLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbLevel;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReverbLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbLevel;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_ReverbLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReverbLevel = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReverbDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbDelay;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_ReverbDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbDelay;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_ReverbDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReverbDelay = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_HFReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HFReference;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_HFReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HFReference;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_HFReference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HFReference = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_LFReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LFReference;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_LFReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LFReference;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_LFReference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LFReference = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Diffusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Diffusion;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Diffusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Diffusion;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_Diffusion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Diffusion = value;
}
constexpr float_t& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Density;
}
constexpr float_t const& GlobalNamespace::UnityFilterReverb::__cordl_internal_get_Density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Density;
}
constexpr void GlobalNamespace::UnityFilterReverb::__cordl_internal_set_Density(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Density = value;
}
inline void GlobalNamespace::UnityFilterReverb::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterReverb*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::UnityFilterReverb::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterReverb*>();
}
inline ::UnityW<::UnityEngine::Behaviour> GlobalNamespace::UnityFilterReverb::get_Filter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Behaviour>>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterReverb::set_Filter(::UnityEngine::Behaviour*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityFilterReverb::get_IsDebugBypassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterReverb::SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSourceRefs);
}
inline void GlobalNamespace::UnityFilterReverb::UpdateValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterReverb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterReverb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityFilterReverb* GlobalNamespace::UnityFilterReverb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityFilterReverb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityFilterReverb::UnityFilterReverb()   {
}
