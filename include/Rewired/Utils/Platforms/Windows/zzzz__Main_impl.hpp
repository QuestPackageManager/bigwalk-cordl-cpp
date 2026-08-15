#pragma once
// IWYU pragma private; include "Rewired/Utils/Platforms/Windows/Main.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Platforms/Windows/zzzz__Main_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Platforms::Windows::Main.GetPlatformInitializer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::Rewired::Utils::Platforms::Windows::Main::GetPlatformInitializer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181a315e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Platforms::Windows::Main*>(),
                        {"GetPlatformInitializer", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Rewired::Utils::Platforms::Windows::Main::GetPlatformInitializer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Platforms::Windows::Main*>(),
                        {"GetPlatformInitializer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Platforms::Windows::Main::Main()   {
}
