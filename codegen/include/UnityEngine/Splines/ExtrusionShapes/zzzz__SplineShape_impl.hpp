#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/SplineShape.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__SplineShape_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__SplineShape_def.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis::SplineShape_Axis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis::SplineShape_Axis()   {
}
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis  UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis::X{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis  UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis::Y{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis  UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis::Z{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.get_SideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)()>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::get_SideCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_SideCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.set_SideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)(int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::set_SideCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"set_SideCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.get_SplineContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)()>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::get_SplineContainer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_SplineContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.set_SplineContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)(::UnityEngine::Splines::SplineContainer*)>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::set_SplineContainer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"set_SplineContainer", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.get_SplineIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)()>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::get_SplineIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_SplineIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.set_SplineIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)(int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::set_SplineIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181de6a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"set_SplineIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.get_Spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)()>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::get_Spline)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18217ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_Spline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)(float_t, int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::GetPosition)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18217cd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::SplineShape._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::SplineShape::*)()>(&::UnityEngine::Splines::ExtrusionShapes::SplineShape::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18217ce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_Template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Template;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_Template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Template;
}
constexpr void UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_set_m_Template(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Template = value;
}
constexpr int32_t& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_SplineIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineIndex;
}
constexpr int32_t const& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_SplineIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineIndex;
}
constexpr void UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_set_m_SplineIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplineIndex = value;
}
constexpr int32_t& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_SideCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SideCount;
}
constexpr int32_t const& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_SideCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SideCount;
}
constexpr void UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_set_m_SideCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SideCount = value;
}
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_Axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis;
}
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis const& UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_get_m_Axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis;
}
constexpr void UnityEngine::Splines::ExtrusionShapes::SplineShape::__cordl_internal_set_m_Axis(::UnityEngine::Splines::ExtrusionShapes::SplineShape_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Axis = value;
}
inline int32_t UnityEngine::Splines::ExtrusionShapes::SplineShape::get_SideCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_SideCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::ExtrusionShapes::SplineShape::set_SideCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"set_SideCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::ExtrusionShapes::SplineShape::get_SplineContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_SplineContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline void UnityEngine::Splines::ExtrusionShapes::SplineShape::set_SplineContainer(::UnityEngine::Splines::SplineContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"set_SplineContainer", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Splines::ExtrusionShapes::SplineShape::get_SplineIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_SplineIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::ExtrusionShapes::SplineShape::set_SplineIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"set_SplineIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::ExtrusionShapes::SplineShape::get_Spline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"get_Spline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(this, ___internal_method);
}
inline ::Unity::Mathematics::float2 UnityEngine::Splines::ExtrusionShapes::SplineShape::GetPosition(float_t  t, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(this, ___internal_method, t, index);
}
inline void UnityEngine::Splines::ExtrusionShapes::SplineShape::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::ExtrusionShapes::SplineShape* UnityEngine::Splines::ExtrusionShapes::SplineShape::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::ExtrusionShapes::SplineShape*>());
}
/// @brief Convert operator to "::UnityEngine::Splines::IExtrudeShape"
constexpr  UnityEngine::Splines::ExtrusionShapes::SplineShape::operator ::UnityEngine::Splines::IExtrudeShape*() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::IExtrudeShape"
constexpr ::UnityEngine::Splines::IExtrudeShape* UnityEngine::Splines::ExtrusionShapes::SplineShape::i___UnityEngine__Splines__IExtrudeShape() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::ExtrusionShapes::SplineShape::SplineShape()   {
}
