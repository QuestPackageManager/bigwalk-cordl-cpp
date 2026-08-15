#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Input.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Windows/zzzz__Input_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::Windows::Input.ForwardRawInputImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, uint32_t, uint8_t*, uint32_t)>(&::UnityEngine::Windows::Input::ForwardRawInputImpl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227eea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Input*>(),
                        {"ForwardRawInputImpl", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Input.ForwardRawInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, uint32_t, ::System::IntPtr, uint32_t)>(&::UnityEngine::Windows::Input::ForwardRawInput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18227eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Input*>(),
                        {"ForwardRawInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::Input.ForwardRawInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, uint32_t, uint8_t*, uint32_t)>(&::UnityEngine::Windows::Input::ForwardRawInput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18227eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Input*>(),
                        {"ForwardRawInput", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Input::ForwardRawInputImpl(uint32_t*  rawInputHeaderIndices, uint32_t*  rawInputDataIndices, uint32_t  indicesCount, uint8_t*  rawInputData, uint32_t  rawInputDataSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Input*>(),
                        {"ForwardRawInputImpl", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rawInputHeaderIndices, rawInputDataIndices, indicesCount, rawInputData, rawInputDataSize);
}
inline void UnityEngine::Windows::Input::ForwardRawInput(::System::IntPtr  rawInputHeaderIndices, ::System::IntPtr  rawInputDataIndices, uint32_t  indicesCount, ::System::IntPtr  rawInputData, uint32_t  rawInputDataSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Input*>(),
                        {"ForwardRawInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rawInputHeaderIndices, rawInputDataIndices, indicesCount, rawInputData, rawInputDataSize);
}
inline void UnityEngine::Windows::Input::ForwardRawInput(uint32_t*  rawInputHeaderIndices, uint32_t*  rawInputDataIndices, uint32_t  indicesCount, uint8_t*  rawInputData, uint32_t  rawInputDataSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Input*>(),
                        {"ForwardRawInput", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rawInputHeaderIndices, rawInputDataIndices, indicesCount, rawInputData, rawInputDataSize);
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Input::Input()   {
}
