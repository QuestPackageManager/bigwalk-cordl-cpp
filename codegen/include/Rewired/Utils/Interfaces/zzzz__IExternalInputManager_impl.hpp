#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IExternalInputManager.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExternalInputManager_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IExternalInputManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Interfaces::IExternalInputManager::*)(::Rewired::Platforms::Platform, ::System::Object*)>(&::Rewired::Utils::Interfaces::IExternalInputManager::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IExternalInputManager*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IExternalInputManager*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IExternalInputManager.Deinitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Interfaces::IExternalInputManager::*)()>(&::Rewired::Utils::Interfaces::IExternalInputManager::Deinitialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IExternalInputManager*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IExternalInputManager*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* Rewired::Utils::Interfaces::IExternalInputManager::Initialize(::Rewired::Platforms::Platform  platform, ::System::Object*  configVars)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IExternalInputManager*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, platform, configVars);
}
inline void Rewired::Utils::Interfaces::IExternalInputManager::Deinitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IExternalInputManager*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
