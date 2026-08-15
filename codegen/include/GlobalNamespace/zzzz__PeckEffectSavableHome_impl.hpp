#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectSavableHome.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectSavableHome_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectSavableHome.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectSavableHome::*)()>(&::GlobalNamespace::PeckEffectSavableHome::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044d1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectSavableHome*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectSavableHome.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectSavableHome::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectSavableHome::Peck)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18044d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectSavableHome*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectSavableHome._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectSavableHome::*)()>(&::GlobalNamespace::PeckEffectSavableHome::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectSavableHome*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectSavableHome::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::GlobalNamespace::PeckPropReference& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_propReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr ::GlobalNamespace::PeckPropReference const& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_propReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr void GlobalNamespace::PeckEffectSavableHome::__cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_propHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_propHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr void GlobalNamespace::PeckEffectSavableHome::__cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHome = value;
}
constexpr bool& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectSavableHome::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectSavableHome::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectSavableHome::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectSavableHome*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectSavableHome::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectSavableHome*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectSavableHome::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectSavableHome*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectSavableHome* GlobalNamespace::PeckEffectSavableHome::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectSavableHome*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectSavableHome::PeckEffectSavableHome()   {
}
