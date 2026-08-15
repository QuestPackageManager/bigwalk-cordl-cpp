#pragma once
// IWYU pragma private; include "MA/Flora/EntityObjectRef_1.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
template<typename T>
inline ::MA::Flora::EntityObjectRef_1<T> MA::Flora::EntityObjectRef_1<T>::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::EntityObjectRef_1<T>>(nullptr, ___internal_method);
}
template<typename T>
inline void MA::Flora::EntityObjectRef_1<T>::_ctor(::UnityEngine::EntityId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline T MA::Flora::EntityObjectRef_1<T>::get_Object()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"get_Object", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::EntityObjectRef_1<T>::set_Object(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"set_Object", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline bool MA::Flora::EntityObjectRef_1<T>::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::EntityObjectRef_1<T>::CompareTo(::MA::Flora::EntityObjectRef_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename T>
inline bool MA::Flora::EntityObjectRef_1<T>::Equals(::MA::Flora::EntityObjectRef_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline bool MA::Flora::EntityObjectRef_1<T>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template<typename T>
inline int32_t MA::Flora::EntityObjectRef_1<T>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::EntityId MA::Flora::EntityObjectRef_1<T>::op_Implicit___UnityEngine__EntityId(::MA::Flora::EntityObjectRef_1<T>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(nullptr, ___internal_method, obj);
}
template<typename T>
inline ::MA::Flora::EntityObjectRef_1<T> MA::Flora::EntityObjectRef_1<T>::op_Implicit___MA__Flora__EntityObjectRef_1_T_(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::EntityObjectRef_1<T>>(nullptr, ___internal_method, instance);
}
template<typename T>
inline T MA::Flora::EntityObjectRef_1<T>::op_Implicit_T(::MA::Flora::EntityObjectRef_1<T>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
template<typename T>
inline bool MA::Flora::EntityObjectRef_1<T>::op_Equality(::MA::Flora::EntityObjectRef_1<T>  left, ::MA::Flora::EntityObjectRef_1<T>  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>(), ::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template<typename T>
inline bool MA::Flora::EntityObjectRef_1<T>::op_Inequality(::MA::Flora::EntityObjectRef_1<T>  left, ::MA::Flora::EntityObjectRef_1<T>  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>(), ::i2c::type_of<::MA::Flora::EntityObjectRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template<typename T>
inline ::StringW MA::Flora::EntityObjectRef_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::FixedString64Bytes MA::Flora::EntityObjectRef_1<T>::ToFixedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::EntityObjectRef_1<T>>(),
                        {"ToFixedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedString64Bytes>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>"
template<typename T>
constexpr  MA::Flora::EntityObjectRef_1<T>::operator ::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>"
template<typename T>
constexpr ::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>* MA::Flora::EntityObjectRef_1<T>::i___System__IEquatable_1___MA__Flora__EntityObjectRef_1_T__()  {
return static_cast<::System::IEquatable_1<::MA::Flora::EntityObjectRef_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>"
template<typename T>
constexpr  MA::Flora::EntityObjectRef_1<T>::operator ::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>"
template<typename T>
constexpr ::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>* MA::Flora::EntityObjectRef_1<T>::i___System__IComparable_1___MA__Flora__EntityObjectRef_1_T__()  {
return static_cast<::System::IComparable_1<::MA::Flora::EntityObjectRef_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::EntityObjectRef_1<T>::EntityObjectRef_1(::UnityEngine::EntityId  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::EntityObjectRef_1<T>::EntityObjectRef_1()   {
}
