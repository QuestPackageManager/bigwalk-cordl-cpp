#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformCore.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformCore_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlatformCore_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformCore.CoreInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformCore::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformCore::CoreInitialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformCore*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformCore*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformCore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformCore::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformCore::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformCore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Mocked::MockedPlatformCore::CoreInitialization()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformCore*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::Mocked::MockedPlatformCore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformCore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Mocked::MockedPlatformCore* Shipmate::Porting::Mocked::MockedPlatformCore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlatformCore*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlatformCore::MockedPlatformCore()   {
}
