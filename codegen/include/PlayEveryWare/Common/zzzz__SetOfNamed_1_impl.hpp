#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/SetOfNamed_1.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "PlayEveryWare/Common/zzzz__SetOfNamed_1_def.hpp"
#include "PlayEveryWare/Common/zzzz__Named_1_def.hpp"
#include "PlayEveryWare/Common/zzzz__ValueChangedEventArgs_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::StringW& PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_get__defaultNamePattern()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultNamePattern;
}
template<typename T>
constexpr ::StringW const& PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_get__defaultNamePattern() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultNamePattern;
}
template<typename T>
constexpr void PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_set__defaultNamePattern(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultNamePattern = value;
}
template<typename T>
constexpr ::System::Func_2<T,bool>*& PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_get__removePredicate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removePredicate;
}
template<typename T>
constexpr ::System::Func_2<T,bool>* const& PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_get__removePredicate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removePredicate;
}
template<typename T>
constexpr void PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_set__removePredicate(::System::Func_2<T,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____removePredicate = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_get__existingNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____existingNames;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_get__existingNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____existingNames;
}
template<typename T>
constexpr void PlayEveryWare::Common::SetOfNamed_1<T>::__cordl_internal_set__existingNames(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____existingNames = value;
}
template<typename T>
inline void PlayEveryWare::Common::SetOfNamed_1<T>::_ctor(::StringW  defaultNamePattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultNamePattern);
}
template<typename T>
inline void PlayEveryWare::Common::SetOfNamed_1<T>::SetRemovePredicate(::System::Func_2<T,bool>*  removePredicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {"SetRemovePredicate", {}, {::i2c::type_of<::System::Func_2<T,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removePredicate);
}
template<typename T>
inline ::StringW PlayEveryWare::Common::SetOfNamed_1<T>::GetNewItemName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {"GetNewItemName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline bool PlayEveryWare::Common::SetOfNamed_1<T>::Add(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename T>
inline void PlayEveryWare::Common::SetOfNamed_1<T>::OnItemNameChanged(::System::Object*  sender, ::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {"OnItemNameChanged", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::PlayEveryWare::Common::ValueChangedEventArgs_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
template<typename T>
inline bool PlayEveryWare::Common::SetOfNamed_1<T>::ContainsName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {"ContainsName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
template<typename T>
inline bool PlayEveryWare::Common::SetOfNamed_1<T>::ContainsValue(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {"ContainsValue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool PlayEveryWare::Common::SetOfNamed_1<T>::Remove(::PlayEveryWare::Common::Named_1<T>*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::SetOfNamed_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<::PlayEveryWare::Common::Named_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline ::PlayEveryWare::Common::SetOfNamed_1<T>* PlayEveryWare::Common::SetOfNamed_1<T>::New_ctor(::StringW  defaultNamePattern)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::Common::SetOfNamed_1<T>*>(defaultNamePattern));
}
// Ctor Parameters []
template<typename T>
constexpr ::PlayEveryWare::Common::SetOfNamed_1<T>::SetOfNamed_1()   {
}
