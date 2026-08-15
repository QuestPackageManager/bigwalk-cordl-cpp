#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyboardLayoutHandler.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KeyboardLayoutHandler_def.hpp"
#include "GlobalNamespace/zzzz__KeyboardLayoutHandler_def.hpp"
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout::KeyboardLayoutHandler_KeyboardLayout(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout::KeyboardLayoutHandler_KeyboardLayout()   {
}
constexpr ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout  GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout::Qwerty{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout  GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout::Azerty{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout  GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout::Qwertz{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::*)(::Rewired::KeyboardKeyCode)>(&::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ff3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::*)(::StringW)>(&::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ff400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback.get_IsKeyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::*)()>(&::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::get_IsKeyCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {"get_IsKeyCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback.op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback (*)(::Rewired::KeyboardKeyCode)>(&::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ff440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback.op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback (*)(::StringW)>(&::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ff490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::_ctor(::Rewired::KeyboardKeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyCode);
}
inline void GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::_ctor(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, str);
}
inline bool GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::get_IsKeyCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {"get_IsKeyCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback(::Rewired::KeyboardKeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(nullptr, ___internal_method, keyCode);
}
inline ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(nullptr, ___internal_method, str);
}
// Ctor Parameters [CppParam { name: "KeyCode", ty: "::System::Nullable_1<::Rewired::KeyboardKeyCode>", modifiers: "", def_value: Some("{}") }, CppParam { name: "String", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::KeyboardLayoutHandler_KeyCodeOrFallback(::System::Nullable_1<::Rewired::KeyboardKeyCode>  KeyCode, ::StringW  String) noexcept  {
this->KeyCode = KeyCode;
this->String = String;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback::KeyboardLayoutHandler_KeyCodeOrFallback()   {
}
//  Writing Method size for method: ::GlobalNamespace::KeyboardLayoutHandler.GetKeyCodeOrFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback (*)(::Rewired::KeyboardKeyCode, ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout)>(&::GlobalNamespace::KeyboardLayoutHandler::GetKeyCodeOrFallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803ff4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler*>(),
                        {"GetKeyCodeOrFallback", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KeyboardLayoutHandler::setStaticF_LayoutMappings(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>*, "LayoutMappings", ::GlobalNamespace::KeyboardLayoutHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>* GlobalNamespace::KeyboardLayoutHandler::getStaticF_LayoutMappings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>*, "LayoutMappings", ::GlobalNamespace::KeyboardLayoutHandler*>();
}
inline ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback GlobalNamespace::KeyboardLayoutHandler::GetKeyCodeOrFallback(::Rewired::KeyboardKeyCode  keyCode, ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout  keyboardLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyboardLayoutHandler*>(),
                        {"GetKeyCodeOrFallback", {}, {::i2c::type_of<::Rewired::KeyboardKeyCode>(), ::i2c::type_of<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>(nullptr, ___internal_method, keyCode, keyboardLayout);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyboardLayoutHandler::KeyboardLayoutHandler()   {
}
