#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectEndingTransition.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectEndingTransition_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectEndingTransition.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectEndingTransition::*)()>(&::GlobalNamespace::PeckEffectEndingTransition::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180449720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectEndingTransition*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectEndingTransition.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectEndingTransition::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckEffectEndingTransition::OnPeck)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804497c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectEndingTransition*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectEndingTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectEndingTransition::*)()>(&::GlobalNamespace::PeckEffectEndingTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectEndingTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectEndingTransition::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectEndingTransition::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void GlobalNamespace::PeckEffectEndingTransition::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PeckEffectEndingTransition::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PeckEffectEndingTransition::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void GlobalNamespace::PeckEffectEndingTransition::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
inline void GlobalNamespace::PeckEffectEndingTransition::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectEndingTransition*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectEndingTransition::OnPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectEndingTransition*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, peckState);
}
inline void GlobalNamespace::PeckEffectEndingTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectEndingTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectEndingTransition* GlobalNamespace::PeckEffectEndingTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectEndingTransition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectEndingTransition::PeckEffectEndingTransition()   {
}
