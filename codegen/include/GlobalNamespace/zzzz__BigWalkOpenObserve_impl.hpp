#pragma once
// IWYU pragma private; include "GlobalNamespace/BigWalkOpenObserve.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BigWalkOpenObserve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BigWalkOpenObserve.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BigWalkOpenObserve> (*)()>(&::GlobalNamespace::BigWalkOpenObserve::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acb230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigWalkOpenObserve.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigWalkOpenObserve::*)()>(&::GlobalNamespace::BigWalkOpenObserve::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acaf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigWalkOpenObserve.InitOpenObserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigWalkOpenObserve::*)(::StringW)>(&::GlobalNamespace::BigWalkOpenObserve::InitOpenObserve)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181acafc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {"InitOpenObserve", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BigWalkOpenObserve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BigWalkOpenObserve::*)()>(&::GlobalNamespace::BigWalkOpenObserve::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BigWalkOpenObserve::setStaticF__instance(::UnityW<::GlobalNamespace::BigWalkOpenObserve>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::BigWalkOpenObserve>, "_instance", ::GlobalNamespace::BigWalkOpenObserve*>(std::forward<::UnityW<::GlobalNamespace::BigWalkOpenObserve>>(value));
}
inline ::UnityW<::GlobalNamespace::BigWalkOpenObserve> GlobalNamespace::BigWalkOpenObserve::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::BigWalkOpenObserve>, "_instance", ::GlobalNamespace::BigWalkOpenObserve*>();
}
inline ::UnityW<::GlobalNamespace::BigWalkOpenObserve> GlobalNamespace::BigWalkOpenObserve::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BigWalkOpenObserve>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BigWalkOpenObserve::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BigWalkOpenObserve::InitOpenObserve(::StringW  userName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {"InitOpenObserve", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userName);
}
inline void GlobalNamespace::BigWalkOpenObserve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigWalkOpenObserve*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BigWalkOpenObserve* GlobalNamespace::BigWalkOpenObserve::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BigWalkOpenObserve*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BigWalkOpenObserve::BigWalkOpenObserve()   {
}
