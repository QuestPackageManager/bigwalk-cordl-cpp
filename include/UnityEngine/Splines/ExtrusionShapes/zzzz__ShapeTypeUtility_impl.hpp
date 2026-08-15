#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/ShapeTypeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__ShapeTypeUtility_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__ShapeType_def.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility.GetShapeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::ExtrusionShapes::ShapeType (*)(::System::Object*)>(&::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility::GetShapeType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18217b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility*>(),
                        {"GetShapeType", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility.CreateShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::IExtrudeShape* (*)(::UnityEngine::Splines::ExtrusionShapes::ShapeType)>(&::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility::CreateShape)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18217b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility*>(),
                        {"CreateShape", {}, {::i2c::type_of<::UnityEngine::Splines::ExtrusionShapes::ShapeType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Splines::ExtrusionShapes::ShapeType UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility::GetShapeType(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility*>(),
                        {"GetShapeType", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::ExtrusionShapes::ShapeType>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Splines::IExtrudeShape* UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility::CreateShape(::UnityEngine::Splines::ExtrusionShapes::ShapeType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility*>(),
                        {"CreateShape", {}, {::i2c::type_of<::UnityEngine::Splines::ExtrusionShapes::ShapeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::IExtrudeShape*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::ExtrusionShapes::ShapeTypeUtility::ShapeTypeUtility()   {
}
