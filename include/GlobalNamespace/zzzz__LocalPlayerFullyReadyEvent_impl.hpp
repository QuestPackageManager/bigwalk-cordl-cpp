#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalPlayerFullyReadyEvent.hpp"
#include "Shipmates/Utils/zzzz__BaseEvent_impl.hpp"
#include "GlobalNamespace/zzzz__LocalPlayerFullyReadyEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalPlayerFullyReadyEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalPlayerFullyReadyEvent::*)()>(&::GlobalNamespace::LocalPlayerFullyReadyEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalPlayerFullyReadyEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalPlayerFullyReadyEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalPlayerFullyReadyEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalPlayerFullyReadyEvent* GlobalNamespace::LocalPlayerFullyReadyEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalPlayerFullyReadyEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalPlayerFullyReadyEvent::LocalPlayerFullyReadyEvent()   {
}
