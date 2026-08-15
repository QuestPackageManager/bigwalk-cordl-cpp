#pragma once
// IWYU pragma private; include "GlobalNamespace/dnvKFlJogYenYuStqgrIJqBXmMGKA.hpp"
#include "GlobalNamespace/zzzz__CikLRnpHSkodcyZzAORzWmFvLAQJ_impl.hpp"
#include "GlobalNamespace/zzzz__dnvKFlJogYenYuStqgrIJqBXmMGKA_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedKeyboardSource_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedKeyboardSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA::*)(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*)>(&::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181885e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA::_ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA* GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA::New_ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IUnifiedKeyboardSource"
constexpr  GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA::operator ::Rewired::Interfaces::IUnifiedKeyboardSource*() noexcept {
return static_cast<::Rewired::Interfaces::IUnifiedKeyboardSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IUnifiedKeyboardSource"
constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource* GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA::i___Rewired__Interfaces__IUnifiedKeyboardSource() noexcept {
return static_cast<::Rewired::Interfaces::IUnifiedKeyboardSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::dnvKFlJogYenYuStqgrIJqBXmMGKA::dnvKFlJogYenYuStqgrIJqBXmMGKA()   {
}
