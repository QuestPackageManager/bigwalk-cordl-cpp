#pragma once
// IWYU pragma private; include "MA/Flora/ConstantBufferRef_1.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "MA/Flora/zzzz__ConstantBufferRef_1_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool MA::Flora::ConstantBufferRef_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::ConstantBufferRef_1<T>::get_Stride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"get_Stride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::ConstantBufferRef_1<T>::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::ConstantBufferRef_1<T>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
template<typename T>
inline T MA::Flora::ConstantBufferRef_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::UpdateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"UpdateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::UpdateData(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"UpdateData", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::UpdateData(::UnityEngine::Rendering::CommandBuffer*  cmd, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"UpdateData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, value);
}
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::UpdateData(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"UpdateData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd);
}
template<typename T>
inline void MA::Flora::ConstantBufferRef_1<T>::Bind(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameID);
}
template<typename T>
inline T MA::Flora::ConstantBufferRef_1<T>::op_Implicit_T(::MA::Flora::ConstantBufferRef_1<T>  constantBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ConstantBufferRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, constantBuffer);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::ConstantBufferRef_1<T>::op_Implicit___MA__Flora__GraphicsBufferRef(::MA::Flora::ConstantBufferRef_1<T>  constantBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ConstantBufferRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, constantBuffer);
}
template<typename T>
inline ::UnityEngine::GraphicsBuffer* MA::Flora::ConstantBufferRef_1<T>::op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::ConstantBufferRef_1<T>  constantBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ConstantBufferRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, constantBuffer);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  MA::Flora::ConstantBufferRef_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* MA::Flora::ConstantBufferRef_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Buffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::ConstantBufferRef_1<T>::ConstantBufferRef_1(::Unity::Collections::NativeArray_1<T>  m_Data, ::MA::Flora::GraphicsBufferRef  m_Buffer) noexcept  {
this->m_Data = m_Data;
this->m_Buffer = m_Buffer;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::ConstantBufferRef_1<T>::ConstantBufferRef_1()   {
}
