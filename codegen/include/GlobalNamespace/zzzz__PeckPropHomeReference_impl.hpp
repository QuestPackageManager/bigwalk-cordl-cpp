#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckPropHomeReference.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckPropHomeReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckPropHomeReference_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckPropHomeReference_ReferenceType::PeckPropHomeReference_ReferenceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckPropHomeReference_ReferenceType::PeckPropHomeReference_ReferenceType()   {
}
constexpr ::GlobalNamespace::PeckPropHomeReference_ReferenceType  GlobalNamespace::PeckPropHomeReference_ReferenceType::SpecificPropHome{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckPropHomeReference_ReferenceType  GlobalNamespace::PeckPropHomeReference_ReferenceType::Pocket{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PeckPropHomeReference.GetPropHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropHome> (::GlobalNamespace::PeckPropHomeReference::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckPropHomeReference::GetPropHome)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180452d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckPropHomeReference>(),
                        {"GetPropHome", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::PropHome> GlobalNamespace::PeckPropHomeReference::GetPropHome(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckPropHomeReference>(),
                        {"GetPropHome", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropHome>>(*this, ___internal_method, peckContext);
}
// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckPropHomeReference_ReferenceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "specificHome", ty: "::UnityW<::GlobalNamespace::PropHome>", modifiers: "", def_value: Some("{}") }, CppParam { name: "pocketType", ty: "::GlobalNamespace::PeckPropReference_PocketType", modifiers: "", def_value: Some("{}") }, CppParam { name: "pocketPlayer", ty: "::GlobalNamespace::PeckPlayerReference", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckPropHomeReference::PeckPropHomeReference(::GlobalNamespace::PeckPropHomeReference_ReferenceType  referenceType, ::UnityW<::GlobalNamespace::PropHome>  specificHome, ::GlobalNamespace::PeckPropReference_PocketType  pocketType, ::GlobalNamespace::PeckPlayerReference  pocketPlayer) noexcept  {
this->referenceType = referenceType;
this->specificHome = specificHome;
this->pocketType = pocketType;
this->pocketPlayer = pocketPlayer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckPropHomeReference::PeckPropHomeReference()   {
}
