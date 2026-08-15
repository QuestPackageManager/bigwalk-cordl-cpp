#pragma once
// IWYU pragma private; include "Dissonance/IRooms.hpp"
#include "Dissonance/zzzz__IRooms_def.hpp"
//  Writing Method size for method: ::Dissonance::IRooms.Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::IRooms::*)(uint16_t)>(&::Dissonance::IRooms::Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::IRooms*>(),
                    {::i2c::class_of<::Dissonance::IRooms*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::IRooms::Name(uint16_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IRooms*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
