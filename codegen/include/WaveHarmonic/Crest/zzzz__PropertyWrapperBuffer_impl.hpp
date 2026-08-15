#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperBuffer.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.get_Buffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)()>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::get_Buffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"get_Buffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, float_t)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825650d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, ::ArrayW<float_t>)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetFloatArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825650a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, ::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetTexture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825651f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetVector)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825652a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetVectorArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182565270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182565160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182565100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)(int32_t, bool)>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetBoolean)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182565060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)()>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::GetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"GetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperBuffer.SetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperBuffer::*)()>(&::WaveHarmonic::Crest::PropertyWrapperBuffer::SetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::CommandBuffer* WaveHarmonic::Crest::PropertyWrapperBuffer::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::_ctor(::UnityEngine::Rendering::CommandBuffer*  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mpb);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetFloat(int32_t  param, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetFloatArray(int32_t  param, ::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetTexture(int32_t  param, ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetVector(int32_t  param, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetInteger(int32_t  param, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetBoolean(int32_t  param, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::GetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"GetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperBuffer::SetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperBuffer>(),
                        {"SetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr  WaveHarmonic::Crest::PropertyWrapperBuffer::operator ::WaveHarmonic::Crest::IPropertyWrapper*()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* WaveHarmonic::Crest::PropertyWrapperBuffer::i___WaveHarmonic__Crest__IPropertyWrapper()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Buffer_k__BackingField", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::PropertyWrapperBuffer::PropertyWrapperBuffer(::UnityEngine::Rendering::CommandBuffer*  _Buffer_k__BackingField) noexcept  {
this->_Buffer_k__BackingField = _Buffer_k__BackingField;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PropertyWrapperBuffer::PropertyWrapperBuffer()   {
}
