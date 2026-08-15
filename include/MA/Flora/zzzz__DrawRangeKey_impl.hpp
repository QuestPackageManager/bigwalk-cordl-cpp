#pragma once
// IWYU pragma private; include "MA/Flora/DrawRangeKey.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_impl.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_impl.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawRangeKey.get_IsInCameraPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawRangeKey::*)()>(&::MA::Flora::DrawRangeKey::get_IsInCameraPass)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bcd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"get_IsInCameraPass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeKey.get_IsInShadowPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawRangeKey::*)()>(&::MA::Flora::DrawRangeKey::get_IsInShadowPass)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814bcdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"get_IsInShadowPass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeKey.get_IsInMotionPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawRangeKey::*)()>(&::MA::Flora::DrawRangeKey::get_IsInMotionPass)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bcda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"get_IsInMotionPass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawRangeKey::*)(::UnityEngine::Renderer*)>(&::MA::Flora::DrawRangeKey::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814bcce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawRangeKey::*)(::MA::Flora::DrawRangeKey)>(&::MA::Flora::DrawRangeKey::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814bcbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawRangeKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawRangeKey::*)()>(&::MA::Flora::DrawRangeKey::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814bcc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                    {::i2c::class_of<::MA::Flora::DrawRangeKey>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawRangeKey.IsValidForViewType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawRangeKey::*)(::UnityEngine::Rendering::BatchCullingViewType)>(&::MA::Flora::DrawRangeKey::IsValidForViewType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814bccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"IsValidForViewType", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::DrawRangeKey::get_IsInCameraPass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"get_IsInCameraPass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::DrawRangeKey::get_IsInShadowPass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"get_IsInShadowPass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::DrawRangeKey::get_IsInMotionPass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"get_IsInMotionPass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::DrawRangeKey::_ctor(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderer);
}
inline bool MA::Flora::DrawRangeKey::Equals(::MA::Flora::DrawRangeKey  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawRangeKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline int32_t MA::Flora::DrawRangeKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawRangeKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::DrawRangeKey::IsValidForViewType(::UnityEngine::Rendering::BatchCullingViewType  viewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawRangeKey>(),
                        {"IsValidForViewType", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, viewType);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawRangeKey>"
constexpr  MA::Flora::DrawRangeKey::operator ::System::IEquatable_1<::MA::Flora::DrawRangeKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawRangeKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawRangeKey>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawRangeKey>* MA::Flora::DrawRangeKey::i___System__IEquatable_1___MA__Flora__DrawRangeKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawRangeKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Layer", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RenderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RendererPriority", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MotionMode", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShadowCastingMode", ty: "::UnityEngine::Rendering::ShadowCastingMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReceiveShadows", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "StaticShadowCaster", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawRangeKey::DrawRangeKey(uint8_t  Layer, uint32_t  RenderingLayerMask, int32_t  RendererPriority, ::UnityEngine::MotionVectorGenerationMode  MotionMode, ::UnityEngine::Rendering::ShadowCastingMode  ShadowCastingMode, bool  ReceiveShadows, bool  StaticShadowCaster) noexcept  {
this->Layer = Layer;
this->RenderingLayerMask = RenderingLayerMask;
this->RendererPriority = RendererPriority;
this->MotionMode = MotionMode;
this->ShadowCastingMode = ShadowCastingMode;
this->ReceiveShadows = ReceiveShadows;
this->StaticShadowCaster = StaticShadowCaster;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawRangeKey::DrawRangeKey()   {
}
