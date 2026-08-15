#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WatertightHull.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WatertightHullMode_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WatertightHull_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WatertightHullMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WatertightHull_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull_DebugFields::*)()>(&::WaveHarmonic::Crest::WatertightHull_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::WatertightHull_DebugFields::__cordl_internal_get__DrawBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawBounds;
}
constexpr bool const& WaveHarmonic::Crest::WatertightHull_DebugFields::__cordl_internal_get__DrawBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawBounds;
}
constexpr void WaveHarmonic::Crest::WatertightHull_DebugFields::__cordl_internal_set__DrawBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawBounds = value;
}
inline void WaveHarmonic::Crest::WatertightHull_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WatertightHull_DebugFields* WaveHarmonic::Crest::WatertightHull_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WatertightHull_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WatertightHull_DebugFields::WatertightHull_DebugFields()   {
}
inline void WaveHarmonic::Crest::WatertightHull_ShaderIDs::setStaticF_s_Inverted(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Inverted", ::WaveHarmonic::Crest::WatertightHull_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::WatertightHull_ShaderIDs::getStaticF_s_Inverted()  {
return ::cordl_internals::getStaticField<int32_t, "s_Inverted", ::WaveHarmonic::Crest::WatertightHull_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WatertightHull_ShaderIDs::WatertightHull_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)(::WaveHarmonic::Crest::WatertightHull*)>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::get_Enabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182571230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::get_IsCompute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::get_Queue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182559cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::get_Rect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182571270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_ClipInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull_ClipInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::WatertightHull_ClipInput::Draw)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182571160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull>& WaveHarmonic::Crest::WatertightHull_ClipInput::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull> const& WaveHarmonic::Crest::WatertightHull_ClipInput::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::WatertightHull_ClipInput::__cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::WatertightHull>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline void WaveHarmonic::Crest::WatertightHull_ClipInput::_ctor(::WaveHarmonic::Crest::WatertightHull*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline bool WaveHarmonic::Crest::WatertightHull_ClipInput::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WatertightHull_ClipInput::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WatertightHull_ClipInput::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WatertightHull_ClipInput::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::WatertightHull_ClipInput::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::WatertightHull_ClipInput::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WatertightHull_ClipInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::WatertightHull_ClipInput::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slice);
}
inline ::WaveHarmonic::Crest::WatertightHull_ClipInput* WaveHarmonic::Crest::WatertightHull_ClipInput::New_ctor(::WaveHarmonic::Crest::WatertightHull*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WatertightHull_ClipInput*>(input));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::WatertightHull_ClipInput::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::WatertightHull_ClipInput::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WatertightHull_ClipInput::WatertightHull_ClipInput()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)(::WaveHarmonic::Crest::WatertightHull*)>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Enabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182571230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_IsCompute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Queue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182559cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Rect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182571270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)()>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull_DisplacementInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull_DisplacementInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::WatertightHull_DisplacementInput::Draw)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1825750c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull>& WaveHarmonic::Crest::WatertightHull_DisplacementInput::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WatertightHull> const& WaveHarmonic::Crest::WatertightHull_DisplacementInput::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::WatertightHull_DisplacementInput::__cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::WatertightHull>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline void WaveHarmonic::Crest::WatertightHull_DisplacementInput::_ctor(::WaveHarmonic::Crest::WatertightHull*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline bool WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::WatertightHull_DisplacementInput::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::WatertightHull_DisplacementInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::WatertightHull_DisplacementInput::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slice);
}
inline ::WaveHarmonic::Crest::WatertightHull_DisplacementInput* WaveHarmonic::Crest::WatertightHull_DisplacementInput::New_ctor(::WaveHarmonic::Crest::WatertightHull*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WatertightHull_DisplacementInput*>(input));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::WatertightHull_DisplacementInput::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::WatertightHull_DisplacementInput::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WatertightHull_DisplacementInput::WatertightHull_DisplacementInput()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_Enabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182588cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_Rect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182588d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_UsesClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_UsesClip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_UsesClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_UsesDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_UsesDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_UsesDisplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::Initialize)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x182588680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825888b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182588d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::WatertightHull::OnUpdate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182588980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_OnLateUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_OnLateUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182588d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::WatertightHull::OnLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182555b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.DrawClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::WatertightHull::DrawClip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825884b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"DrawClip", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.DrawDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::WatertightHull::DrawDisplacement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182588570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"DrawDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.SetQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::WatertightHull::SetQueue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182588af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"SetQueue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.SetMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(::WaveHarmonic::Crest::WatertightHullMode, ::WaveHarmonic::Crest::WatertightHullMode)>(&::WaveHarmonic::Crest::WatertightHull::SetMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182588ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"SetMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHullMode>(), ::i2c::type_of<::WaveHarmonic::Crest::WatertightHullMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.SetUseClipWithDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(bool, bool)>(&::WaveHarmonic::Crest::WatertightHull::SetUseClipWithDisplacement)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182588bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"SetUseClipWithDisplacement", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182550980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::OnMigrate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182588970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_Inverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_Inverted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Inverted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.set_Inverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(bool)>(&::WaveHarmonic::Crest::WatertightHull::set_Inverted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ac420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Inverted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_Mesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_Mesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Mesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.set_Mesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(::UnityEngine::Mesh*)>(&::WaveHarmonic::Crest::WatertightHull::set_Mesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Mesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WatertightHullMode (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.set_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(::WaveHarmonic::Crest::WatertightHullMode)>(&::WaveHarmonic::Crest::WatertightHull::set_Mode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182588e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Mode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHullMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_Queue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.set_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(int32_t)>(&::WaveHarmonic::Crest::WatertightHull::set_Queue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182588ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Queue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.get_UseClipWithDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::get_UseClipWithDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815f5410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_UseClipWithDisplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull.set_UseClipWithDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)(bool)>(&::WaveHarmonic::Crest::WatertightHull::set_UseClipWithDisplacement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182588fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_UseClipWithDisplacement", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WatertightHull._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WatertightHull::*)()>(&::WaveHarmonic::Crest::WatertightHull::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182588c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mesh;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mesh = value;
}
constexpr int32_t& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queue;
}
constexpr int32_t const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queue;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__Queue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Queue = value;
}
constexpr ::WaveHarmonic::Crest::WatertightHullMode& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr ::WaveHarmonic::Crest::WatertightHullMode const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__Mode(::WaveHarmonic::Crest::WatertightHullMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mode = value;
}
constexpr bool& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Inverted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Inverted;
}
constexpr bool const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Inverted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Inverted;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__Inverted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Inverted = value;
}
constexpr bool& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__UseClipWithDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseClipWithDisplacement;
}
constexpr bool const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__UseClipWithDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseClipWithDisplacement;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__UseClipWithDisplacement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseClipWithDisplacement = value;
}
constexpr ::WaveHarmonic::Crest::WatertightHull_DebugFields*& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::WatertightHull_DebugFields* const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__Debug(::WaveHarmonic::Crest::WatertightHull_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__ClipMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__ClipMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipMaterial;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__ClipMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__AnimatedWavesMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__AnimatedWavesMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesMaterial;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__AnimatedWavesMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimatedWavesMaterial = value;
}
constexpr bool& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__RecalculateBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr bool const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__RecalculateBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__RecalculateBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecalculateBounds = value;
}
constexpr ::UnityEngine::Rect& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr ::UnityEngine::Rect const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__Rect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rect = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__SampleCollisionHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleCollisionHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__SampleCollisionHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleCollisionHelper;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__SampleCollisionHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleCollisionHelper = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Displacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__Displacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__Displacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Displacement = value;
}
constexpr ::WaveHarmonic::Crest::WatertightHull_ClipInput*& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__ClipInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipInput;
}
constexpr ::WaveHarmonic::Crest::WatertightHull_ClipInput* const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__ClipInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipInput;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__ClipInput(::WaveHarmonic::Crest::WatertightHull_ClipInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipInput = value;
}
constexpr ::WaveHarmonic::Crest::WatertightHull_DisplacementInput*& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__AnimatedWavesInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesInput;
}
constexpr ::WaveHarmonic::Crest::WatertightHull_DisplacementInput* const& WaveHarmonic::Crest::WatertightHull::__cordl_internal_get__AnimatedWavesInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWavesInput;
}
constexpr void WaveHarmonic::Crest::WatertightHull::__cordl_internal_set__AnimatedWavesInput(::WaveHarmonic::Crest::WatertightHull_DisplacementInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimatedWavesInput = value;
}
inline bool WaveHarmonic::Crest::WatertightHull::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::WatertightHull::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WatertightHull::get_UsesClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_UsesClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WatertightHull::get_UsesDisplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_UsesDisplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::WatertightHull::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::WatertightHull::get_OnLateUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::WatertightHull::DrawClip(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"DrawClip", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slice);
}
inline void WaveHarmonic::Crest::WatertightHull::DrawDisplacement(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"DrawDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slice);
}
inline void WaveHarmonic::Crest::WatertightHull::SetQueue(int32_t  previous, int32_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"SetQueue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WatertightHull::SetMode(::WaveHarmonic::Crest::WatertightHullMode  previous, ::WaveHarmonic::Crest::WatertightHullMode  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"SetMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHullMode>(), ::i2c::type_of<::WaveHarmonic::Crest::WatertightHullMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WatertightHull::SetUseClipWithDisplacement(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"SetUseClipWithDisplacement", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline int32_t WaveHarmonic::Crest::WatertightHull::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WatertightHull::get_Inverted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Inverted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::set_Inverted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Inverted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> WaveHarmonic::Crest::WatertightHull::get_Mesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Mesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::set_Mesh(::UnityEngine::Mesh*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Mesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WatertightHullMode WaveHarmonic::Crest::WatertightHull::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WatertightHullMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::set_Mode(::WaveHarmonic::Crest::WatertightHullMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Mode", {}, {::i2c::type_of<::WaveHarmonic::Crest::WatertightHullMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::WatertightHull::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::set_Queue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_Queue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WatertightHull::get_UseClipWithDisplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"get_UseClipWithDisplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WatertightHull::set_UseClipWithDisplacement(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {"set_UseClipWithDisplacement", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WatertightHull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WatertightHull*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WatertightHull* WaveHarmonic::Crest::WatertightHull::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WatertightHull*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WatertightHull::WatertightHull()   {
}
