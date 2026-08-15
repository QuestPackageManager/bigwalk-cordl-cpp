#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IReadOnlyList_1.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IReadOnlyList_1_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IReadOnlyList_def.hpp"
template<typename T>
inline T Rewired::Utils::Interfaces::IReadOnlyList_1<T>::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline int32_t Rewired::Utils::Interfaces::IReadOnlyList_1<T>::IndexOf(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template<typename T>
inline bool Rewired::Utils::Interfaces::IReadOnlyList_1<T>::Contains(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IReadOnlyList_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IReadOnlyList"
template<typename T>
constexpr  Rewired::Utils::Interfaces::IReadOnlyList_1<T>::operator ::Rewired::Utils::Interfaces::IReadOnlyList*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IReadOnlyList*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IReadOnlyList"
template<typename T>
constexpr ::Rewired::Utils::Interfaces::IReadOnlyList* Rewired::Utils::Interfaces::IReadOnlyList_1<T>::i___Rewired__Utils__Interfaces__IReadOnlyList() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IReadOnlyList*>(static_cast<void*>(this));
}
