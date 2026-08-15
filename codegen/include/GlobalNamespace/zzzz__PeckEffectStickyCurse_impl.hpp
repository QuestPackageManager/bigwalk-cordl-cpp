#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectStickyCurse.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectStickyCurse_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectStickyCurse.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectStickyCurse::*)()>(&::GlobalNamespace::PeckEffectStickyCurse::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044d520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectStickyCurse*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectStickyCurse.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectStickyCurse::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectStickyCurse::OnPeck)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18044d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectStickyCurse*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectStickyCurse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectStickyCurse::*)()>(&::GlobalNamespace::PeckEffectStickyCurse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectStickyCurse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::GlobalNamespace::PeckPlayerReference& GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_get_playerReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr ::GlobalNamespace::PeckPlayerReference const& GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_get_playerReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr void GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerReference = value;
}
constexpr ::GlobalNamespace::PeckPropReference& GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_get_propReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr ::GlobalNamespace::PeckPropReference const& GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_get_propReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr void GlobalNamespace::PeckEffectStickyCurse::__cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propReference = value;
}
inline void GlobalNamespace::PeckEffectStickyCurse::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectStickyCurse*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectStickyCurse::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectStickyCurse*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectStickyCurse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectStickyCurse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectStickyCurse* GlobalNamespace::PeckEffectStickyCurse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectStickyCurse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectStickyCurse::PeckEffectStickyCurse()   {
}
