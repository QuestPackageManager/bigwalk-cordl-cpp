#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ColorLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShorelineVolumeColorSource_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ColorLod_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ColorLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShorelineVolumeColorSource_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::ColorLod_ShaderIDs::setStaticF_s_ShorelineColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ShorelineColor", ::WaveHarmonic::Crest::ColorLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ColorLod_ShaderIDs::getStaticF_s_ShorelineColor()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShorelineColor", ::WaveHarmonic::Crest::ColorLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ColorLod_ShaderIDs::setStaticF_s_ShorelineColorMaximumDistance(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ShorelineColorMaximumDistance", ::WaveHarmonic::Crest::ColorLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ColorLod_ShaderIDs::getStaticF_s_ShorelineColorMaximumDistance()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShorelineColorMaximumDistance", ::WaveHarmonic::Crest::ColorLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ColorLod_ShaderIDs::setStaticF_s_ShorelineColorFalloff(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ShorelineColorFalloff", ::WaveHarmonic::Crest::ColorLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ColorLod_ShaderIDs::getStaticF_s_ShorelineColorFalloff()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShorelineColorFalloff", ::WaveHarmonic::Crest::ColorLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ColorLod_ShaderIDs::ColorLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)()>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Enabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182563700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)()>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_IsCompute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)()>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Queue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182537df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)()>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)()>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Rect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1821aa7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)()>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)(::WaveHarmonic::Crest::ColorLod*)>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::ColorLod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::Draw)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1825633c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::ColorLod*& WaveHarmonic::Crest::ColorLod_ShorelineColorInput::__cordl_internal_get__VolumeColorLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeColorLod;
}
constexpr ::WaveHarmonic::Crest::ColorLod* const& WaveHarmonic::Crest::ColorLod_ShorelineColorInput::__cordl_internal_get__VolumeColorLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeColorLod;
}
constexpr void WaveHarmonic::Crest::ColorLod_ShorelineColorInput::__cordl_internal_set__VolumeColorLod(::WaveHarmonic::Crest::ColorLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VolumeColorLod = value;
}
inline bool WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::ColorLod_ShorelineColorInput::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ColorLod_ShorelineColorInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::ColorLod_ShorelineColorInput::_ctor(::WaveHarmonic::Crest::ColorLod*  lod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::ColorLod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod);
}
inline void WaveHarmonic::Crest::ColorLod_ShorelineColorInput::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slices);
}
inline ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput* WaveHarmonic::Crest::ColorLod_ShorelineColorInput::New_ctor(::WaveHarmonic::Crest::ColorLod*  lod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*>(lod));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::ColorLod_ShorelineColorInput::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::ColorLod_ShorelineColorInput::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput::ColorLod_ShorelineColorInput()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.get_GlobalShaderID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::get_GlobalShaderID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.SetShorelineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::WaveHarmonic::Crest::ColorLod::SetShorelineColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.get_SkipEndOfFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::get_SkipEndOfFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182553a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::Enable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1825538c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.SetGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)(bool)>(&::WaveHarmonic::Crest::ColorLod::SetGlobals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825539b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::Disable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182553870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.get_ShorelineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::get_ShorelineColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822b4ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.set_ShorelineColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)(::UnityEngine::Color)>(&::WaveHarmonic::Crest::ColorLod::set_ShorelineColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182553b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.get_ShorelineColorFalloff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::get_ShorelineColorFalloff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d39c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColorFalloff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.set_ShorelineColorFalloff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)(float_t)>(&::WaveHarmonic::Crest::ColorLod::set_ShorelineColorFalloff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d3a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColorFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.get_ShorelineColorMaximumDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::get_ShorelineColorMaximumDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18033c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColorMaximumDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.set_ShorelineColorMaximumDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)(float_t)>(&::WaveHarmonic::Crest::ColorLod::set_ShorelineColorMaximumDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182553b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColorMaximumDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.get_ShorelineColorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ShorelineVolumeColorSource (::WaveHarmonic::Crest::ColorLod::*)()>(&::WaveHarmonic::Crest::ColorLod::get_ShorelineColorSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180408b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColorSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ColorLod.set_ShorelineColorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ColorLod::*)(::WaveHarmonic::Crest::ShorelineVolumeColorSource)>(&::WaveHarmonic::Crest::ColorLod::set_ShorelineColorSource)> {
  constexpr static std::size_t size = 0x2630;
  constexpr static std::size_t addrs = 0x180b9feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColorSource", {}, {::i2c::type_of<::WaveHarmonic::Crest::ShorelineVolumeColorSource>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorSource;
}
constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource const& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorSource;
}
constexpr void WaveHarmonic::Crest::ColorLod::__cordl_internal_set__ShorelineColorSource(::WaveHarmonic::Crest::ShorelineVolumeColorSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColorSource = value;
}
constexpr ::UnityEngine::Color& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColor;
}
constexpr ::UnityEngine::Color const& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColor;
}
constexpr void WaveHarmonic::Crest::ColorLod::__cordl_internal_set__ShorelineColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColor = value;
}
constexpr float_t& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorMaximumDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorMaximumDistance;
}
constexpr float_t const& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorMaximumDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorMaximumDistance;
}
constexpr void WaveHarmonic::Crest::ColorLod::__cordl_internal_set__ShorelineColorMaximumDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColorMaximumDistance = value;
}
constexpr float_t& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorFalloff;
}
constexpr float_t const& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorFalloff;
}
constexpr void WaveHarmonic::Crest::ColorLod::__cordl_internal_set__ShorelineColorFalloff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColorFalloff = value;
}
constexpr ::UnityEngine::Vector4& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorValue;
}
constexpr ::UnityEngine::Vector4 const& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorValue;
}
constexpr void WaveHarmonic::Crest::ColorLod::__cordl_internal_set__ShorelineColorValue(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColorValue = value;
}
constexpr ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorInput;
}
constexpr ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput* const& WaveHarmonic::Crest::ColorLod::__cordl_internal_get__ShorelineColorInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineColorInput;
}
constexpr void WaveHarmonic::Crest::ColorLod::__cordl_internal_set__ShorelineColorInput(::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineColorInput = value;
}
inline int32_t WaveHarmonic::Crest::ColorLod::get_GlobalShaderID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::SetShorelineColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::ColorLod::get_SkipEndOfFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::ColorLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::SetGlobals(bool  enable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void WaveHarmonic::Crest::ColorLod::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ColorLod::get_ShorelineColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::set_ShorelineColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ColorLod::get_ShorelineColorFalloff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColorFalloff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::set_ShorelineColorFalloff(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColorFalloff", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ColorLod::get_ShorelineColorMaximumDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColorMaximumDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::set_ShorelineColorMaximumDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColorMaximumDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ShorelineVolumeColorSource WaveHarmonic::Crest::ColorLod::get_ShorelineColorSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"get_ShorelineColorSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ShorelineVolumeColorSource>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ColorLod::set_ShorelineColorSource(::WaveHarmonic::Crest::ShorelineVolumeColorSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ColorLod*>(),
                        {"set_ShorelineColorSource", {}, {::i2c::type_of<::WaveHarmonic::Crest::ShorelineVolumeColorSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ColorLod* WaveHarmonic::Crest::ColorLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ColorLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ColorLod::ColorLod()   {
}
