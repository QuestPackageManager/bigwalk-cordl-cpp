#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterLP.hpp"
#include "GlobalNamespace/zzzz__UnityFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__UnityFilterLP_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "UnityEngine/zzzz__AudioLowPassFilter_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityFilterLP.get_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Behaviour> (::GlobalNamespace::UnityFilterLP::*)()>(&::GlobalNamespace::UnityFilterLP::get_Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterLP.set_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterLP::*)(::UnityEngine::Behaviour*)>(&::GlobalNamespace::UnityFilterLP::set_Filter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a6980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterLP.get_IsDebugBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityFilterLP::*)()>(&::GlobalNamespace::UnityFilterLP::get_IsDebugBypassed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a6960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterLP.SetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterLP::*)(::GlobalNamespace::AudioSourceRefs*)>(&::GlobalNamespace::UnityFilterLP::SetFilter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterLP.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterLP::*)()>(&::GlobalNamespace::UnityFilterLP::UpdateValues)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804a68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(),
                    {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityFilterLP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityFilterLP::*)()>(&::GlobalNamespace::UnityFilterLP::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioLowPassFilter>& GlobalNamespace::UnityFilterLP::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::AudioLowPassFilter> const& GlobalNamespace::UnityFilterLP::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void GlobalNamespace::UnityFilterLP::__cordl_internal_set__filter(::UnityW<::UnityEngine::AudioLowPassFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr float_t& GlobalNamespace::UnityFilterLP::__cordl_internal_get_Q()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Q;
}
constexpr float_t const& GlobalNamespace::UnityFilterLP::__cordl_internal_get_Q() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Q;
}
constexpr void GlobalNamespace::UnityFilterLP::__cordl_internal_set_Q(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Q = value;
}
constexpr float_t& GlobalNamespace::UnityFilterLP::__cordl_internal_get_Frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr float_t const& GlobalNamespace::UnityFilterLP::__cordl_internal_get_Frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr void GlobalNamespace::UnityFilterLP::__cordl_internal_set_Frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Frequency = value;
}
inline void GlobalNamespace::UnityFilterLP::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterLP*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::UnityFilterLP::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::UnityFilterLP*>();
}
inline ::UnityW<::UnityEngine::Behaviour> GlobalNamespace::UnityFilterLP::get_Filter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Behaviour>>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterLP::set_Filter(::UnityEngine::Behaviour*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityFilterLP::get_IsDebugBypassed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterLP::SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSourceRefs);
}
inline void GlobalNamespace::UnityFilterLP::UpdateValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityFilterLP::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityFilterLP*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityFilterLP* GlobalNamespace::UnityFilterLP::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityFilterLP*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityFilterLP::UnityFilterLP()   {
}
