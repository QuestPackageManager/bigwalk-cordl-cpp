#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Gameplay/GameManagerSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/Gameplay/zzzz__GameManagerSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::GameManagerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::GameManagerSettings::*)()>(&::Rowlan::Genesis::Gameplay::GameManagerSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::GameManagerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::Gameplay::GameManagerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::GameManagerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Gameplay::GameManagerSettings* Rowlan::Genesis::Gameplay::GameManagerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Gameplay::GameManagerSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Gameplay::GameManagerSettings::GameManagerSettings()   {
}
