#pragma once
// IWYU pragma private; include "MA/Flora/NativeBuffer_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "MA/Flora/zzzz__NativeBuffer_1_def.hpp"
#include "MA/Flora/zzzz__NativeBufferHeader_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::_ctor(::MA::Flora::NativeBufferHeader*  header, int32_t  internalCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, header, internalCapacity, allocator);
}
template<typename T>
inline int32_t MA::Flora::NativeBuffer_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::NativeBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline bool MA::Flora::NativeBuffer_1<T>::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline bool MA::Flora::NativeBuffer_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline T MA::Flora::NativeBuffer_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline ::by_ref<T> MA::Flora::NativeBuffer_1<T>::ElementAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"ElementAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::ResizeUninitialized(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"ResizeUninitialized", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::Resize(int32_t  length, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, options);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::EnsureCapacity(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::TrimExcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"TrimExcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::NativeBuffer_1<T>::Add(T  elem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, elem);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::Insert(int32_t  index, T  elem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, elem);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::AddRange(::Unity::Collections::NativeArray_1<T>  newElems)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"AddRange", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newElems);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::AddRange(T*  newElems, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"AddRange", {}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newElems, length);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::RemoveRangeSwapBack(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"RemoveRangeSwapBack", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::RemoveAtSwapBack(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"RemoveAtSwapBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename T>
inline T* MA::Flora::NativeBuffer_1<T>::GetUnsafePtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
template<typename T>
inline T* MA::Flora::NativeBuffer_1<T>::GetUnsafeReadOnlyPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"GetUnsafeReadOnlyPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Span_1<T> MA::Flora::NativeBuffer_1<T>::AsSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"AsSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> MA::Flora::NativeBuffer_1<T>::AsReadOnlySpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"AsReadOnlySpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template<typename T>
template<typename U>
inline ::MA::Flora::NativeBuffer_1<U> MA::Flora::NativeBuffer_1<T>::Reinterpret()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                    {"Reinterpret", {::i2c::class_of<U>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBuffer_1<U>>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeBuffer_1<T>::AsArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"AsArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeBuffer_1<T>::GetSubArray(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"GetSubArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, index, count);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeBuffer_1<T>::ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"ToArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CopyTo(::by_ref<::ArrayW<T>>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CopyTo", {}, {::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1_Enumerator<T> MA::Flora::NativeBuffer_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1_Enumerator<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* MA::Flora::NativeBuffer_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* MA::Flora::NativeBuffer_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CopyFrom(::Unity::Collections::NativeArray_1<T>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CopyFrom(::Unity::Collections::NativeSlice_1<T>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CopyFrom(::MA::Flora::NativeBuffer_1<T>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::NativeBuffer_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CopyFrom(::ArrayW<T>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CheckBounds(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CheckBounds", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CheckReadAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CheckReadAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CheckWriteAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CheckWriteAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeBuffer_1<T>::CheckWriteAccessAndInvalidateArrayAliases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                        {"CheckWriteAccessAndInvalidateArrayAliases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
template<typename U>
inline void MA::Flora::NativeBuffer_1<T>::AssertReinterpretSizesMatch()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeBuffer_1<T>>(),
                    {"AssertReinterpretSizesMatch", {::i2c::class_of<U>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  MA::Flora::NativeBuffer_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* MA::Flora::NativeBuffer_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  MA::Flora::NativeBuffer_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* MA::Flora::NativeBuffer_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::MA::Flora::NativeBufferHeader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InternalCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::NativeBuffer_1<T>::NativeBuffer_1(::MA::Flora::NativeBufferHeader*  m_Buffer, int32_t  m_InternalCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_Allocator) noexcept  {
this->m_Buffer = m_Buffer;
this->m_InternalCapacity = m_InternalCapacity;
this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::NativeBuffer_1<T>::NativeBuffer_1()   {
}
