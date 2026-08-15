#pragma once
// IWYU pragma private; include "MA/Flora/SetBitEnumerator_1.hpp"
#include "MA/Flora/zzzz__SetBitEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TIndexType>
inline void MA::Flora::SetBitEnumerator_1<TIndexType>::_ctor(uint64_t*  chunks, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunks, index, count);
}
template<typename TIndexType>
inline void MA::Flora::SetBitEnumerator_1<TIndexType>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TIndexType>
inline void MA::Flora::SetBitEnumerator_1<TIndexType>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TIndexType>
inline bool MA::Flora::SetBitEnumerator_1<TIndexType>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TIndexType>
inline TIndexType MA::Flora::SetBitEnumerator_1<TIndexType>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TIndexType>(*this, ___internal_method);
}
template<typename TIndexType>
inline ::MA::Flora::SetBitEnumerator_1<TIndexType> MA::Flora::SetBitEnumerator_1<TIndexType>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<TIndexType>>(*this, ___internal_method);
}
template<typename TIndexType>
inline ::System::Object* MA::Flora::SetBitEnumerator_1<TIndexType>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TIndexType>
inline ::System::Collections::Generic::IEnumerator_1<TIndexType>* MA::Flora::SetBitEnumerator_1<TIndexType>::System_Collections_Generic_IEnumerable_TIndexType__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"System.Collections.Generic.IEnumerable<TIndexType>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TIndexType>*>(*this, ___internal_method);
}
template<typename TIndexType>
inline ::System::Collections::IEnumerator* MA::Flora::SetBitEnumerator_1<TIndexType>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SetBitEnumerator_1<TIndexType>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TIndexType>"
template<typename TIndexType>
constexpr  MA::Flora::SetBitEnumerator_1<TIndexType>::operator ::System::Collections::Generic::IEnumerator_1<TIndexType>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TIndexType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TIndexType>"
template<typename TIndexType>
constexpr ::System::Collections::Generic::IEnumerator_1<TIndexType>* MA::Flora::SetBitEnumerator_1<TIndexType>::i___System__Collections__Generic__IEnumerator_1_TIndexType_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TIndexType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TIndexType>
constexpr  MA::Flora::SetBitEnumerator_1<TIndexType>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TIndexType>
constexpr ::System::Collections::IEnumerator* MA::Flora::SetBitEnumerator_1<TIndexType>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TIndexType>
constexpr  MA::Flora::SetBitEnumerator_1<TIndexType>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TIndexType>
constexpr ::System::IDisposable* MA::Flora::SetBitEnumerator_1<TIndexType>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TIndexType>"
template<typename TIndexType>
constexpr  MA::Flora::SetBitEnumerator_1<TIndexType>::operator ::System::Collections::Generic::IEnumerable_1<TIndexType>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<TIndexType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TIndexType>"
template<typename TIndexType>
constexpr ::System::Collections::Generic::IEnumerable_1<TIndexType>* MA::Flora::SetBitEnumerator_1<TIndexType>::i___System__Collections__Generic__IEnumerable_1_TIndexType_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<TIndexType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TIndexType>
constexpr  MA::Flora::SetBitEnumerator_1<TIndexType>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TIndexType>
constexpr ::System::Collections::IEnumerable* MA::Flora::SetBitEnumerator_1<TIndexType>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Chunks", ty: "uint64_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Mask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemainingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnscannedBitMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BaseBitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename TIndexType>
constexpr ::MA::Flora::SetBitEnumerator_1<TIndexType>::SetBitEnumerator_1(uint64_t*  m_Chunks, int32_t  m_Start, int32_t  m_End, int32_t  m_ChunkIndex, uint64_t  m_Mask, uint64_t  m_RemainingMask, uint64_t  m_UnscannedBitMask, int32_t  m_Index, int32_t  m_BaseBitIndex) noexcept  {
this->m_Chunks = m_Chunks;
this->m_Start = m_Start;
this->m_End = m_End;
this->m_ChunkIndex = m_ChunkIndex;
this->m_Mask = m_Mask;
this->m_RemainingMask = m_RemainingMask;
this->m_UnscannedBitMask = m_UnscannedBitMask;
this->m_Index = m_Index;
this->m_BaseBitIndex = m_BaseBitIndex;
}
// Ctor Parameters []
template<typename TIndexType>
constexpr ::MA::Flora::SetBitEnumerator_1<TIndexType>::SetBitEnumerator_1()   {
}
