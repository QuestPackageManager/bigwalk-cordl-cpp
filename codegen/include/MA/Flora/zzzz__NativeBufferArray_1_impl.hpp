#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArray_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArrayMetadata_def.hpp"
#include "MA/Flora/zzzz__NativeBufferHeader_def.hpp"
#include "MA/Flora/zzzz__NativeBuffer_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::_ctor(int32_t  length, int32_t  inlineCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, inlineCapacity, allocator);
}
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::_ctor(int32_t  length, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator);
}
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Jobs::JobHandle MA::Flora::NativeBufferArray_1<T>::Dispose(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template<typename T>
inline ::MA::Flora::NativeBufferHeader* MA::Flora::NativeBufferArray_1<T>::GetNativeBufferHeader(uint8_t*  ptr, int32_t  index, int32_t  elementSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"GetNativeBufferHeader", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferHeader*>(nullptr, ___internal_method, ptr, index, elementSize);
}
template<typename T>
inline bool MA::Flora::NativeBufferArray_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::NativeBufferArray_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::NativeBufferArray_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::NativeBuffer_1<T> MA::Flora::NativeBufferArray_1<T>::get_Item(int32_t  bufferIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBuffer_1<T>>(*this, ___internal_method, bufferIndex);
}
template<typename T>
inline T MA::Flora::NativeBufferArray_1<T>::get_Item(int32_t  bufferIndex, int32_t  elementIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, bufferIndex, elementIndex);
}
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::SetCapacity(int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"SetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::Resize(int32_t  newLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newLength);
}
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::CheckReadAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"CheckReadAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeBufferArray_1<T>::CheckIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArray_1<T>>(),
                        {"CheckIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  MA::Flora::NativeBufferArray_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* MA::Flora::NativeBufferArray_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Metadata", ty: "::MA::Flora::NativeBufferArrayMetadata*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::NativeBufferArray_1<T>::NativeBufferArray_1(::MA::Flora::NativeBufferArrayMetadata*  m_Metadata, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel) noexcept  {
this->m_Metadata = m_Metadata;
this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::NativeBufferArray_1<T>::NativeBufferArray_1()   {
}
