#pragma once
// IWYU pragma private; include "Animancer/ITransitionWithEvents.hpp"
#include "Animancer/zzzz__ITransitionWithEvents_def.hpp"
#include "Animancer/zzzz__IHasEvents_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ITransitionWithEvents::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ITransitionWithEvents::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ITransitionWithEvents::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ITransitionWithEvents::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ITransitionWithEvents::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ITransitionWithEvents::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasEvents"
constexpr  Animancer::ITransitionWithEvents::operator ::Animancer::IHasEvents*() noexcept {
return static_cast<::Animancer::IHasEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasEvents"
constexpr ::Animancer::IHasEvents* Animancer::ITransitionWithEvents::i___Animancer__IHasEvents() noexcept {
return static_cast<::Animancer::IHasEvents*>(static_cast<void*>(this));
}
