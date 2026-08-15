#pragma once
// IWYU pragma private; include "GlobalNamespace/PropZoner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropZoner_def.hpp"
#include "GlobalNamespace/zzzz__PropZone_def.hpp"
#include "GlobalNamespace/zzzz__PropZoner_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropZoner_ZoneChangeType::PropZoner_ZoneChangeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropZoner_ZoneChangeType::PropZoner_ZoneChangeType()   {
}
constexpr ::GlobalNamespace::PropZoner_ZoneChangeType  GlobalNamespace::PropZoner_ZoneChangeType::Enter{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PropZoner_ZoneChangeType  GlobalNamespace::PropZoner_ZoneChangeType::Exit{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PropZoner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropZoner::*)()>(&::GlobalNamespace::PropZoner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZoner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PropZoner::__cordl_internal_get_prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PropZoner::__cordl_internal_get_prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr void GlobalNamespace::PropZoner::__cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prop = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>*& GlobalNamespace::PropZoner::__cordl_internal_get_onZoneChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneChange;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>* const& GlobalNamespace::PropZoner::__cordl_internal_get_onZoneChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onZoneChange;
}
constexpr void GlobalNamespace::PropZoner::__cordl_internal_set_onZoneChange(::System::Action_2<::UnityW<::GlobalNamespace::PropZone>,::GlobalNamespace::PropZoner_ZoneChangeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onZoneChange = value;
}
inline void GlobalNamespace::PropZoner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropZoner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropZoner* GlobalNamespace::PropZoner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropZoner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropZoner::PropZoner()   {
}
