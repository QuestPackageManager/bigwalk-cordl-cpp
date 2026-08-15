#pragma once
// IWYU pragma private; include "Shipmate/Porting/PlatformManager.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_impl.hpp"
#include "Shipmate/Porting/zzzz__PlatformManager_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::PlatformManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::PlatformManager::*)()>(&::Shipmate::Porting::PlatformManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac6c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::PlatformManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::PlatformManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::PlatformManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::PlatformManager* Shipmate::Porting::PlatformManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::PlatformManager*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::PlatformManager::PlatformManager()   {
}
