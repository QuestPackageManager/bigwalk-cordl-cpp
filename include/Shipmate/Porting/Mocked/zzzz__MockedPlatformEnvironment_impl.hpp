#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformEnvironment.hpp"
#include "GlobalNamespace/zzzz__AbstractPlatformEnvironment_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__EPlatformEnvironment_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformEnvironment.GetCurrentEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EPlatformEnvironment (::Shipmate::Porting::Mocked::MockedPlatformEnvironment::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformEnvironment::GetCurrentEnvironment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformEnvironment*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformEnvironment*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformEnvironment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformEnvironment::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformEnvironment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformEnvironment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::EPlatformEnvironment Shipmate::Porting::Mocked::MockedPlatformEnvironment::GetCurrentEnvironment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformEnvironment*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EPlatformEnvironment>(this, ___internal_method);
}
inline void Shipmate::Porting::Mocked::MockedPlatformEnvironment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformEnvironment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Mocked::MockedPlatformEnvironment* Shipmate::Porting::Mocked::MockedPlatformEnvironment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlatformEnvironment*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlatformEnvironment::MockedPlatformEnvironment()   {
}
