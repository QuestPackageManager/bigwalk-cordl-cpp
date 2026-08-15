#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/Circle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__Circle_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Circle.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::Circle::*)(::UnityEngine::Splines::ISpline*, int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::Circle::Setup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18217aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Circle.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::UnityEngine::Splines::ExtrusionShapes::Circle::*)(float_t, int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::Circle::GetPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18217aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Circle.get_SideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::ExtrusionShapes::Circle::*)()>(&::UnityEngine::Splines::ExtrusionShapes::Circle::get_SideCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"get_SideCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Circle.set_SideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::Circle::*)(int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::Circle::set_SideCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"set_SideCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Circle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::Circle::*)()>(&::UnityEngine::Splines::ExtrusionShapes::Circle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18217aaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Splines::ExtrusionShapes::Circle::__cordl_internal_get_m_Sides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sides;
}
constexpr int32_t const& UnityEngine::Splines::ExtrusionShapes::Circle::__cordl_internal_get_m_Sides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sides;
}
constexpr void UnityEngine::Splines::ExtrusionShapes::Circle::__cordl_internal_set_m_Sides(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sides = value;
}
constexpr float_t& UnityEngine::Splines::ExtrusionShapes::Circle::__cordl_internal_get_m_Rads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rads;
}
constexpr float_t const& UnityEngine::Splines::ExtrusionShapes::Circle::__cordl_internal_get_m_Rads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rads;
}
constexpr void UnityEngine::Splines::ExtrusionShapes::Circle::__cordl_internal_set_m_Rads(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rads = value;
}
inline void UnityEngine::Splines::ExtrusionShapes::Circle::Setup(::UnityEngine::Splines::ISpline*  path, int32_t  segmentCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Splines::ISpline*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, segmentCount);
}
inline ::Unity::Mathematics::float2 UnityEngine::Splines::ExtrusionShapes::Circle::GetPosition(float_t  t, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(this, ___internal_method, t, index);
}
inline int32_t UnityEngine::Splines::ExtrusionShapes::Circle::get_SideCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"get_SideCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::ExtrusionShapes::Circle::set_SideCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {"set_SideCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::ExtrusionShapes::Circle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Circle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::ExtrusionShapes::Circle* UnityEngine::Splines::ExtrusionShapes::Circle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::ExtrusionShapes::Circle*>());
}
/// @brief Convert operator to "::UnityEngine::Splines::IExtrudeShape"
constexpr  UnityEngine::Splines::ExtrusionShapes::Circle::operator ::UnityEngine::Splines::IExtrudeShape*() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::IExtrudeShape"
constexpr ::UnityEngine::Splines::IExtrudeShape* UnityEngine::Splines::ExtrusionShapes::Circle::i___UnityEngine__Splines__IExtrudeShape() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::ExtrusionShapes::Circle::Circle()   {
}
