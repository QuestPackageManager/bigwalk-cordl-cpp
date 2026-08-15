#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMinigunPreviewer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioMinigunPreviewer_def.hpp"
#include "GlobalNamespace/zzzz__AudioMinigunContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioMinigunPreviewer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioMinigunPreviewer::*)()>(&::GlobalNamespace::AudioMinigunPreviewer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMinigunPreviewer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioMinigunContainer>& GlobalNamespace::AudioMinigunPreviewer::__cordl_internal_get_MinigunContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinigunContainer;
}
constexpr ::UnityW<::GlobalNamespace::AudioMinigunContainer> const& GlobalNamespace::AudioMinigunPreviewer::__cordl_internal_get_MinigunContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinigunContainer;
}
constexpr void GlobalNamespace::AudioMinigunPreviewer::__cordl_internal_set_MinigunContainer(::UnityW<::GlobalNamespace::AudioMinigunContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinigunContainer = value;
}
inline void GlobalNamespace::AudioMinigunPreviewer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMinigunPreviewer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioMinigunPreviewer* GlobalNamespace::AudioMinigunPreviewer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioMinigunPreviewer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioMinigunPreviewer::AudioMinigunPreviewer()   {
}
