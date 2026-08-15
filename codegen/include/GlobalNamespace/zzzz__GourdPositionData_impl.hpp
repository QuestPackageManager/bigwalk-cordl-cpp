#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdPositionData.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GourdPositionData_def.hpp"
#include "GlobalNamespace/zzzz__GourdPositionData_def.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "saveablePropName", ty: "::GlobalNamespace::SaveablePropName", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "isVariantChallenge", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GourdPositionData_GourdListing::GourdPositionData_GourdListing(::GlobalNamespace::SaveablePropName  saveablePropName, ::UnityEngine::Vector3  position, bool  isVariantChallenge) noexcept  {
this->saveablePropName = saveablePropName;
this->position = position;
this->isVariantChallenge = isVariantChallenge;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GourdPositionData_GourdListing::GourdPositionData_GourdListing()   {
}
//  Writing Method size for method: ::GlobalNamespace::GourdPositionData.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GourdPositionData::*)(::GlobalNamespace::SaveablePropName)>(&::GlobalNamespace::GourdPositionData::GetPosition)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803ff2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPositionData*>(),
                        {"GetPosition", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdPositionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdPositionData::*)()>(&::GlobalNamespace::GourdPositionData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPositionData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>*& GlobalNamespace::GourdPositionData::__cordl_internal_get_gourdListings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdListings;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>* const& GlobalNamespace::GourdPositionData::__cordl_internal_get_gourdListings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdListings;
}
constexpr void GlobalNamespace::GourdPositionData::__cordl_internal_set_gourdListings(::System::Collections::Generic::List_1<::GlobalNamespace::GourdPositionData_GourdListing>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gourdListings = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::GourdPositionData::GetPosition(::GlobalNamespace::SaveablePropName  saveablePropName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPositionData*>(),
                        {"GetPosition", {}, {::i2c::type_of<::GlobalNamespace::SaveablePropName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, saveablePropName);
}
inline void GlobalNamespace::GourdPositionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPositionData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GourdPositionData* GlobalNamespace::GourdPositionData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GourdPositionData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GourdPositionData::GourdPositionData()   {
}
