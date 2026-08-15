#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportRow.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportRow_def.hpp"
#include "GlobalNamespace/zzzz__TeleportPoint_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportRow.Assign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportRow::*)(::GlobalNamespace::TeleportPoint*)>(&::GlobalNamespace::TeleportRow::Assign)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18042a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportRow*>(),
                        {"Assign", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportRow.SetActiveDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportRow::*)(bool)>(&::GlobalNamespace::TeleportRow::SetActiveDestination)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18042a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportRow*>(),
                        {"SetActiveDestination", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportRow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportRow::*)()>(&::GlobalNamespace::TeleportRow::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportRow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::TeleportRow::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::TeleportRow::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::TeleportRow::__cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
constexpr ::UnityW<::GlobalNamespace::TeleportPoint>& GlobalNamespace::TeleportRow::__cordl_internal_get_teleportPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportPoint;
}
constexpr ::UnityW<::GlobalNamespace::TeleportPoint> const& GlobalNamespace::TeleportRow::__cordl_internal_get_teleportPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportPoint;
}
constexpr void GlobalNamespace::TeleportRow::__cordl_internal_set_teleportPoint(::UnityW<::GlobalNamespace::TeleportPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportPoint = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TeleportRow::__cordl_internal_get_normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TeleportRow::__cordl_internal_get_normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalColor;
}
constexpr void GlobalNamespace::TeleportRow::__cordl_internal_set_normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TeleportRow::__cordl_internal_get_activeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TeleportRow::__cordl_internal_get_activeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeColor;
}
constexpr void GlobalNamespace::TeleportRow::__cordl_internal_set_activeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeColor = value;
}
inline void GlobalNamespace::TeleportRow::Assign(::GlobalNamespace::TeleportPoint*  teleportPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportRow*>(),
                        {"Assign", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teleportPoint);
}
inline void GlobalNamespace::TeleportRow::SetActiveDestination(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportRow*>(),
                        {"SetActiveDestination", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::TeleportRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportRow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportRow* GlobalNamespace::TeleportRow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportRow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportRow::TeleportRow()   {
}
