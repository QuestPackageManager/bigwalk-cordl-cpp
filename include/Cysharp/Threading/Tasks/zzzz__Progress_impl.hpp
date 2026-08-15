#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Progress.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Progress_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Progress_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::setStaticF_Instance(::System::IProgress_1<T>*  value)  {
::cordl_internals::setStaticField<::System::IProgress_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>*>(std::forward<::System::IProgress_1<T>*>(value));
}
template<typename T>
inline ::System::IProgress_1<T>* Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::System::IProgress_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::Report(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>*>(),
                        {"Report", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>* Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>*>());
}
/// @brief Convert operator to "::System::IProgress_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::operator ::System::IProgress_1<T>*() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IProgress_1<T>"
template<typename T>
constexpr ::System::IProgress_1<T>* Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::i___System__IProgress_1_T_() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Progress_NullProgress_1<T>::Progress_NullProgress_1()   {
}
template<typename T>
constexpr ::System::Action_1<T>*& Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::__cordl_internal_set_action(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::_ctor(::System::Action_1<T>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::Report(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>*>(),
                        {"Report", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>* Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::New_ctor(::System::Action_1<T>*  action)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>*>(action));
}
/// @brief Convert operator to "::System::IProgress_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::operator ::System::IProgress_1<T>*() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IProgress_1<T>"
template<typename T>
constexpr ::System::IProgress_1<T>* Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::i___System__IProgress_1_T_() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Progress_AnonymousProgress_1<T>::Progress_AnonymousProgress_1()   {
}
template<typename T>
constexpr ::System::Action_1<T>*& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_set_action(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename T>
constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* const& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_isFirstCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirstCall;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_isFirstCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirstCall;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_set_isFirstCall(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFirstCall = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_latestValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestValue;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_get_latestValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::__cordl_internal_set_latestValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestValue = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::_ctor(::System::Action_1<T>*  action, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, comparer);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::Report(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>*>(),
                        {"Report", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>* Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::New_ctor(::System::Action_1<T>*  action, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>*>(action, comparer));
}
/// @brief Convert operator to "::System::IProgress_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::operator ::System::IProgress_1<T>*() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IProgress_1<T>"
template<typename T>
constexpr ::System::IProgress_1<T>* Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::i___System__IProgress_1_T_() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Progress_OnlyValueChangedProgress_1<T>::Progress_OnlyValueChangedProgress_1()   {
}
template<typename T>
inline ::System::IProgress_1<T>* Cysharp::Threading::Tasks::Progress::Create(::System::Action_1<T>*  handler)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Progress*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IProgress_1<T>*>(nullptr, ___internal_method, handler);
}
template<typename T>
inline ::System::IProgress_1<T>* Cysharp::Threading::Tasks::Progress::CreateOnlyValueChanged(::System::Action_1<T>*  handler, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Progress*>(),
                    {"CreateOnlyValueChanged", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IProgress_1<T>*>(nullptr, ___internal_method, handler, comparer);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Progress::Progress()   {
}
