#pragma once
// IWYU pragma private; include "Animancer/FSM/ReverseComparer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/FSM/zzzz__ReverseComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template<typename T>
inline void Animancer::FSM::ReverseComparer_1<T>::setStaticF_Instance(::Animancer::FSM::ReverseComparer_1<T>*  value)  {
::cordl_internals::setStaticField<::Animancer::FSM::ReverseComparer_1<T>*, "Instance", ::Animancer::FSM::ReverseComparer_1<T>*>(std::forward<::Animancer::FSM::ReverseComparer_1<T>*>(value));
}
template<typename T>
inline ::Animancer::FSM::ReverseComparer_1<T>* Animancer::FSM::ReverseComparer_1<T>::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Animancer::FSM::ReverseComparer_1<T>*, "Instance", ::Animancer::FSM::ReverseComparer_1<T>*>();
}
template<typename T>
inline void Animancer::FSM::ReverseComparer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::ReverseComparer_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t Animancer::FSM::ReverseComparer_1<T>::Compare(T  x, T  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FSM::ReverseComparer_1<T>*>(),
                        {"Compare", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template<typename T>
inline ::Animancer::FSM::ReverseComparer_1<T>* Animancer::FSM::ReverseComparer_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FSM::ReverseComparer_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
template<typename T>
constexpr  Animancer::FSM::ReverseComparer_1<T>::operator ::System::Collections::Generic::IComparer_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IComparer_1<T>* Animancer::FSM::ReverseComparer_1<T>::i___System__Collections__Generic__IComparer_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Animancer::FSM::ReverseComparer_1<T>::ReverseComparer_1()   {
}
