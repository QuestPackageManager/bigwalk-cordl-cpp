#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterChorus.hpp"
#include "GlobalNamespace/zzzz__UnityFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__UnityFilterChorus_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "UnityEngine/zzzz__AudioChorusFilter_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityFilterChorus.get_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Behaviour> (::GlobalNamespace::UnityFilterChorus::*)()>(&::GlobalNamespace::UnityFilterChorus::get_Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterChorus.set_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterChorus::*)(::UnityEngine::Behaviour*)>(&::GlobalNamespace::UnityFilterChorus::set_Filter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterChorus.get_IsDebugBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityFilterChorus::*)()>(&::GlobalNamespace::UnityFilterChorus::get_IsDebugBypassed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a6540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterChorus.SetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterChorus::*)(::GlobalNamespace::AudioSourceRefs*)>(&::GlobalNamespace::UnityFilterChorus::SetFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a63f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterChorus.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterChorus::*)()>(&::GlobalNamespace::UnityFilterChorus::UpdateValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804a6420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterChorus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterChorus::*)()>(&::GlobalNamespace::UnityFilterChorus::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioChorusFilter>& GlobalNamespace::UnityFilterChorus::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::AudioChorusFilter> const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set__filter(::UnityW<::UnityEngine::AudioChorusFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr float_t& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_DryMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryMix;
}
constexpr float_t const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_DryMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryMix;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set_DryMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DryMix = value;
}
constexpr float_t& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_WetMix1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix1;
}
constexpr float_t const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_WetMix1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix1;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set_WetMix1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WetMix1 = value;
}
constexpr float_t& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_WetMix2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix2;
}
constexpr float_t const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_WetMix2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix2;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set_WetMix2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WetMix2 = value;
}
constexpr float_t& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_WetMix3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix3;
}
constexpr float_t const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_WetMix3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WetMix3;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set_WetMix3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WetMix3 = value;
}
constexpr float_t& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_Delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr float_t const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_Delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set_Delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delay = value;
}
constexpr float_t& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_Rate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rate;
}
constexpr float_t const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_Rate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rate;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set_Rate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rate = value;
}
constexpr float_t& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_Depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Depth;
}
constexpr float_t const& GlobalNamespace::UnityFilterChorus::__cordl_internal_get_Depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Depth;
}
constexpr void GlobalNamespace::UnityFilterChorus::__cordl_internal_set_Depth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Depth = value;
}
inline void GlobalNamespace::UnityFilterChorus::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterChorus*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::UnityFilterChorus::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterChorus*>();
}
inline ::UnityW<::UnityEngine::Behaviour> GlobalNamespace::UnityFilterChorus::get_Filter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Behaviour>>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterChorus::set_Filter(::UnityEngine::Behaviour*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityFilterChorus::get_IsDebugBypassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterChorus::SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSourceRefs);
}
inline void GlobalNamespace::UnityFilterChorus::UpdateValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterChorus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterChorus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityFilterChorus* GlobalNamespace::UnityFilterChorus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityFilterChorus*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityFilterChorus::UnityFilterChorus()   {
}
