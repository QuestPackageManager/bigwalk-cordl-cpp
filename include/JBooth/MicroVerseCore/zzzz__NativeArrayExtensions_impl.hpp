#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/NativeArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__NativeArrayExtensions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::NativeArrayExtensions.CopyToFastByteToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<uint8_t>, ::System::Object*)>(&::JBooth::MicroVerseCore::NativeArrayExtensions::CopyToFastByteToInt)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18141d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::NativeArrayExtensions*>(),
                        {"CopyToFastByteToInt", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void JBooth::MicroVerseCore::NativeArrayExtensions::CopyToFast(::Unity::Collections::NativeArray_1<T>  nativeArray, ::System::Object*  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::NativeArrayExtensions*>(),
                    {"CopyToFast", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeArray, array);
}
inline void JBooth::MicroVerseCore::NativeArrayExtensions::CopyToFastByteToInt(::Unity::Collections::NativeArray_1<uint8_t>  nativeArray, ::System::Object*  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::NativeArrayExtensions*>(),
                        {"CopyToFastByteToInt", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeArray, array);
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::NativeArrayExtensions::NativeArrayExtensions()   {
}
