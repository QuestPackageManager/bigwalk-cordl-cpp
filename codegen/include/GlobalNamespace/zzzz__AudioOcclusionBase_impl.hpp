#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBase_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "GlobalNamespace/zzzz__BiquadFilters_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBase.get_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioOcclusionBase::*)()>(&::GlobalNamespace::AudioOcclusionBase::get_OccLvl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBase.set_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBase::*)(float_t)>(&::GlobalNamespace::AudioOcclusionBase::set_OccLvl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBase.get_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioOcclusionBase::*)()>(&::GlobalNamespace::AudioOcclusionBase::get_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBase.set_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBase::*)(float_t)>(&::GlobalNamespace::AudioOcclusionBase::set_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBase.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBase::*)(::GlobalNamespace::AudioOcclusionConfig*)>(&::GlobalNamespace::AudioOcclusionBase::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBase.UpdateOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBase::*)()>(&::GlobalNamespace::AudioOcclusionBase::UpdateOcclusion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusionBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusionBase::*)()>(&::GlobalNamespace::AudioOcclusionBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::AudioOcclusionBase::__cordl_internal_get_Filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::AudioOcclusionBase::__cordl_internal_get_Filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filter;
}
constexpr void GlobalNamespace::AudioOcclusionBase::__cordl_internal_set_Filter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Filter = value;
}
inline float_t GlobalNamespace::AudioOcclusionBase::get_OccLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionBase::set_OccLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioOcclusionBase::get_VoiceBlockingLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionBase::set_VoiceBlockingLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioOcclusionBase::Initialize(::GlobalNamespace::AudioOcclusionConfig*  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void GlobalNamespace::AudioOcclusionBase::UpdateOcclusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusionBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusionBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioOcclusionBase* GlobalNamespace::AudioOcclusionBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioOcclusionBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusionBase::AudioOcclusionBase()   {
}
