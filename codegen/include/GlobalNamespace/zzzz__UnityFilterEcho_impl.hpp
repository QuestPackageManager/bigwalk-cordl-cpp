#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterEcho.hpp"
#include "GlobalNamespace/zzzz__UnityFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__UnityFilterEcho_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "UnityEngine/zzzz__AudioEchoFilter_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityFilterEcho.get_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Behaviour> (::GlobalNamespace::UnityFilterEcho::*)()>(&::GlobalNamespace::UnityFilterEcho::get_Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterEcho.set_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterEcho::*)(::UnityEngine::Behaviour*)>(&::GlobalNamespace::UnityFilterEcho::set_Filter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterEcho.get_IsDebugBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityFilterEcho::*)()>(&::GlobalNamespace::UnityFilterEcho::get_IsDebugBypassed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a6760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterEcho.SetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterEcho::*)(::GlobalNamespace::AudioSourceRefs*)>(&::GlobalNamespace::UnityFilterEcho::SetFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterEcho.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterEcho::*)()>(&::GlobalNamespace::UnityFilterEcho::UpdateValues)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804a66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterEcho._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterEcho::*)()>(&::GlobalNamespace::UnityFilterEcho::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioEchoFilter>& GlobalNamespace::UnityFilterEcho::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::AudioEchoFilter> const& GlobalNamespace::UnityFilterEcho::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void GlobalNamespace::UnityFilterEcho::__cordl_internal_set__filter(::UnityW<::UnityEngine::AudioEchoFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr float_t& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_Delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr float_t const& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_Delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr void GlobalNamespace::UnityFilterEcho::__cordl_internal_set_Delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delay = value;
}
constexpr float_t& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_DecayRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayRatio;
}
constexpr float_t const& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_DecayRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayRatio;
}
constexpr void GlobalNamespace::UnityFilterEcho::__cordl_internal_set_DecayRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DecayRatio = value;
}
constexpr float_t& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_DryMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryMix;
}
constexpr float_t const& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_DryMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryMix;
}
constexpr void GlobalNamespace::UnityFilterEcho::__cordl_internal_set_DryMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DryMix = value;
}
constexpr float_t& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_WetMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix;
}
constexpr float_t const& GlobalNamespace::UnityFilterEcho::__cordl_internal_get_WetMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix;
}
constexpr void GlobalNamespace::UnityFilterEcho::__cordl_internal_set_WetMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WetMix = value;
}
inline void GlobalNamespace::UnityFilterEcho::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterEcho*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::UnityFilterEcho::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterEcho*>();
}
inline ::UnityW<::UnityEngine::Behaviour> GlobalNamespace::UnityFilterEcho::get_Filter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Behaviour>>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterEcho::set_Filter(::UnityEngine::Behaviour*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityFilterEcho::get_IsDebugBypassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterEcho::SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSourceRefs);
}
inline void GlobalNamespace::UnityFilterEcho::UpdateValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterEcho::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterEcho*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityFilterEcho* GlobalNamespace::UnityFilterEcho::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityFilterEcho*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityFilterEcho::UnityFilterEcho()   {
}
