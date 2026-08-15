#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformMarketplace.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformMarketplace_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlatformMarketplace_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformMarketplace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformMarketplace::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformMarketplace::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformMarketplace*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Mocked::MockedPlatformMarketplace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformMarketplace*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Mocked::MockedPlatformMarketplace* Shipmate::Porting::Mocked::MockedPlatformMarketplace::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlatformMarketplace*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlatformMarketplace::MockedPlatformMarketplace()   {
}
