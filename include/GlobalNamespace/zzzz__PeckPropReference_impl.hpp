#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckPropReference.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckPropReference_ReferenceType::PeckPropReference_ReferenceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckPropReference_ReferenceType::PeckPropReference_ReferenceType()   {
}
constexpr ::GlobalNamespace::PeckPropReference_ReferenceType  GlobalNamespace::PeckPropReference_ReferenceType::ContextProp{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckPropReference_ReferenceType  GlobalNamespace::PeckPropReference_ReferenceType::SpecificProp{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckPropReference_ReferenceType  GlobalNamespace::PeckPropReference_ReferenceType::PropHome{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PeckPropReference_ReferenceType  GlobalNamespace::PeckPropReference_ReferenceType::Pocket{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckPropReference_PocketType::PeckPropReference_PocketType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckPropReference_PocketType::PeckPropReference_PocketType()   {
}
constexpr ::GlobalNamespace::PeckPropReference_PocketType  GlobalNamespace::PeckPropReference_PocketType::NotSet{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckPropReference_PocketType  GlobalNamespace::PeckPropReference_PocketType::BlindfoldPocket{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckPropReference_PocketType  GlobalNamespace::PeckPropReference_PocketType::BackpackPocket{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PeckPropReference_PocketType  GlobalNamespace::PeckPropReference_PocketType::InBackpack{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::PeckPropReference.GetProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::Prop> (::GlobalNamespace::PeckPropReference::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckPropReference::GetProp)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180452f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckPropReference>(),
                        {"GetProp", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::Prop> GlobalNamespace::PeckPropReference::GetProp(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckPropReference>(),
                        {"GetProp", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Prop>>(*this, ___internal_method, peckContext);
}
// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckPropReference_ReferenceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "specificProp", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: Some("{}") }, CppParam { name: "propHome", ty: "::UnityW<::GlobalNamespace::PropHome>", modifiers: "", def_value: Some("{}") }, CppParam { name: "pocketPlayer", ty: "::GlobalNamespace::PeckPlayerReference", modifiers: "", def_value: Some("{}") }, CppParam { name: "pocketType", ty: "::GlobalNamespace::PeckPropReference_PocketType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckPropReference::PeckPropReference(::GlobalNamespace::PeckPropReference_ReferenceType  referenceType, ::UnityW<::GlobalNamespace::Prop>  specificProp, ::UnityW<::GlobalNamespace::PropHome>  propHome, ::GlobalNamespace::PeckPlayerReference  pocketPlayer, ::GlobalNamespace::PeckPropReference_PocketType  pocketType) noexcept  {
this->referenceType = referenceType;
this->specificProp = specificProp;
this->propHome = propHome;
this->pocketPlayer = pocketPlayer;
this->pocketType = pocketType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckPropReference::PeckPropReference()   {
}
