#pragma once
// IWYU pragma private; include "Shipmates/Utils/BaseEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/Utils/zzzz__BaseEvent_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::BaseEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::BaseEvent::*)()>(&::Shipmates::Utils::BaseEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::BaseEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmates::Utils::BaseEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::BaseEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::Utils::BaseEvent* Shipmates::Utils::BaseEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::BaseEvent*>());
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::BaseEvent::BaseEvent()   {
}
