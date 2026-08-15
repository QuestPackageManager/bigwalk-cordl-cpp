#pragma once
// IWYU pragma private; include "MA/Flora/NativeScatterList_1.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "MA/Flora/zzzz__NativeScatterList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template<typename T>
inline bool MA::Flora::NativeScatterList_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline bool MA::Flora::NativeScatterList_1<T>::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline bool MA::Flora::NativeScatterList_1<T>::get_HasScatters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"get_HasScatters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeScatterList_1<T>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<uint32_t> MA::Flora::NativeScatterList_1<T>::get_Offsets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"get_Offsets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint32_t>>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::NativeScatterList_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t MA::Flora::NativeScatterList_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::_ctor(int32_t  count, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, allocator);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Jobs::JobHandle MA::Flora::NativeScatterList_1<T>::Dispose(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::TrimExcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"TrimExcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::Resize(int32_t  newLength, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newLength, options);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::Add(T  value, uint32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"Add", {}, {::i2c::type_of<T>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, offset);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::AddRange(T*  values, uint32_t*  offsets, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"AddRange", {}, {::i2c::type_of<T*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values, offsets, count);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::AddRange(::Unity::Collections::NativeArray_1<T>  values, ::Unity::Collections::NativeArray_1<uint32_t>  offsets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"AddRange", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values, offsets);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::AddNoResize(T  value, uint32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"AddNoResize", {}, {::i2c::type_of<T>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, offset);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::AddRangeNoResize(T*  values, uint32_t*  offsets, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<T*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values, offsets, count);
}
template<typename T>
inline void MA::Flora::NativeScatterList_1<T>::AddRangeNoResize(::Unity::Collections::NativeArray_1<T>  values, ::Unity::Collections::NativeArray_1<uint32_t>  offsets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeScatterList_1<T>>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values, offsets);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template<typename T>
constexpr  MA::Flora::NativeScatterList_1<T>::operator ::Unity::Collections::INativeDisposable*()  {
return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template<typename T>
constexpr ::Unity::Collections::INativeDisposable* MA::Flora::NativeScatterList_1<T>::i___Unity__Collections__INativeDisposable()  {
return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  MA::Flora::NativeScatterList_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* MA::Flora::NativeScatterList_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Values", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Offsets", ty: "::Unity::Collections::NativeList_1<uint32_t>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::NativeScatterList_1<T>::NativeScatterList_1(::Unity::Collections::NativeList_1<T>  m_Values, ::Unity::Collections::NativeList_1<uint32_t>  m_Offsets) noexcept  {
this->m_Values = m_Values;
this->m_Offsets = m_Offsets;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::NativeScatterList_1<T>::NativeScatterList_1()   {
}
