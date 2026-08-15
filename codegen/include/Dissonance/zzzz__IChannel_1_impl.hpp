#pragma once
// IWYU pragma private; include "Dissonance/IChannel_1.hpp"
#include "Dissonance/zzzz__IChannel_1_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline T Dissonance::IChannel_1<T>::get_TargetId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IChannel_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline uint16_t Dissonance::IChannel_1<T>::get_SubscriptionId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IChannel_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::ChannelProperties* Dissonance::IChannel_1<T>::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IChannel_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelProperties*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Dissonance::IChannel_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Dissonance::IChannel_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
