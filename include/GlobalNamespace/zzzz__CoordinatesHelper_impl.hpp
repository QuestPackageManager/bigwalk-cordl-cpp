#pragma once
// IWYU pragma private; include "GlobalNamespace/CoordinatesHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoordinatesHelper_def.hpp"
#include "GlobalNamespace/zzzz__CoordinatesHelper_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode::CoordinatesHelper_CoordinatesMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode::CoordinatesHelper_CoordinatesMode()   {
}
constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode  GlobalNamespace::CoordinatesHelper_CoordinatesMode::Single{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode  GlobalNamespace::CoordinatesHelper_CoordinatesMode::Pair{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::CoordinatesHelper.GetCoordinateString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CoordinatesHelper::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CoordinatesHelper::GetCoordinateString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803f8880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {"GetCoordinateString", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoordinatesHelper.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoordinatesHelper::*)()>(&::GlobalNamespace::CoordinatesHelper::Sync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803f89b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {"Sync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoordinatesHelper.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoordinatesHelper::*)()>(&::GlobalNamespace::CoordinatesHelper::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoordinatesHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoordinatesHelper::*)()>(&::GlobalNamespace::CoordinatesHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::CoordinatesHelper_CoordinatesMode const& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::CoordinatesHelper::__cordl_internal_set_mode(::GlobalNamespace::CoordinatesHelper_CoordinatesMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_targetA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetA;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_targetA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetA;
}
constexpr void GlobalNamespace::CoordinatesHelper::__cordl_internal_set_targetA(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetA = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_targetB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_targetB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetB;
}
constexpr void GlobalNamespace::CoordinatesHelper::__cordl_internal_set_targetB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetB = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_localizedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_localizedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedText;
}
constexpr void GlobalNamespace::CoordinatesHelper::__cordl_internal_set_localizedText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizedText = value;
}
constexpr bool& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_showGlobalGizmo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGlobalGizmo;
}
constexpr bool const& GlobalNamespace::CoordinatesHelper::__cordl_internal_get_showGlobalGizmo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGlobalGizmo;
}
constexpr void GlobalNamespace::CoordinatesHelper::__cordl_internal_set_showGlobalGizmo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGlobalGizmo = value;
}
inline ::StringW GlobalNamespace::CoordinatesHelper::GetCoordinateString(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {"GetCoordinateString", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, position);
}
inline void GlobalNamespace::CoordinatesHelper::Sync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {"Sync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CoordinatesHelper::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CoordinatesHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoordinatesHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CoordinatesHelper* GlobalNamespace::CoordinatesHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CoordinatesHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoordinatesHelper::CoordinatesHelper()   {
}
