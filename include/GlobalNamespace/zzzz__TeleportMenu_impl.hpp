#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportMenu_def.hpp"
#include "GlobalNamespace/zzzz__TeleportPoint_def.hpp"
#include "GlobalNamespace/zzzz__TeleportRow_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportMenu.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TeleportMenu> (*)()>(&::GlobalNamespace::TeleportMenu::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18042a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportMenu.OnTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportMenu::*)(::GlobalNamespace::TeleportPoint*)>(&::GlobalNamespace::TeleportMenu::OnTeleport)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18042a4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"OnTeleport", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportMenu.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportMenu::*)()>(&::GlobalNamespace::TeleportMenu::Initialize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18042a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportMenu::*)()>(&::GlobalNamespace::TeleportMenu::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18042a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportMenu::*)()>(&::GlobalNamespace::TeleportMenu::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18042a600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportMenu::*)()>(&::GlobalNamespace::TeleportMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportMenu::__cordl_internal_get_rowPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportMenu::__cordl_internal_get_rowPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowPrefab;
}
constexpr void GlobalNamespace::TeleportMenu::__cordl_internal_set_rowPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rowPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TeleportMenu::__cordl_internal_get_rowParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TeleportMenu::__cordl_internal_get_rowParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowParent;
}
constexpr void GlobalNamespace::TeleportMenu::__cordl_internal_set_rowParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rowParent = value;
}
constexpr float_t& GlobalNamespace::TeleportMenu::__cordl_internal_get_visibilityDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityDuration;
}
constexpr float_t const& GlobalNamespace::TeleportMenu::__cordl_internal_get_visibilityDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityDuration;
}
constexpr void GlobalNamespace::TeleportMenu::__cordl_internal_set_visibilityDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibilityDuration = value;
}
constexpr bool& GlobalNamespace::TeleportMenu::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::TeleportMenu::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::TeleportMenu::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr float_t& GlobalNamespace::TeleportMenu::__cordl_internal_get_timeAtLastTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastTeleport;
}
constexpr float_t const& GlobalNamespace::TeleportMenu::__cordl_internal_get_timeAtLastTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastTeleport;
}
constexpr void GlobalNamespace::TeleportMenu::__cordl_internal_set_timeAtLastTeleport(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtLastTeleport = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>*& GlobalNamespace::TeleportMenu::__cordl_internal_get_rows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rows;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>* const& GlobalNamespace::TeleportMenu::__cordl_internal_get_rows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rows;
}
constexpr void GlobalNamespace::TeleportMenu::__cordl_internal_set_rows(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rows = value;
}
inline ::UnityW<::GlobalNamespace::TeleportMenu> GlobalNamespace::TeleportMenu::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TeleportMenu>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TeleportMenu::OnTeleport(::GlobalNamespace::TeleportPoint*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"OnTeleport", {}, {::i2c::type_of<::GlobalNamespace::TeleportPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::TeleportMenu::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportMenu* GlobalNamespace::TeleportMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportMenu::TeleportMenu()   {
}
