#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/SetAndRestoreVar_1.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__SetAndRestoreVar_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>::_ctor(T  _cordl_fixed_empty_name_whitespace, T  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
template<typename T>
inline void Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "pNzeMXAmLBjrzFwkmYdHuNfukWTFA", ty: "::System::Action_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "QVcBpbWqZvSABkOIVCCxoKtsowYn", ty: "T", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>::SetAndRestoreVar_1(::System::Action_1<T>*  pNzeMXAmLBjrzFwkmYdHuNfukWTFA, T  QVcBpbWqZvSABkOIVCCxoKtsowYn) noexcept  {
this->pNzeMXAmLBjrzFwkmYdHuNfukWTFA = pNzeMXAmLBjrzFwkmYdHuNfukWTFA;
this->QVcBpbWqZvSABkOIVCCxoKtsowYn = QVcBpbWqZvSABkOIVCCxoKtsowYn;
}
// Ctor Parameters []
template<typename T>
constexpr ::Rewired::Utils::Classes::Utility::SetAndRestoreVar_1<T>::SetAndRestoreVar_1()   {
}
