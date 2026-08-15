#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundCuePreviewer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SoundCuePreviewer_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundCuePreviewer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCuePreviewer::*)()>(&::GlobalNamespace::SoundCuePreviewer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCuePreviewer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::SoundCuePreviewer::__cordl_internal_get_Cue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::SoundCuePreviewer::__cordl_internal_get_Cue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cue;
}
constexpr void GlobalNamespace::SoundCuePreviewer::__cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cue = value;
}
inline void GlobalNamespace::SoundCuePreviewer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCuePreviewer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundCuePreviewer* GlobalNamespace::SoundCuePreviewer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundCuePreviewer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundCuePreviewer::SoundCuePreviewer()   {
}
