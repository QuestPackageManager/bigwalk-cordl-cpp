#pragma once
// IWYU pragma private; include "Shipmate/Porting/IPlatformAddon.hpp"
#include "Shipmate/Porting/zzzz__IPlatformAddon_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void Shipmate::Porting::IPlatformAddon::Initialize(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Shipmate::Porting::IPlatformAddon*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aManager);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Shipmate::Porting::IPlatformAddon::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Shipmate::Porting::IPlatformAddon::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
