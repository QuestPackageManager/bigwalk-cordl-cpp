#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperMPB.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperMPB_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.get_MaterialPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::WaveHarmonic::Crest::PropertyWrapperMPB::*)()>(&::WaveHarmonic::Crest::PropertyWrapperMPB::get_MaterialPropertyBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"get_MaterialPropertyBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(::UnityEngine::MaterialPropertyBlock*)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, float_t)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetFloatArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, ::ArrayW<float_t>)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetFloatArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, ::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, ::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetVector)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetVectorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetVectorArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetMatrix)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256bde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256bdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)(int32_t, bool)>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetBoolean)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256bd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.GetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)()>(&::WaveHarmonic::Crest::PropertyWrapperMPB::GetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"GetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PropertyWrapperMPB.SetBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PropertyWrapperMPB::*)()>(&::WaveHarmonic::Crest::PropertyWrapperMPB::SetBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::MaterialPropertyBlock* WaveHarmonic::Crest::PropertyWrapperMPB::get_MaterialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"get_MaterialPropertyBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::_ctor(::UnityEngine::MaterialPropertyBlock*  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mpb);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetFloat(int32_t  param, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetFloatArray(int32_t  param, ::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetFloatArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetTexture(int32_t  param, ::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetTexture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetVector(int32_t  param, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetVectorArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetInteger(int32_t  param, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetBoolean(int32_t  param, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetBoolean", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, param, value);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::GetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"GetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void WaveHarmonic::Crest::PropertyWrapperMPB::SetBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PropertyWrapperMPB>(),
                        {"SetBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr  WaveHarmonic::Crest::PropertyWrapperMPB::operator ::WaveHarmonic::Crest::IPropertyWrapper*()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* WaveHarmonic::Crest::PropertyWrapperMPB::i___WaveHarmonic__Crest__IPropertyWrapper()  {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_MaterialPropertyBlock_k__BackingField", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::PropertyWrapperMPB::PropertyWrapperMPB(::UnityEngine::MaterialPropertyBlock*  _MaterialPropertyBlock_k__BackingField) noexcept  {
this->_MaterialPropertyBlock_k__BackingField = _MaterialPropertyBlock_k__BackingField;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PropertyWrapperMPB::PropertyWrapperMPB()   {
}
