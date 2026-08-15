#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseFloraQualityData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__HouseFloraQualityData_def.hpp"
#include "GlobalNamespace/zzzz__HouseFloraQualityData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HouseFloraQualityData_Importance::HouseFloraQualityData_Importance(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseFloraQualityData_Importance::HouseFloraQualityData_Importance()   {
}
constexpr ::GlobalNamespace::HouseFloraQualityData_Importance  GlobalNamespace::HouseFloraQualityData_Importance::High{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HouseFloraQualityData_Importance  GlobalNamespace::HouseFloraQualityData_Importance::Medium{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HouseFloraQualityData_Importance  GlobalNamespace::HouseFloraQualityData_Importance::Low{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "importance", ty: "::GlobalNamespace::HouseFloraQualityData_Importance", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HouseFloraQualityData_Entry::HouseFloraQualityData_Entry(::UnityW<::UnityEngine::GameObject>  prefab, ::GlobalNamespace::HouseFloraQualityData_Importance  importance) noexcept  {
this->prefab = prefab;
this->importance = importance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseFloraQualityData_Entry::HouseFloraQualityData_Entry()   {
}
//  Writing Method size for method: ::GlobalNamespace::HouseFloraQualityData.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseFloraQualityData::*)(::GlobalNamespace::HouseFloraQualityData_Importance)>(&::GlobalNamespace::HouseFloraQualityData::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180421cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseFloraQualityData*>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::HouseFloraQualityData_Importance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseFloraQualityData.IsPrototypeRendered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HouseFloraQualityData::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::HouseFloraQualityData::IsPrototypeRendered)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180421b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseFloraQualityData*>(),
                        {"IsPrototypeRendered", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseFloraQualityData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseFloraQualityData::*)()>(&::GlobalNamespace::HouseFloraQualityData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180421d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseFloraQualityData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HouseFloraQualityData_Importance& GlobalNamespace::HouseFloraQualityData::__cordl_internal_get__minimumImportanceLastSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumImportanceLastSet;
}
constexpr ::GlobalNamespace::HouseFloraQualityData_Importance const& GlobalNamespace::HouseFloraQualityData::__cordl_internal_get__minimumImportanceLastSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumImportanceLastSet;
}
constexpr void GlobalNamespace::HouseFloraQualityData::__cordl_internal_set__minimumImportanceLastSet(::GlobalNamespace::HouseFloraQualityData_Importance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minimumImportanceLastSet = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>*& GlobalNamespace::HouseFloraQualityData::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>* const& GlobalNamespace::HouseFloraQualityData::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void GlobalNamespace::HouseFloraQualityData::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::HouseFloraQualityData_Entry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::HouseFloraQualityData::__cordl_internal_get_allFloraMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFloraMaterials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::HouseFloraQualityData::__cordl_internal_get_allFloraMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFloraMaterials;
}
constexpr void GlobalNamespace::HouseFloraQualityData::__cordl_internal_set_allFloraMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allFloraMaterials = value;
}
inline void GlobalNamespace::HouseFloraQualityData::Set(::GlobalNamespace::HouseFloraQualityData_Importance  minimumImportance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseFloraQualityData*>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::HouseFloraQualityData_Importance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimumImportance);
}
inline bool GlobalNamespace::HouseFloraQualityData::IsPrototypeRendered(::UnityEngine::GameObject*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseFloraQualityData*>(),
                        {"IsPrototypeRendered", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prototype);
}
inline void GlobalNamespace::HouseFloraQualityData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseFloraQualityData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseFloraQualityData* GlobalNamespace::HouseFloraQualityData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseFloraQualityData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseFloraQualityData::HouseFloraQualityData()   {
}
