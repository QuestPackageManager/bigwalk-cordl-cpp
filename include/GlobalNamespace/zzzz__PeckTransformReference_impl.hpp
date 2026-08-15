#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckTransformReference.hpp"
#include "GlobalNamespace/zzzz__PeckTransformReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckTransformReference_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckTransformReference_ReferenceType::PeckTransformReference_ReferenceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckTransformReference_ReferenceType::PeckTransformReference_ReferenceType()   {
}
constexpr ::GlobalNamespace::PeckTransformReference_ReferenceType  GlobalNamespace::PeckTransformReference_ReferenceType::Local{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckTransformReference_ReferenceType  GlobalNamespace::PeckTransformReference_ReferenceType::Custom{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckTransformReference_ReferenceType  GlobalNamespace::PeckTransformReference_ReferenceType::ContextProp{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PeckTransformReference.GetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::PeckTransformReference::*)(::GlobalNamespace::PeckContext, ::UnityEngine::Transform*)>(&::GlobalNamespace::PeckTransformReference::GetTransform)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180454280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckTransformReference>(),
                        {"GetTransform", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PeckTransformReference::GetTransform(::GlobalNamespace::PeckContext  peckContext, ::UnityEngine::Transform*  localTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckTransformReference>(),
                        {"GetTransform", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(*this, ___internal_method, peckContext, localTransform);
}
// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckTransformReference_ReferenceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "customTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckTransformReference::PeckTransformReference(::GlobalNamespace::PeckTransformReference_ReferenceType  referenceType, ::UnityW<::UnityEngine::Transform>  customTransform) noexcept  {
this->referenceType = referenceType;
this->customTransform = customTransform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckTransformReference::PeckTransformReference()   {
}
