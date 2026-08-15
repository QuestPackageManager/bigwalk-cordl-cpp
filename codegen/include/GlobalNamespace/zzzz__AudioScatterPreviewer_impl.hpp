#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioScatterPreviewer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioScatterPreviewer_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioScatterPreviewer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioScatterPreviewer::*)()>(&::GlobalNamespace::AudioScatterPreviewer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterPreviewer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& GlobalNamespace::AudioScatterPreviewer::__cordl_internal_get_ScatterContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterContainer;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& GlobalNamespace::AudioScatterPreviewer::__cordl_internal_get_ScatterContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterContainer;
}
constexpr void GlobalNamespace::AudioScatterPreviewer::__cordl_internal_set_ScatterContainer(::UnityW<::GlobalNamespace::AudioScatterContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScatterContainer = value;
}
inline void GlobalNamespace::AudioScatterPreviewer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioScatterPreviewer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioScatterPreviewer* GlobalNamespace::AudioScatterPreviewer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioScatterPreviewer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioScatterPreviewer::AudioScatterPreviewer()   {
}
