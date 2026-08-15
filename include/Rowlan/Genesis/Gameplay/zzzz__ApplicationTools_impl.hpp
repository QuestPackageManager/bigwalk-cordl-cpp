#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Gameplay/ApplicationTools.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rowlan/Genesis/Gameplay/zzzz__ApplicationTools_def.hpp"
#include "Rowlan/Genesis/Gameplay/zzzz__ApplicationTools_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor::ApplicationTools_HideCursor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor::ApplicationTools_HideCursor()   {
}
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor::None{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor::Editor{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor::Build{static_cast<int32_t>(0x2)};
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor::Both{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::ApplicationTools.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::ApplicationTools::*)()>(&::Rowlan::Genesis::Gameplay::ApplicationTools::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::ApplicationTools.ApplyCursorLogic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::ApplicationTools::*)()>(&::Rowlan::Genesis::Gameplay::ApplicationTools::ApplyCursorLogic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"ApplyCursorLogic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::ApplicationTools.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::ApplicationTools::*)()>(&::Rowlan::Genesis::Gameplay::ApplicationTools::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abd160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::ApplicationTools.HandleInputKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::ApplicationTools::*)()>(&::Rowlan::Genesis::Gameplay::ApplicationTools::HandleInputKeys)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abd160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"HandleInputKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::ApplicationTools.RestartScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::ApplicationTools::*)()>(&::Rowlan::Genesis::Gameplay::ApplicationTools::RestartScene)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181abd1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"RestartScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::ApplicationTools.QuitGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::ApplicationTools::*)()>(&::Rowlan::Genesis::Gameplay::ApplicationTools::QuitGame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abd1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"QuitGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::ApplicationTools._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::ApplicationTools::*)()>(&::Rowlan::Genesis::Gameplay::ApplicationTools::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_get_quitGameKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quitGameKey;
}
constexpr ::UnityEngine::KeyCode const& Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_get_quitGameKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quitGameKey;
}
constexpr void Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_set_quitGameKey(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quitGameKey = value;
}
constexpr ::UnityEngine::KeyCode& Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_get_restartKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartKey;
}
constexpr ::UnityEngine::KeyCode const& Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_get_restartKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartKey;
}
constexpr void Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_set_restartKey(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartKey = value;
}
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor& Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_get_hideCursor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideCursor;
}
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor const& Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_get_hideCursor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideCursor;
}
constexpr void Rowlan::Genesis::Gameplay::ApplicationTools::__cordl_internal_set_hideCursor(::Rowlan::Genesis::Gameplay::ApplicationTools_HideCursor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideCursor = value;
}
inline void Rowlan::Genesis::Gameplay::ApplicationTools::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Gameplay::ApplicationTools::ApplyCursorLogic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"ApplyCursorLogic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Gameplay::ApplicationTools::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Gameplay::ApplicationTools::HandleInputKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"HandleInputKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Gameplay::ApplicationTools::RestartScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"RestartScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Gameplay::ApplicationTools::QuitGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {"QuitGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Gameplay::ApplicationTools::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::ApplicationTools*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Gameplay::ApplicationTools* Rowlan::Genesis::Gameplay::ApplicationTools::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Gameplay::ApplicationTools*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Gameplay::ApplicationTools::ApplicationTools()   {
}
