#pragma once
// IWYU pragma private; include "MA/Flora/ConstantBufferArrayRef_1.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "MA/Flora/zzzz__ConstantBufferArrayRef_1_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
template<typename T>
inline bool MA::Flora::ConstantBufferArrayRef_1<T>::get_SupportsConstantBufferAlignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"get_SupportsConstantBufferAlignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::_ctor(int32_t  count, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, name);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool MA::Flora::ConstantBufferArrayRef_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::ConstantBufferArrayRef_1<T>::get_BufferStride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"get_BufferStride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::ConstantBufferArrayRef_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::ConstantBufferArrayRef_1<T>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::ConstantBufferArrayRef_1<T>::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
template<typename T>
inline T MA::Flora::ConstantBufferArrayRef_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::UpdateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"UpdateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::UpdateData(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"UpdateData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::UpdateData(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"UpdateData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Resize(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count);
}
template<typename T>
inline ::StringW MA::Flora::ConstantBufferArrayRef_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Bind(int32_t  nameID, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameID, index);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Bind(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, nameID, index);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Bind(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  nameID, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, cs, nameID, index);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Bind(::UnityEngine::ComputeShader*  cs, int32_t  nameID, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs, nameID, index);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Bind(::UnityEngine::Material*  mat, int32_t  nameID, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mat, nameID, index);
}
template<typename T>
inline void MA::Flora::ConstantBufferArrayRef_1<T>::Bind(::UnityEngine::MaterialPropertyBlock*  mpb, int32_t  nameID, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"Bind", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mpb, nameID, index);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::ConstantBufferArrayRef_1<T>::op_Implicit___MA__Flora__GraphicsBufferRef(::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ConstantBufferArrayRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, constantBuffer);
}
template<typename T>
inline ::UnityEngine::GraphicsBuffer* MA::Flora::ConstantBufferArrayRef_1<T>::op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ConstantBufferArrayRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ConstantBufferArrayRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, constantBuffer);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  MA::Flora::ConstantBufferArrayRef_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* MA::Flora::ConstantBufferArrayRef_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AlignedData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Buffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::Unity::Collections::FixedString64Bytes", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BufferArray", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsBufferRef>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SizeInBuffer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ConstantBufferOffsetAlignment", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::ConstantBufferArrayRef_1<T>::ConstantBufferArrayRef_1(::Unity::Collections::NativeArray_1<T>  m_Data, ::Unity::Collections::NativeArray_1<uint8_t>  m_AlignedData, ::MA::Flora::GraphicsBufferRef  m_Buffer, ::Unity::Collections::FixedString64Bytes  m_Name, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsBufferRef>  m_BufferArray, int32_t  m_SizeInBuffer, int32_t  m_ConstantBufferOffsetAlignment) noexcept  {
this->m_Data = m_Data;
this->m_AlignedData = m_AlignedData;
this->m_Buffer = m_Buffer;
this->m_Name = m_Name;
this->m_BufferArray = m_BufferArray;
this->m_SizeInBuffer = m_SizeInBuffer;
this->m_ConstantBufferOffsetAlignment = m_ConstantBufferOffsetAlignment;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::ConstantBufferArrayRef_1<T>::ConstantBufferArrayRef_1()   {
}
