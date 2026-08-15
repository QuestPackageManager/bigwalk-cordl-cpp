#pragma once
// IWYU pragma private; include "Animancer/ITransition_1.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
template<typename TState>
inline TState Animancer::ITransition_1<TState>::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ITransition_1<TState>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState>
inline TState Animancer::ITransition_1<TState>::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ITransition_1<TState>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
/// @brief Convert operator to "::Animancer::ITransition"
template<typename TState>
constexpr  Animancer::ITransition_1<TState>::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
template<typename TState>
constexpr ::Animancer::ITransition* Animancer::ITransition_1<TState>::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
template<typename TState>
constexpr  Animancer::ITransition_1<TState>::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
template<typename TState>
constexpr ::Animancer::IHasKey* Animancer::ITransition_1<TState>::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
template<typename TState>
constexpr  Animancer::ITransition_1<TState>::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
template<typename TState>
constexpr ::Animancer::IPolymorphic* Animancer::ITransition_1<TState>::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
