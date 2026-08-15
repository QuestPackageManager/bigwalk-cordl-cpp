#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterBody.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyAffects_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyExclusion_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBody_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyAffects_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyExclusion_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBody_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody_ClipInput::*)()>(&::WaveHarmonic::Crest::WaterBody_ClipInput::get_Enabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18258aea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody_ClipInput::*)()>(&::WaveHarmonic::Crest::WaterBody_ClipInput::get_IsCompute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterBody_ClipInput::*)()>(&::WaveHarmonic::Crest::WaterBody_ClipInput::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::WaterBody_ClipInput::*)()>(&::WaveHarmonic::Crest::WaterBody_ClipInput::get_Queue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::WaterBody_ClipInput::*)()>(&::WaveHarmonic::Crest::WaterBody_ClipInput::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::WaterBody_ClipInput::*)()>(&::WaveHarmonic::Crest::WaterBody_ClipInput::get_Rect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18258aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody_ClipInput::*)(::WaveHarmonic::Crest::WaterBody*)>(&::WaveHarmonic::Crest::WaterBody_ClipInput::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18258ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody_ClipInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::WaterBody_ClipInput::Draw)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x18258a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody_ClipInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaterBody_ClipInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::WaterBody_ClipInput::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody>& WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_get__Owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody> const& WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_get__Owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner;
}
constexpr void WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_set__Owner(::UnityW<::WaveHarmonic::Crest::WaterBody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Owner = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_get__Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_get__Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transform;
}
constexpr void WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_set__Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Transform = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_get__Queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queue;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_get__Queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queue;
}
constexpr void WaveHarmonic::Crest::WaterBody_ClipInput::__cordl_internal_set__Queue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Queue = value;
}
inline bool WaveHarmonic::Crest::WaterBody_ClipInput::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterBody_ClipInput::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WaterBody_ClipInput::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::WaterBody_ClipInput::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::WaterBody_ClipInput::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::WaterBody_ClipInput::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody_ClipInput::_ctor(::WaveHarmonic::Crest::WaterBody*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void WaveHarmonic::Crest::WaterBody_ClipInput::Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slices);
}
inline float_t WaveHarmonic::Crest::WaterBody_ClipInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody_ClipInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline ::WaveHarmonic::Crest::WaterBody_ClipInput* WaveHarmonic::Crest::WaterBody_ClipInput::New_ctor(::WaveHarmonic::Crest::WaterBody*  owner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterBody_ClipInput*>(owner));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::WaterBody_ClipInput::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::WaterBody_ClipInput::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterBody_ClipInput::WaterBody_ClipInput()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_AboveSurfaceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_AboveSurfaceMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_AboveSurfaceMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_AboveSurfaceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterBody::set_AboveSurfaceMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d49a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_AboveSurfaceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_Affects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterBodyAffects (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_Affects)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Affects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_Affects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::WaveHarmonic::Crest::WaterBodyAffects)>(&::WaveHarmonic::Crest::WaterBody::set_Affects)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182599440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Affects", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_BelowSurfaceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_BelowSurfaceMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_BelowSurfaceMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_BelowSurfaceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterBody::set_BelowSurfaceMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_BelowSurfaceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_Conservative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_Conservative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Conservative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_Conservative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool)>(&::WaveHarmonic::Crest::WaterBody::set_Conservative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Conservative", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_Exclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaterBodyExclusion (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_Exclusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Exclusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_Exclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::WaveHarmonic::Crest::WaterBodyExclusion)>(&::WaveHarmonic::Crest::WaterBody::set_Exclusion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182599480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Exclusion", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_OverrideMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_OverrideMaterials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_OverrideMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_OverrideMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool)>(&::WaveHarmonic::Crest::WaterBody::set_OverrideMaterials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_OverrideMaterials", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_Precise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_Precise)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d20b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Precise", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_Precise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool)>(&::WaveHarmonic::Crest::WaterBody::set_Precise)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825994c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Precise", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_Vertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_Vertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Vertical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_Vertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool)>(&::WaveHarmonic::Crest::WaterBody::set_Vertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182599500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Vertical", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_VolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_VolumeMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_VolumeMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_VolumeMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::UnityEngine::Material*)>(&::WaveHarmonic::Crest::WaterBody::set_VolumeMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_VolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_WaterBodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>* (*)()>(&::WaveHarmonic::Crest::WaterBody::get_WaterBodies)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182571120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_WaterBodies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_SortedWaterBodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>* (*)()>(&::WaveHarmonic::Crest::WaterBody::get_SortedWaterBodies)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182588ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_SortedWaterBodies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_AABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_AABB)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182599290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_AABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_Rect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182599390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_AboveOrBelowSurfaceMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_AboveOrBelowSurfaceMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825992e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_AboveOrBelowSurfaceMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_RequiresClipInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_RequiresClipInput)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182599410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_RequiresClipInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::Initialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182598d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182598e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.CalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::CalculateBounds)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x182598170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"CalculateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.HandleClipInputRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool)>(&::WaveHarmonic::Crest::WaterBody::HandleClipInputRegistration)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x182598af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"HandleClipInputRegistration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182599350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::WaterBody::OnUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182598f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_OnLateUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_OnLateUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182599310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::WaterBody::OnLateUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182598ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.IsBetterMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::WaveHarmonic::Crest::WaterBody*, ::WaveHarmonic::Crest::WaterBody*)>(&::WaveHarmonic::Crest::WaterBody::IsBetterMatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182598dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"IsBetterMatch", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBody*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::WaterBody::Contains)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182598a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.UpdateClipSurfaceRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::WaterBody::UpdateClipSurfaceRegistration)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x182599010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"UpdateClipSurfaceRegistration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.SetVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterBody::SetVertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182599000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetVertical", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.SetPrecise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool, bool)>(&::WaveHarmonic::Crest::WaterBody::SetPrecise)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182598fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetPrecise", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.SetAffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::WaveHarmonic::Crest::WaterBodyAffects, ::WaveHarmonic::Crest::WaterBodyAffects)>(&::WaveHarmonic::Crest::WaterBody::SetAffects)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182598fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetAffects", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.SetExclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(::WaveHarmonic::Crest::WaterBodyExclusion, ::WaveHarmonic::Crest::WaterBodyExclusion)>(&::WaveHarmonic::Crest::WaterBody::SetExclusion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182598fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetExclusion", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyExclusion>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterBodyExclusion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.get_Clipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::get_Clipped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d20b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Clipped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody.set_Clipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)(bool)>(&::WaveHarmonic::Crest::WaterBody::set_Clipped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820bdb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Clipped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterBody::*)()>(&::WaveHarmonic::Crest::WaterBody::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182599270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::WaterBodyAffects& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Affects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Affects;
}
constexpr ::WaveHarmonic::Crest::WaterBodyAffects const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Affects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Affects;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__Affects(::WaveHarmonic::Crest::WaterBodyAffects  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Affects = value;
}
constexpr bool& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Vertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Vertical;
}
constexpr bool const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Vertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Vertical;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__Vertical(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Vertical = value;
}
constexpr bool& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Precise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Precise;
}
constexpr bool const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Precise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Precise;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__Precise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Precise = value;
}
constexpr ::WaveHarmonic::Crest::WaterBodyExclusion& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Exclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exclusion;
}
constexpr ::WaveHarmonic::Crest::WaterBodyExclusion const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Exclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exclusion;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__Exclusion(::WaveHarmonic::Crest::WaterBodyExclusion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Exclusion = value;
}
constexpr bool& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Conservative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Conservative;
}
constexpr bool const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Conservative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Conservative;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__Conservative(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Conservative = value;
}
constexpr bool& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__OverrideMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideMaterials;
}
constexpr bool const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__OverrideMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideMaterials;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__OverrideMaterials(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideMaterials = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__AboveSurfaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AboveSurfaceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__AboveSurfaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AboveSurfaceMaterial;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__AboveSurfaceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AboveSurfaceMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__BelowSurfaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BelowSurfaceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__BelowSurfaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BelowSurfaceMaterial;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__BelowSurfaceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BelowSurfaceMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__VolumeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__VolumeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeMaterial;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VolumeMaterial = value;
}
constexpr bool& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__RecalculateRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateRect;
}
constexpr bool const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__RecalculateRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateRect;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__RecalculateRect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecalculateRect = value;
}
constexpr bool& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__RecalculateBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr bool const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__RecalculateBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__RecalculateBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecalculateBounds = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__BoundsArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoundsArea;
}
constexpr float_t const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__BoundsArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoundsArea;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__BoundsArea(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BoundsArea = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__BoundsVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoundsVolume;
}
constexpr float_t const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__BoundsVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoundsVolume;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__BoundsVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BoundsVolume = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__MotionVectorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MotionVectorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__MotionVectorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MotionVectorMaterial;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__MotionVectorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MotionVectorMaterial = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__SortedIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortedIndex;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__SortedIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortedIndex;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__SortedIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SortedIndex = value;
}
constexpr ::UnityEngine::Bounds& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bounds;
}
constexpr ::UnityEngine::Bounds const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bounds;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__Bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bounds = value;
}
constexpr ::UnityEngine::Rect& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr ::UnityEngine::Rect const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__Rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__Rect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rect = value;
}
constexpr ::WaveHarmonic::Crest::WaterBody_ClipInput*& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__ClipInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipInput;
}
constexpr ::WaveHarmonic::Crest::WaterBody_ClipInput* const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__ClipInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipInput;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__ClipInput(::WaveHarmonic::Crest::WaterBody_ClipInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipInput = value;
}
constexpr bool& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__ForceClipInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceClipInput;
}
constexpr bool const& WaveHarmonic::Crest::WaterBody::__cordl_internal_get__ForceClipInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceClipInput;
}
constexpr void WaveHarmonic::Crest::WaterBody::__cordl_internal_set__ForceClipInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceClipInput = value;
}
inline void WaveHarmonic::Crest::WaterBody::setStaticF__WaterBodies_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>*, "<WaterBodies>k__BackingField", ::WaveHarmonic::Crest::WaterBody*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>* WaveHarmonic::Crest::WaterBody::getStaticF__WaterBodies_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>*, "<WaterBodies>k__BackingField", ::WaveHarmonic::Crest::WaterBody*>();
}
inline void WaveHarmonic::Crest::WaterBody::setStaticF__SortedWaterBodies_k__BackingField(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>*, "<SortedWaterBodies>k__BackingField", ::WaveHarmonic::Crest::WaterBody*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>* WaveHarmonic::Crest::WaterBody::getStaticF__SortedWaterBodies_k__BackingField()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>*, "<SortedWaterBodies>k__BackingField", ::WaveHarmonic::Crest::WaterBody*>();
}
inline void WaveHarmonic::Crest::WaterBody::setStaticF_s_ClipSurfaceRegistrationNeedsUpdating(bool  value)  {
::cordl_internals::setStaticField<bool, "s_ClipSurfaceRegistrationNeedsUpdating", ::WaveHarmonic::Crest::WaterBody*>(std::forward<bool>(value));
}
inline bool WaveHarmonic::Crest::WaterBody::getStaticF_s_ClipSurfaceRegistrationNeedsUpdating()  {
return ::cordl_internals::getStaticField<bool, "s_ClipSurfaceRegistrationNeedsUpdating", ::WaveHarmonic::Crest::WaterBody*>();
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterBody::get_AboveSurfaceMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_AboveSurfaceMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_AboveSurfaceMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_AboveSurfaceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterBodyAffects WaveHarmonic::Crest::WaterBody::get_Affects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Affects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterBodyAffects>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_Affects(::WaveHarmonic::Crest::WaterBodyAffects  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Affects", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterBody::get_BelowSurfaceMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_BelowSurfaceMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_BelowSurfaceMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_BelowSurfaceMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterBody::get_Conservative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Conservative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_Conservative(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Conservative", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaterBodyExclusion WaveHarmonic::Crest::WaterBody::get_Exclusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Exclusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaterBodyExclusion>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_Exclusion(::WaveHarmonic::Crest::WaterBodyExclusion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Exclusion", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterBody::get_OverrideMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_OverrideMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_OverrideMaterials(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_OverrideMaterials", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterBody::get_Precise()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Precise", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_Precise(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Precise", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::WaterBody::get_Vertical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Vertical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_Vertical(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Vertical", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterBody::get_VolumeMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_VolumeMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_VolumeMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_VolumeMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>* WaveHarmonic::Crest::WaterBody::get_WaterBodies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_WaterBodies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterBody>>*>(nullptr, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>* WaveHarmonic::Crest::WaterBody::get_SortedWaterBodies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_SortedWaterBodies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::WaterBody>>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Bounds WaveHarmonic::Crest::WaterBody::get_AABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_AABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::WaterBody::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> WaveHarmonic::Crest::WaterBody::get_AboveOrBelowSurfaceMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_AboveOrBelowSurfaceMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterBody::get_RequiresClipInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_RequiresClipInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::CalculateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"CalculateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::HandleClipInputRegistration(bool  disable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"HandleClipInputRegistration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disable);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::WaterBody::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::WaterBody::get_OnLateUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline bool WaveHarmonic::Crest::WaterBody::IsBetterMatch(::WaveHarmonic::Crest::WaterBody*  newBody, ::WaveHarmonic::Crest::WaterBody*  oldBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"IsBetterMatch", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBody*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newBody, oldBody);
}
inline bool WaveHarmonic::Crest::WaterBody::Contains(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void WaveHarmonic::Crest::WaterBody::UpdateClipSurfaceRegistration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"UpdateClipSurfaceRegistration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::SetVertical(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetVertical", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WaterBody::SetPrecise(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetPrecise", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WaterBody::SetAffects(::WaveHarmonic::Crest::WaterBodyAffects  previous, ::WaveHarmonic::Crest::WaterBodyAffects  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetAffects", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterBodyAffects>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::WaterBody::SetExclusion(::WaveHarmonic::Crest::WaterBodyExclusion  previous, ::WaveHarmonic::Crest::WaterBodyExclusion  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"SetExclusion", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterBodyExclusion>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterBodyExclusion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::WaterBody::get_Clipped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"get_Clipped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterBody::set_Clipped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {"set_Clipped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterBody* WaveHarmonic::Crest::WaterBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterBody*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterBody::WaterBody()   {
}
