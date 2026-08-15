#pragma once
// IWYU pragma private; include "MA/Flora/SerializationHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__SerializationHelpers_def.hpp"
#include "MA/Flora/zzzz__CompressedTransform_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "MA/Flora/zzzz__SerializationHelpers_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob::*)()>(&::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1815133d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::SerializationHelpers_WriteCompressedTransformsJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::SerializationHelpers_WriteCompressedTransformsJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::SerializationHelpers_WriteCompressedTransformsJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Src", ty: "::MA::Flora::FloraInstanceTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Dst", ty: "::MA::Flora::CompressedTransform*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob::SerializationHelpers_WriteCompressedTransformsJob(int32_t  Length, ::MA::Flora::FloraInstanceTransform*  Src, ::MA::Flora::CompressedTransform*  Dst) noexcept  {
this->Length = Length;
this->Src = Src;
this->Dst = Dst;
}
// Ctor Parameters []
constexpr ::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob::SerializationHelpers_WriteCompressedTransformsJob()   {
}
//  Writing Method size for method: ::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob::*)()>(&::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18150ccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::SerializationHelpers_ReadCompressedTransformsJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::SerializationHelpers_ReadCompressedTransformsJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::SerializationHelpers_ReadCompressedTransformsJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Src", ty: "::MA::Flora::CompressedTransform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Dst", ty: "::MA::Flora::FloraInstanceTransform*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob::SerializationHelpers_ReadCompressedTransformsJob(int32_t  Length, ::MA::Flora::CompressedTransform*  Src, ::MA::Flora::FloraInstanceTransform*  Dst) noexcept  {
this->Length = Length;
this->Src = Src;
this->Dst = Dst;
}
// Ctor Parameters []
constexpr ::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob::SerializationHelpers_ReadCompressedTransformsJob()   {
}
//  Writing Method size for method: ::MA::Flora::SerializationHelpers.SerializeTransformsToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>, ::by_ref<::ArrayW<uint8_t>>)>(&::MA::Flora::SerializationHelpers::SerializeTransformsToByteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18150d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers*>(),
                        {"SerializeTransformsToByteArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SerializationHelpers.DeserializeByteArrayToTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<uint8_t>>, int32_t, ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::SerializationHelpers::DeserializeByteArrayToTransforms)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18150d1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers*>(),
                        {"DeserializeByteArrayToTransforms", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::SerializationHelpers::SerializeTransformsToByteArray(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms, ::by_ref<::ArrayW<uint8_t>>  compressedBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers*>(),
                        {"SerializeTransformsToByteArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transforms, compressedBytes);
}
inline void MA::Flora::SerializationHelpers::DeserializeByteArrayToTransforms(::by_ref<::ArrayW<uint8_t>>  compressedBytes, int32_t  serializedCount, ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>  transforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SerializationHelpers*>(),
                        {"DeserializeByteArrayToTransforms", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, compressedBytes, serializedCount, transforms);
}
// Ctor Parameters []
constexpr ::MA::Flora::SerializationHelpers::SerializationHelpers()   {
}
