#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AsyncGPUReadback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncRequestNativeArrayData_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::ComputeBuffer*, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18227d190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::GraphicsBuffer*, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18227cfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::GraphicsBuffer*, int32_t, int32_t, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18227d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18227d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_ComputeBuffer_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::ComputeBuffer*, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_ComputeBuffer_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18227cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_ComputeBuffer_1", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18227cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_1", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::GraphicsBuffer*, int32_t, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18227ce00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_2", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_Texture_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::Texture*, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18227ce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_1", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_Texture_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_3)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18227cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_3", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_ComputeBuffer_1_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_ComputeBuffer_1_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_ComputeBuffer_1_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_1_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_1_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_2_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227cdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_Texture_1_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_1_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_1_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_Texture_3_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_3_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227cef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_3_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request(::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, callback);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request(::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, callback);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, size, offset, callback);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, mipIndex, x, width, y, height, z, depth, callback);
}
template<typename T>
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::RequestIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                    {"RequestIntoNativeArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, output, src, size, offset, callback);
}
template<typename T>
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::RequestIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                    {"RequestIntoNativeArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, output, src, mipIndex, callback);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_ComputeBuffer_1(::UnityEngine::ComputeBuffer*  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_ComputeBuffer_1", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, buffer, data);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1(::UnityEngine::GraphicsBuffer*  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_1", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, buffer, data);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2(::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_2", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, size, offset, data);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_1(::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_1", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, mipIndex, data);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_3(::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_3", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, mipIndex, x, width, y, height, z, depth, data);
}
inline void UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_ComputeBuffer_1_Injected(::System::IntPtr  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_ComputeBuffer_1_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, data, ret);
}
inline void UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1_Injected(::System::IntPtr  buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_1_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, data, ret);
}
inline void UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2_Injected(::System::IntPtr  src, int32_t  size, int32_t  offset, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_GraphicsBuffer_2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, size, offset, data, ret);
}
inline void UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_1_Injected(::System::IntPtr  src, int32_t  mipIndex, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_1_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, mipIndex, data, ret);
}
inline void UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_Texture_3_Injected(::System::IntPtr  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  data, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                        {"Request_Internal_Texture_3_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, mipIndex, x, width, y, height, z, depth, data, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AsyncGPUReadback::AsyncGPUReadback()   {
}
