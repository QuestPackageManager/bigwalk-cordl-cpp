#pragma once
// IWYU pragma private; include "MA/Flora/PersistentGraphicsBufferRef_1.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "MA/Flora/zzzz__PersistentGraphicsBufferRef_1_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferGrowPolicy_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferTrimPolicy_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::_ctor(int32_t  count, ::StringW  name, ::UnityEngine::GraphicsBuffer_Target  target, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, name, target, options);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool MA::Flora::PersistentGraphicsBufferRef_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::PersistentGraphicsBufferRef_1<T>::get_Stride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"get_Stride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::PersistentGraphicsBufferRef_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int64_t MA::Flora::PersistentGraphicsBufferRef_1<T>::get_SizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"get_SizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::PersistentGraphicsBufferRef_1<T>::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::PersistentGraphicsBufferRef_1<T>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
template<typename T>
inline T MA::Flora::PersistentGraphicsBufferRef_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::Resize(int32_t  newLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newLength);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::ResizeIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"ResizeIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requiredLength, growPolicy, trimPolicy);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::UpdateBufferData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"UpdateBufferData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::UpdateBufferData(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"UpdateBufferData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::UpdateBufferRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"UpdateBufferRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::UpdateBufferRange(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"UpdateBufferRange", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, startIndex, count);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::PersistentGraphicsBufferRef_1<T>::op_Implicit___MA__Flora__GraphicsBufferRef(::MA::Flora::PersistentGraphicsBufferRef_1<T>  graphicsBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, graphicsBuffer);
}
template<typename T>
inline ::UnityEngine::GraphicsBuffer* MA::Flora::PersistentGraphicsBufferRef_1<T>::op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::PersistentGraphicsBufferRef_1<T>  graphicsBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, graphicsBuffer);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::CheckCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"CheckCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::CheckLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"CheckLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
template<typename T>
inline void MA::Flora::PersistentGraphicsBufferRef_1<T>::CheckRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PersistentGraphicsBufferRef_1<T>>(),
                        {"CheckRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  MA::Flora::PersistentGraphicsBufferRef_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* MA::Flora::PersistentGraphicsBufferRef_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::PersistentGraphicsBufferRef_1<T>::PersistentGraphicsBufferRef_1(::MA::Flora::GraphicsBufferRef  m_Buffer, ::Unity::Collections::NativeArray_1<T>  m_Data) noexcept  {
this->m_Buffer = m_Buffer;
this->m_Data = m_Data;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::PersistentGraphicsBufferRef_1<T>::PersistentGraphicsBufferRef_1()   {
}
