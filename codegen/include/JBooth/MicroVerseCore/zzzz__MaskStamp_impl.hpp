#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MaskStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IMaskModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskTarget_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel::MaskStamp_TargetChannel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel::MaskStamp_TargetChannel()   {
}
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  JBooth::MicroVerseCore::MaskStamp_TargetChannel::RGBA{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  JBooth::MicroVerseCore::MaskStamp_TargetChannel::RGB{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  JBooth::MicroVerseCore::MaskStamp_TargetChannel::R{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  JBooth::MicroVerseCore::MaskStamp_TargetChannel::G{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  JBooth::MicroVerseCore::MaskStamp_TargetChannel::B{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  JBooth::MicroVerseCore::MaskStamp_TargetChannel::A{static_cast<int32_t>(0x5)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode::MaskStamp_BlendMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode::MaskStamp_BlendMode()   {
}
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode  JBooth::MicroVerseCore::MaskStamp_BlendMode::Default{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode  JBooth::MicroVerseCore::MaskStamp_BlendMode::Add{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode  JBooth::MicroVerseCore::MaskStamp_BlendMode::Subtract{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode  JBooth::MicroVerseCore::MaskStamp_BlendMode::Multiply{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode  JBooth::MicroVerseCore::MaskStamp_BlendMode::Multiply2X{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181408270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.GetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::JBooth::MicroVerseCore::MaskTarget> (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::GetTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"GetTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.ApplyMaskStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskStamp::*)(::JBooth::MicroVerseCore::MaskData*)>(&::JBooth::MicroVerseCore::MaskStamp::ApplyMaskStamp)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x181407d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"ApplyMaskStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MaskData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814083c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::GetBounds)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814080e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181408400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181408390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskStamp::*)()>(&::JBooth::MicroVerseCore::MaskStamp::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181408500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget>& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget> const& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void JBooth::MicroVerseCore::MaskStamp::__cordl_internal_set_target(::UnityW<::JBooth::MicroVerseCore::MaskTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void JBooth::MicroVerseCore::MaskStamp::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_tint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tint;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_tint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tint;
}
constexpr void JBooth::MicroVerseCore::MaskStamp::__cordl_internal_set_tint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tint = value;
}
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_targetChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetChannel;
}
constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_targetChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetChannel;
}
constexpr void JBooth::MicroVerseCore::MaskStamp::__cordl_internal_set_targetChannel(::JBooth::MicroVerseCore::MaskStamp_TargetChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetChannel = value;
}
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_blendMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMode;
}
constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode const& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_blendMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMode;
}
constexpr void JBooth::MicroVerseCore::MaskStamp::__cordl_internal_set_blendMode(::JBooth::MicroVerseCore::MaskStamp_BlendMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendMode = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet*& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_filterSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr ::JBooth::MicroVerseCore::FilterSet* const& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_filterSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterSet;
}
constexpr void JBooth::MicroVerseCore::MaskStamp::__cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterSet = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::MaskStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::MaskStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
inline void JBooth::MicroVerseCore::MaskStamp::setStaticF_maskShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "maskShader", ::JBooth::MicroVerseCore::MaskStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::MaskStamp::getStaticF_maskShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "maskShader", ::JBooth::MicroVerseCore::MaskStamp*>();
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::MaskStamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MaskStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::JBooth::MicroVerseCore::MaskTarget> JBooth::MicroVerseCore::MaskStamp::GetTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"GetTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::JBooth::MicroVerseCore::MaskTarget>>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MaskStamp::ApplyMaskStamp(::JBooth::MicroVerseCore::MaskData*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"ApplyMaskStamp", {}, {::i2c::type_of<::JBooth::MicroVerseCore::MaskData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline void JBooth::MicroVerseCore::MaskStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MaskStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::MaskStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MaskStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::MaskStamp::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::MaskStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MaskStamp* JBooth::MicroVerseCore::MaskStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MaskStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IMaskModifier"
constexpr  JBooth::MicroVerseCore::MaskStamp::operator ::JBooth::MicroVerseCore::IMaskModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IMaskModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IMaskModifier"
constexpr ::JBooth::MicroVerseCore::IMaskModifier* JBooth::MicroVerseCore::MaskStamp::i___JBooth__MicroVerseCore__IMaskModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IMaskModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::MaskStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::MaskStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskStamp::MaskStamp()   {
}
