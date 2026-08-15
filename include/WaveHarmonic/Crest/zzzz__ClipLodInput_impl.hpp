#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ClipLodInput.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputPrimitive_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ClipLodInput_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputPrimitive_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_DefaultMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_DefaultMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180309580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_FollowHorizontalMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_FollowHorizontalMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_PrimitiveShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_PrimitiveShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182553340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_PrimitiveShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_KeywordInverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_KeywordInverted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825531c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordInverted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_KeywordSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_KeywordSphere)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825532c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordSphere", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_KeywordCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_KeywordCube)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182553140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordCube", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_KeywordRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LocalKeyword (*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_KeywordRectangle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182553240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordRectangle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.InferBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::InferBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c9c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_Enabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182553020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_Rect)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1825533b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLodInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::ClipLodInput::Draw)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x182552820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLodInput::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ClipLodInput::OnUpdate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x182552d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825530c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_Inverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_Inverted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825508f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_Inverted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.set_Inverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLodInput::*)(bool)>(&::WaveHarmonic::Crest::ClipLodInput::set_Inverted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825509a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"set_Inverted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_Primitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputPrimitive (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_Primitive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_Primitive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.set_Primitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLodInput::*)(::WaveHarmonic::Crest::LodInputPrimitive)>(&::WaveHarmonic::Crest::ClipLodInput::set_Primitive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"set_Primitive", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInputPrimitive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.get_WaterHeightDistanceCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::get_WaterHeightDistanceCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182553550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_WaterHeightDistanceCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput.set_WaterHeightDistanceCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLodInput::*)(bool)>(&::WaveHarmonic::Crest::ClipLodInput::set_WaterHeightDistanceCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182553560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"set_WaterHeightDistanceCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLodInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLodInput::*)()>(&::WaveHarmonic::Crest::ClipLodInput::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182552f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::LodInputPrimitive& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Primitive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Primitive;
}
constexpr ::WaveHarmonic::Crest::LodInputPrimitive const& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Primitive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Primitive;
}
constexpr void WaveHarmonic::Crest::ClipLodInput::__cordl_internal_set__Primitive(::WaveHarmonic::Crest::LodInputPrimitive  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Primitive = value;
}
constexpr bool& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Inverted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Inverted;
}
constexpr bool const& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Inverted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Inverted;
}
constexpr void WaveHarmonic::Crest::ClipLodInput::__cordl_internal_set__Inverted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Inverted = value;
}
constexpr bool& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__WaterHeightDistanceCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterHeightDistanceCulling;
}
constexpr bool const& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__WaterHeightDistanceCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterHeightDistanceCulling;
}
constexpr void WaveHarmonic::Crest::ClipLodInput::__cordl_internal_set__WaterHeightDistanceCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterHeightDistanceCulling = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__SampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__SampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr void WaveHarmonic::Crest::ClipLodInput::__cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleHeightHelper = value;
}
constexpr bool& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr bool const& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr void WaveHarmonic::Crest::ClipLodInput::__cordl_internal_set__Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled = value;
}
constexpr ::UnityEngine::Rect& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr ::UnityEngine::Rect const& WaveHarmonic::Crest::ClipLodInput::__cordl_internal_get__Rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr void WaveHarmonic::Crest::ClipLodInput::__cordl_internal_set__Rect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rect = value;
}
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::ClipLodInput::get_DefaultMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ClipLodInput::get_FollowHorizontalMotion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::ClipLodInput::get_PrimitiveShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_PrimitiveShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::ClipLodInput::get_KeywordInverted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordInverted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::ClipLodInput::get_KeywordSphere()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordSphere", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::ClipLodInput::get_KeywordCube()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordCube", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::LocalKeyword WaveHarmonic::Crest::ClipLodInput::get_KeywordRectangle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_KeywordRectangle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LocalKeyword>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLodInput::InferBlend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ClipLodInput::get_Enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::ClipLodInput::get_Rect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLodInput::Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slices);
}
inline void WaveHarmonic::Crest::ClipLodInput::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ClipLodInput::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ClipLodInput::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ClipLodInput::get_Inverted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_Inverted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLodInput::set_Inverted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"set_Inverted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::LodInputPrimitive WaveHarmonic::Crest::ClipLodInput::get_Primitive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_Primitive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputPrimitive>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLodInput::set_Primitive(::WaveHarmonic::Crest::LodInputPrimitive  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"set_Primitive", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInputPrimitive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ClipLodInput::get_WaterHeightDistanceCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"get_WaterHeightDistanceCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLodInput::set_WaterHeightDistanceCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {"set_WaterHeightDistanceCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::ClipLodInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLodInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ClipLodInput* WaveHarmonic::Crest::ClipLodInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ClipLodInput*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ClipLodInput::ClipLodInput()   {
}
