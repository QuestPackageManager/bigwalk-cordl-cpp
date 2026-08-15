#pragma once
// IWYU pragma private; include "GlobalNamespace/TouchlessButton.hpp"
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
#include "GlobalNamespace/zzzz__TouchlessButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TouchlessButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TouchlessButton::*)()>(&::GlobalNamespace::TouchlessButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803899b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TouchlessButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TouchlessButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TouchlessButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TouchlessButton* GlobalNamespace::TouchlessButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TouchlessButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TouchlessButton::TouchlessButton()   {
}
