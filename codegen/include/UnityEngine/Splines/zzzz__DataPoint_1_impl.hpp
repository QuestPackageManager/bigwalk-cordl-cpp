#pragma once
// IWYU pragma private; include "UnityEngine/Splines/DataPoint_1.hpp"
#include "UnityEngine/Splines/zzzz__DataPoint_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "UnityEngine/Splines/zzzz__IDataPoint_def.hpp"
template<typename TDataType>
inline float_t UnityEngine::Splines::DataPoint_1<TDataType>::get_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(),
                        {"get_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
template<typename TDataType>
inline void UnityEngine::Splines::DataPoint_1<TDataType>::set_Index(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(),
                        {"set_Index", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TDataType>
inline TDataType UnityEngine::Splines::DataPoint_1<TDataType>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TDataType>(*this, ___internal_method);
}
template<typename TDataType>
inline void UnityEngine::Splines::DataPoint_1<TDataType>::set_Value(TDataType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(),
                        {"set_Value", {}, {::i2c::type_of<TDataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TDataType>
inline void UnityEngine::Splines::DataPoint_1<TDataType>::_ctor(float_t  index, TDataType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<TDataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename TDataType>
inline int32_t UnityEngine::Splines::DataPoint_1<TDataType>::CompareTo(::UnityEngine::Splines::DataPoint_1<TDataType>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(),
                        {"CompareTo", {}, {::i2c::type_of<::UnityEngine::Splines::DataPoint_1<TDataType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename TDataType>
inline int32_t UnityEngine::Splines::DataPoint_1<TDataType>::CompareTo(float_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(),
                        {"CompareTo", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename TDataType>
inline ::StringW UnityEngine::Splines::DataPoint_1<TDataType>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::DataPoint_1<TDataType>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>"
template<typename TDataType>
constexpr  UnityEngine::Splines::DataPoint_1<TDataType>::operator ::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>*()  {
return static_cast<::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>"
template<typename TDataType>
constexpr ::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>* UnityEngine::Splines::DataPoint_1<TDataType>::i___System__IComparable_1___UnityEngine__Splines__DataPoint_1_TDataType__()  {
return static_cast<::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<float_t>"
template<typename TDataType>
constexpr  UnityEngine::Splines::DataPoint_1<TDataType>::operator ::System::IComparable_1<float_t>*()  {
return static_cast<::System::IComparable_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<float_t>"
template<typename TDataType>
constexpr ::System::IComparable_1<float_t>* UnityEngine::Splines::DataPoint_1<TDataType>::i___System__IComparable_1_float_t_()  {
return static_cast<::System::IComparable_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::UnityEngine::Splines::IDataPoint"
template<typename TDataType>
constexpr  UnityEngine::Splines::DataPoint_1<TDataType>::operator ::UnityEngine::Splines::IDataPoint*()  {
return static_cast<::UnityEngine::Splines::IDataPoint*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::IDataPoint"
template<typename TDataType>
constexpr ::UnityEngine::Splines::IDataPoint* UnityEngine::Splines::DataPoint_1<TDataType>::i___UnityEngine__Splines__IDataPoint()  {
return static_cast<::UnityEngine::Splines::IDataPoint*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "TDataType", modifiers: "", def_value: Some("{}") }]
template<typename TDataType>
constexpr ::UnityEngine::Splines::DataPoint_1<TDataType>::DataPoint_1(float_t  m_Index, TDataType  m_Value) noexcept  {
this->m_Index = m_Index;
this->m_Value = m_Value;
}
// Ctor Parameters []
template<typename TDataType>
constexpr ::UnityEngine::Splines::DataPoint_1<TDataType>::DataPoint_1()   {
}
