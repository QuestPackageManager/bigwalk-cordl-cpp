#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterDistortion.hpp"
#include "GlobalNamespace/zzzz__UnityFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__UnityFilterDistortion_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "UnityEngine/zzzz__AudioDistortionFilter_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityFilterDistortion.get_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Behaviour> (::GlobalNamespace::UnityFilterDistortion::*)()>(&::GlobalNamespace::UnityFilterDistortion::get_Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterDistortion.set_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterDistortion::*)(::UnityEngine::Behaviour*)>(&::GlobalNamespace::UnityFilterDistortion::set_Filter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterDistortion.get_IsDebugBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityFilterDistortion::*)()>(&::GlobalNamespace::UnityFilterDistortion::get_IsDebugBypassed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a6620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterDistortion.SetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterDistortion::*)(::GlobalNamespace::AudioSourceRefs*)>(&::GlobalNamespace::UnityFilterDistortion::SetFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterDistortion.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterDistortion::*)()>(&::GlobalNamespace::UnityFilterDistortion::UpdateValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804a65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterDistortion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterDistortion::*)()>(&::GlobalNamespace::UnityFilterDistortion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a6610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioDistortionFilter>& GlobalNamespace::UnityFilterDistortion::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::AudioDistortionFilter> const& GlobalNamespace::UnityFilterDistortion::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void GlobalNamespace::UnityFilterDistortion::__cordl_internal_set__filter(::UnityW<::UnityEngine::AudioDistortionFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr float_t& GlobalNamespace::UnityFilterDistortion::__cordl_internal_get_Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr float_t const& GlobalNamespace::UnityFilterDistortion::__cordl_internal_get_Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr void GlobalNamespace::UnityFilterDistortion::__cordl_internal_set_Level(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Level = value;
}
inline void GlobalNamespace::UnityFilterDistortion::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterDistortion*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::UnityFilterDistortion::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterDistortion*>();
}
inline ::UnityW<::UnityEngine::Behaviour> GlobalNamespace::UnityFilterDistortion::get_Filter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Behaviour>>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterDistortion::set_Filter(::UnityEngine::Behaviour*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityFilterDistortion::get_IsDebugBypassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterDistortion::SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSourceRefs);
}
inline void GlobalNamespace::UnityFilterDistortion::UpdateValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterDistortion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterDistortion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityFilterDistortion* GlobalNamespace::UnityFilterDistortion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityFilterDistortion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityFilterDistortion::UnityFilterDistortion()   {
}
