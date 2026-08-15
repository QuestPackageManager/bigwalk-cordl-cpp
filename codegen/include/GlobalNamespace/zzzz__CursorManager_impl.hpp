#pragma once
// IWYU pragma private; include "GlobalNamespace/CursorManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__CursorManager_def.hpp"
#include "GlobalNamespace/zzzz__CursorManager_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CursorManager_CursorData.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CursorManager_CursorData::*)()>(&::GlobalNamespace::CursorManager_CursorData::SetActive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180420ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager_CursorData>(),
                        {"SetActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CursorManager_CursorData::SetActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager_CursorData>(),
                        {"SetActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "cursorTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "hotSpot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CursorManager_CursorData::CursorManager_CursorData(::UnityW<::UnityEngine::Texture2D>  cursorTexture, ::UnityEngine::Vector2  hotSpot) noexcept  {
this->cursorTexture = cursorTexture;
this->hotSpot = hotSpot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CursorManager_CursorData::CursorManager_CursorData()   {
}
//  Writing Method size for method: ::GlobalNamespace::CursorManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CursorManager* (*)()>(&::GlobalNamespace::CursorManager::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180420cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CursorManager.SetLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CursorManager::SetLocked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180420c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {"SetLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CursorManager.SetFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CursorManager::SetFree)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180420b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {"SetFree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CursorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CursorManager::*)()>(&::GlobalNamespace::CursorManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CursorManager_CursorData& GlobalNamespace::CursorManager::__cordl_internal_get_crosshairCursor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairCursor;
}
constexpr ::GlobalNamespace::CursorManager_CursorData const& GlobalNamespace::CursorManager::__cordl_internal_get_crosshairCursor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshairCursor;
}
constexpr void GlobalNamespace::CursorManager::__cordl_internal_set_crosshairCursor(::GlobalNamespace::CursorManager_CursorData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crosshairCursor = value;
}
constexpr ::GlobalNamespace::CursorManager_CursorData& GlobalNamespace::CursorManager::__cordl_internal_get_UIcursor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UIcursor;
}
constexpr ::GlobalNamespace::CursorManager_CursorData const& GlobalNamespace::CursorManager::__cordl_internal_get_UIcursor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UIcursor;
}
constexpr void GlobalNamespace::CursorManager::__cordl_internal_set_UIcursor(::GlobalNamespace::CursorManager_CursorData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UIcursor = value;
}
constexpr bool& GlobalNamespace::CursorManager::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CursorManager::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CursorManager::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline ::GlobalNamespace::CursorManager* GlobalNamespace::CursorManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CursorManager*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CursorManager::SetLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {"SetLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CursorManager::SetFree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {"SetFree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CursorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CursorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CursorManager* GlobalNamespace::CursorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CursorManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CursorManager::CursorManager()   {
}
