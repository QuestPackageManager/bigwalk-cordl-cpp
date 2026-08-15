#pragma once
// IWYU pragma private; include "GlobalNamespace/AbstractObjectSet_1.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AbstractObjectSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::AbstractObjectSet_1<T>::__cordl_internal_get_setObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setObjects;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::AbstractObjectSet_1<T>::__cordl_internal_get_setObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setObjects;
}
template<typename T>
constexpr void GlobalNamespace::AbstractObjectSet_1<T>::__cordl_internal_set_setObjects(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setObjects = value;
}
template<typename T>
inline void GlobalNamespace::AbstractObjectSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbstractObjectSet_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::AbstractObjectSet_1<T>* GlobalNamespace::AbstractObjectSet_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AbstractObjectSet_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::AbstractObjectSet_1<T>::AbstractObjectSet_1()   {
}
