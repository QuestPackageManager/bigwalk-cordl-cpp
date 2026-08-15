#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthLodInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthLodInput_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthLodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
inline void WaveHarmonic::Crest::DepthLodInput_ShaderIDs::setStaticF_s_HeightOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_HeightOffset", ::WaveHarmonic::Crest::DepthLodInput_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthLodInput_ShaderIDs::getStaticF_s_HeightOffset()  {
return ::cordl_internals::getStaticField<int32_t, "s_HeightOffset", ::WaveHarmonic::Crest::DepthLodInput_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthLodInput_ShaderIDs::setStaticF_s_SDF(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SDF", ::WaveHarmonic::Crest::DepthLodInput_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthLodInput_ShaderIDs::getStaticF_s_SDF()  {
return ::cordl_internals::getStaticField<int32_t, "s_SDF", ::WaveHarmonic::Crest::DepthLodInput_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthLodInput_ShaderIDs::DepthLodInput_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.get_DefaultMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::DepthLodInput::*)()>(&::WaveHarmonic::Crest::DepthLodInput::get_DefaultMode)> {
  constexpr static std::size_t size = 0x28d50;
  constexpr static std::size_t addrs = 0x180feb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.InferBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLodInput::*)()>(&::WaveHarmonic::Crest::DepthLodInput::InferBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c9c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLodInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::DepthLodInput::Draw)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x182553be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::DepthLodInput::*)()>(&::WaveHarmonic::Crest::DepthLodInput::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::DepthLodInput::*)()>(&::WaveHarmonic::Crest::DepthLodInput::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.get_CopySignedDistanceField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthLodInput::*)()>(&::WaveHarmonic::Crest::DepthLodInput::get_CopySignedDistanceField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f13b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"get_CopySignedDistanceField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.set_CopySignedDistanceField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLodInput::*)(bool)>(&::WaveHarmonic::Crest::DepthLodInput::set_CopySignedDistanceField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f1450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"set_CopySignedDistanceField", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.get_Relative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthLodInput::*)()>(&::WaveHarmonic::Crest::DepthLodInput::get_Relative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"get_Relative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput.set_Relative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLodInput::*)(bool)>(&::WaveHarmonic::Crest::DepthLodInput::set_Relative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"set_Relative", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLodInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLodInput::*)()>(&::WaveHarmonic::Crest::DepthLodInput::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182553e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::DepthLodInput::__cordl_internal_get__Relative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Relative;
}
constexpr bool const& WaveHarmonic::Crest::DepthLodInput::__cordl_internal_get__Relative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Relative;
}
constexpr void WaveHarmonic::Crest::DepthLodInput::__cordl_internal_set__Relative(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Relative = value;
}
constexpr bool& WaveHarmonic::Crest::DepthLodInput::__cordl_internal_get__CopySignedDistanceField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopySignedDistanceField;
}
constexpr bool const& WaveHarmonic::Crest::DepthLodInput::__cordl_internal_get__CopySignedDistanceField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopySignedDistanceField;
}
constexpr void WaveHarmonic::Crest::DepthLodInput::__cordl_internal_set__CopySignedDistanceField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopySignedDistanceField = value;
}
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::DepthLodInput::get_DefaultMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLodInput::InferBlend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLodInput::Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slice);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DepthLodInput::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::DepthLodInput::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DepthLodInput::get_CopySignedDistanceField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"get_CopySignedDistanceField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLodInput::set_CopySignedDistanceField(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"set_CopySignedDistanceField", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthLodInput::get_Relative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"get_Relative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLodInput::set_Relative(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {"set_Relative", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::DepthLodInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLodInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DepthLodInput* WaveHarmonic::Crest::DepthLodInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DepthLodInput*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthLodInput::DepthLodInput()   {
}
