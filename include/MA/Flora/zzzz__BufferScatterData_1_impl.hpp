#pragma once
// IWYU pragma private; include "MA/Flora/BufferScatterData_1.hpp"
#include "MA/Flora/zzzz__PackedChunkUploadHeader_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "MA/Flora/zzzz__BufferScatterData_1_def.hpp"
template<typename T>
inline bool MA::Flora::BufferScatterData_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BufferScatterData_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ChunkHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceValues", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::MA::Flora::BufferScatterData_1<T>::BufferScatterData_1(::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkHeaders, ::Unity::Collections::NativeArray_1<T>  InstanceValues) noexcept  {
this->ChunkHeaders = ChunkHeaders;
this->InstanceValues = InstanceValues;
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::Flora::BufferScatterData_1<T>::BufferScatterData_1()   {
}
