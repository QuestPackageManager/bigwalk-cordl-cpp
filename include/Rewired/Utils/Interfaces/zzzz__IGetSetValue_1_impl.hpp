#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IGetSetValue_1.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IGetSetValue_1_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IGetValue_1_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__ISetValue_1_def.hpp"
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IGetValue_1<T>"
template<typename T>
constexpr  Rewired::Utils::Interfaces::IGetSetValue_1<T>::operator ::Rewired::Utils::Interfaces::IGetValue_1<T>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IGetValue_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IGetValue_1<T>"
template<typename T>
constexpr ::Rewired::Utils::Interfaces::IGetValue_1<T>* Rewired::Utils::Interfaces::IGetSetValue_1<T>::i___Rewired__Utils__Interfaces__IGetValue_1_T_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IGetValue_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::ISetValue_1<T>"
template<typename T>
constexpr  Rewired::Utils::Interfaces::IGetSetValue_1<T>::operator ::Rewired::Utils::Interfaces::ISetValue_1<T>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::ISetValue_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::ISetValue_1<T>"
template<typename T>
constexpr ::Rewired::Utils::Interfaces::ISetValue_1<T>* Rewired::Utils::Interfaces::IGetSetValue_1<T>::i___Rewired__Utils__Interfaces__ISetValue_1_T_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::ISetValue_1<T>*>(static_cast<void*>(this));
}
