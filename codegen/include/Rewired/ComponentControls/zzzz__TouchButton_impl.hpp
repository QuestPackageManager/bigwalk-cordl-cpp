#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchButton.hpp"
#include "Rewired/ComponentControls/zzzz__TouchInteractable_impl.hpp"
#include "Rewired/Utils/UI/zzzz__PositionType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/ComponentControls/zzzz__TouchButton_def.hpp"
#include "GlobalNamespace/zzzz__DqFEdekqxKkWYIisdJDTEhuknscCc_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSetForFloat_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchButton_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchRegion_def.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis_def.hpp"
#include "Rewired/Utils/UI/zzzz__PositionType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchButton_ButtonType::TouchButton_ButtonType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_ButtonType::TouchButton_ButtonType()   {
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonType  Rewired::ComponentControls::TouchButton_ButtonType::Standard{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchButton_ButtonType  Rewired::ComponentControls::TouchButton_ButtonType::ToggleSwitch{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO()   {
}
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO::TowardTouch{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO::TowardHome{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP()   {
}
constexpr ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP::Local{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP::TouchRegion{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler::*)()>(&::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler* Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler::TouchButton_AxisValueChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler::*)()>(&::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler* Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler::TouchButton_ButtonValueChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler::*)()>(&::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchButton_ButtonDownEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler* Rewired::ComponentControls::TouchButton_ButtonDownEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler::TouchButton_ButtonDownEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler::*)()>(&::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchButton_ButtonUpEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler* Rewired::ComponentControls::TouchButton_ButtonUpEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler::TouchButton_ButtonUpEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::*)(int32_t)>(&::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::*)()>(&::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x3e50;
  constexpr static std::size_t addrs = 0x1810edc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::*)()>(&::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::MoveNext)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1818eed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::*)()>(&::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::*)()>(&::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::*)()>(&::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_xdAImxnzGYCbPivMeDDfBzHZzmLG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xdAImxnzGYCbPivMeDDfBzHZzmLG;
}
constexpr int32_t const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_xdAImxnzGYCbPivMeDDfBzHZzmLG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xdAImxnzGYCbPivMeDDfBzHZzmLG;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_xdAImxnzGYCbPivMeDDfBzHZzmLG(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xdAImxnzGYCbPivMeDDfBzHZzmLG = value;
}
constexpr ::System::Object*& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_PYjGPUDrpIQqsynobAUJDvbdAXrnA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PYjGPUDrpIQqsynobAUJDvbdAXrnA;
}
constexpr ::System::Object* const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_PYjGPUDrpIQqsynobAUJDvbdAXrnA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PYjGPUDrpIQqsynobAUJDvbdAXrnA;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_PYjGPUDrpIQqsynobAUJDvbdAXrnA(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PYjGPUDrpIQqsynobAUJDvbdAXrnA = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_GQRpHjTgJEjVRAhWTHyGXCpBprrLA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GQRpHjTgJEjVRAhWTHyGXCpBprrLA;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_GQRpHjTgJEjVRAhWTHyGXCpBprrLA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GQRpHjTgJEjVRAhWTHyGXCpBprrLA;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_GQRpHjTgJEjVRAhWTHyGXCpBprrLA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GQRpHjTgJEjVRAhWTHyGXCpBprrLA = value;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchButton>& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_HfoaCRrmtHTrnhflybFEiEWiqHVIb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HfoaCRrmtHTrnhflybFEiEWiqHVIb;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchButton> const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_HfoaCRrmtHTrnhflybFEiEWiqHVIb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HfoaCRrmtHTrnhflybFEiEWiqHVIb;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_HfoaCRrmtHTrnhflybFEiEWiqHVIb(::UnityW<::Rewired::ComponentControls::TouchButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HfoaCRrmtHTrnhflybFEiEWiqHVIb = value;
}
constexpr ::Rewired::Utils::UI::PositionType& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_PllHVyaRPVJOAPLGYVtwXmErOnoo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PllHVyaRPVJOAPLGYVtwXmErOnoo;
}
constexpr ::Rewired::Utils::UI::PositionType const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_PllHVyaRPVJOAPLGYVtwXmErOnoo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PllHVyaRPVJOAPLGYVtwXmErOnoo;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_PllHVyaRPVJOAPLGYVtwXmErOnoo(::Rewired::Utils::UI::PositionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PllHVyaRPVJOAPLGYVtwXmErOnoo = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZeMFOOeCPQaftiNOJUNmHBNVvXjYb;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZeMFOOeCPQaftiNOJUNmHBNVvXjYb;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_ZeMFOOeCPQaftiNOJUNmHBNVvXjYb(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZeMFOOeCPQaftiNOJUNmHBNVvXjYb = value;
}
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_iosBeIEUDWaQBgmWwdgZIZerZIZd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iosBeIEUDWaQBgmWwdgZIZerZIZd;
}
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_iosBeIEUDWaQBgmWwdgZIZerZIZd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iosBeIEUDWaQBgmWwdgZIZerZIZd;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_iosBeIEUDWaQBgmWwdgZIZerZIZd(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iosBeIEUDWaQBgmWwdgZIZerZIZd = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_PqrYSKTSlYwuFeneXebMZOJScUzBA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PqrYSKTSlYwuFeneXebMZOJScUzBA;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_PqrYSKTSlYwuFeneXebMZOJScUzBA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PqrYSKTSlYwuFeneXebMZOJScUzBA;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_PqrYSKTSlYwuFeneXebMZOJScUzBA(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PqrYSKTSlYwuFeneXebMZOJScUzBA = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_rbjIbabcFFNoOAPnnmoWEKgZRlDt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rbjIbabcFFNoOAPnnmoWEKgZRlDt;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_rbjIbabcFFNoOAPnnmoWEKgZRlDt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rbjIbabcFFNoOAPnnmoWEKgZRlDt;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_rbjIbabcFFNoOAPnnmoWEKgZRlDt(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rbjIbabcFFNoOAPnnmoWEKgZRlDt = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_RWoyjQUeuqLmyxphrcQRJGfbsslA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RWoyjQUeuqLmyxphrcQRJGfbsslA;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_RWoyjQUeuqLmyxphrcQRJGfbsslA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RWoyjQUeuqLmyxphrcQRJGfbsslA;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_RWoyjQUeuqLmyxphrcQRJGfbsslA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RWoyjQUeuqLmyxphrcQRJGfbsslA = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_MAVNjuUEsJkFXnGQqhaXcqLHsjYs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAVNjuUEsJkFXnGQqhaXcqLHsjYs;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_get_MAVNjuUEsJkFXnGQqhaXcqLHsjYs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAVNjuUEsJkFXnGQqhaXcqLHsjYs;
}
constexpr void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::__cordl_internal_set_MAVNjuUEsJkFXnGQqhaXcqLHsjYs(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MAVNjuUEsJkFXnGQqhaXcqLHsjYs = value;
}
inline void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA* Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA::TouchButton_bxRUXlHWvXPpqkPcUCAzHEkHtKKA()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.add_AxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::Rewired::ComponentControls::TouchButton::add_AxisValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e3510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_AxisValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.remove_AxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::Rewired::ComponentControls::TouchButton::remove_AxisValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_AxisValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.add_ButtonValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::Rewired::ComponentControls::TouchButton::add_ButtonValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e35a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_ButtonValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.remove_ButtonValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::Rewired::ComponentControls::TouchButton::remove_ButtonValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e45c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_ButtonValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.add_ButtonDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchButton::add_ButtonDownEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e3540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_ButtonDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.remove_ButtonDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchButton::remove_ButtonDownEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_ButtonDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.add_ButtonUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchButton::add_ButtonUpEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e3570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_ButtonUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.remove_ButtonUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchButton::remove_ButtonUpEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_ButtonUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_targetCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_targetCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_targetCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_buttonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchButton_ButtonType (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_buttonType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_buttonType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_buttonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::Rewired::ComponentControls::TouchButton_ButtonType)>(&::Rewired::ComponentControls::TouchButton::set_buttonType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_buttonType", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ButtonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_activateOnSwipeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_activateOnSwipeIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_activateOnSwipeIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_activateOnSwipeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_activateOnSwipeIn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e48a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_activateOnSwipeIn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_stayActiveOnSwipeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_stayActiveOnSwipeOut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e3bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_stayActiveOnSwipeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_stayActiveOnSwipeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_stayActiveOnSwipeOut)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_stayActiveOnSwipeOut", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_useDigitalAxisSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_useDigitalAxisSimulation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_useDigitalAxisSimulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_useDigitalAxisSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_useDigitalAxisSimulation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_useDigitalAxisSimulation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_digitalAxisGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_digitalAxisGravity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_digitalAxisGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_digitalAxisGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(float_t)>(&::Rewired::ComponentControls::TouchButton::set_digitalAxisGravity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_digitalAxisGravity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_digitalAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_digitalAxisSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_digitalAxisSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_digitalAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(float_t)>(&::Rewired::ComponentControls::TouchButton::set_digitalAxisSensitivity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_digitalAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_touchRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::ComponentControls::TouchRegion> (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_touchRegion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_touchRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_touchRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::Rewired::ComponentControls::TouchRegion*)>(&::Rewired::ComponentControls::TouchButton::set_touchRegion)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e4bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_touchRegion", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_useTouchRegionOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_useTouchRegionOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_useTouchRegionOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_useTouchRegionOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_useTouchRegionOnly)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_useTouchRegionOnly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_moveToTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_moveToTouchPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_moveToTouchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_moveToTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_moveToTouchPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_moveToTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_returnOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_returnOnRelease)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_returnOnRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_returnOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_returnOnRelease)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_returnOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_followTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_followTouchPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_followTouchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_followTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_followTouchPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e49c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_followTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_animateOnMoveToTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_animateOnMoveToTouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_animateOnMoveToTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_animateOnMoveToTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_animateOnMoveToTouch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e48d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_animateOnMoveToTouch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_moveToTouchSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_moveToTouchSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_moveToTouchSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_moveToTouchSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(float_t)>(&::Rewired::ComponentControls::TouchButton::set_moveToTouchSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e4a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_moveToTouchSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_animateOnReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_animateOnReturn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_animateOnReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_animateOnReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_animateOnReturn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_animateOnReturn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_returnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_returnSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_returnSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_returnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(float_t)>(&::Rewired::ComponentControls::TouchButton::set_returnSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e4b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_returnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_manageRaycasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_manageRaycasting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_manageRaycasting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_manageRaycasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::set_manageRaycasting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e49f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_manageRaycasting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_pointerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_pointerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.set_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(int32_t)>(&::Rewired::ComponentControls::TouchButton::set_pointerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e4ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_pointerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_hasPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_hasPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_hasPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.get_axis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis* (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::get_axis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_axis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.JySFkEkVVduzDXgyUYPVtNNlQmMe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::JySFkEkVVduzDXgyUYPVtNNlQmMe)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818e17e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"JySFkEkVVduzDXgyUYPVtNNlQmMe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.VXmUGUUEQSHCURGfaIisZoaJDEqHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::VXmUGUUEQSHCURGfaIisZoaJDEqHA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818e29d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"VXmUGUUEQSHCURGfaIisZoaJDEqHA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.kujDScPMbjvAAskxvBQIBBacelSG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::kujDScPMbjvAAskxvBQIBBacelSG)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e3ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"kujDScPMbjvAAskxvBQIBBacelSG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.JNzbdWXJfvmKcIdquoOTfpMfpEiR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::JNzbdWXJfvmKcIdquoOTfpMfpEiR)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e17a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"JNzbdWXJfvmKcIdquoOTfpMfpEiR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.utgmQLnUzMrGecPWTEvyAUzydRAhA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::utgmQLnUzMrGecPWTEvyAUzydRAhA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"utgmQLnUzMrGecPWTEvyAUzydRAhA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.VoBxjyPojqjFbhubHnmLNMViLfLkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::VoBxjyPojqjFbhubHnmLNMViLfLkA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e2a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"VoBxjyPojqjFbhubHnmLNMViLfLkA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.bgeAqpSfAoTpquDkiqTgIPBcYqzn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::bgeAqpSfAoTpquDkiqTgIPBcYqzn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e35d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"bgeAqpSfAoTpquDkiqTgIPBcYqzn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1818e32e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.SetRawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(float_t)>(&::Rewired::ComponentControls::TouchButton::SetRawValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"SetRawValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.SetDefaultPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::SetDefaultPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e2740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"SetDefaultPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.fbJiuOEgGgDaLvsPUKeviuqHokFmB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchButton::fbJiuOEgGgDaLvsPUKeviuqHokFmB)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e38d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"fbJiuOEgGgDaLvsPUKeviuqHokFmB", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.ReturnToDefaultPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::ReturnToDefaultPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818e2670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ReturnToDefaultPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.ReturnToDefaultPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::ReturnToDefaultPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e26e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ReturnToDefaultPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818e1010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e1c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e1c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnValidate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e25f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e2310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnInitialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e1cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnCustomControllerUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnCustomControllerUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818e1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnSubscribeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnSubscribeEvents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818e20b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnUnsubscribeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnUnsubscribeEvents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818e21e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnSetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnSetProperty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e2050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OnClear)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e1a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.ClearValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::ClearValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818e1170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::IsPressed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818e1690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.IsThisOrTouchRegionGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchButton::IsThisOrTouchRegionGameObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818e1700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.qyKRKAMGCqlaBnJXSdZCBEQNoVrKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::qyKRKAMGCqlaBnJXSdZCBEQNoVrKA)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1818e4160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"qyKRKAMGCqlaBnJXSdZCBEQNoVrKA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.pyDNVNHGaiyZoFNEMqDJMUKArdEc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::pyDNVNHGaiyZoFNEMqDJMUKArdEc)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818e4060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"pyDNVNHGaiyZoFNEMqDJMUKArdEc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.cbKjkHqVSDKteAKmdfJxHRPJHiqk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::cbKjkHqVSDKteAKmdfJxHRPJHiqk)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e36d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"cbKjkHqVSDKteAKmdfJxHRPJHiqk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.HfCwPZUYYOAAuSVVBEBjdKZGZMCb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(float_t, bool)>(&::Rewired::ComponentControls::TouchButton::HfCwPZUYYOAAuSVVBEBjdKZGZMCb)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818e1600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"HfCwPZUYYOAAuSVVBEBjdKZGZMCb", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.rCutgovtWyrzIKsgiZYvJNWvhQg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::rCutgovtWyrzIKsgiZYvJNWvhQg)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818e4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"rCutgovtWyrzIKsgiZYvJNWvhQg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.HEQJNGBYVIPvbYFlhsyjQXTKclkr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::HEQJNGBYVIPvbYFlhsyjQXTKclkr)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e15b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"HEQJNGBYVIPvbYFlhsyjQXTKclkr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.zfMdnqFIsicXxmUvkUjQBwEoJmuX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::zfMdnqFIsicXxmUvkUjQBwEoJmuX)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e5180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"zfMdnqFIsicXxmUvkUjQBwEoJmuX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.FjcrSoCtFPSZYzNOSNvyRipjaqxEA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::FjcrSoCtFPSZYzNOSNvyRipjaqxEA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e1530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"FjcrSoCtFPSZYzNOSNvyRipjaqxEA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.XVAPKPgoBZASJFOmzqlIvLojgfNRA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::XVAPKPgoBZASJFOmzqlIvLojgfNRA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"XVAPKPgoBZASJFOmzqlIvLojgfNRA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.iySYfOAetXhJQBywABPhtLABHKbO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::Rewired::ComponentControls::TouchRegion*)>(&::Rewired::ComponentControls::TouchButton::iySYfOAetXhJQBywABPhtLABHKbO)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e3d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"iySYfOAetXhJQBywABPhtLABHKbO", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.hsxHaDUnNbWzBTPtMMKnVdwYslke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::Rewired::ComponentControls::TouchRegion*)>(&::Rewired::ComponentControls::TouchButton::hsxHaDUnNbWzBTPtMMKnVdwYslke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e3c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"hsxHaDUnNbWzBTPtMMKnVdwYslke", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.tbRAYSaJrrjSXEXFlWNjbiRfGnCKc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::tbRAYSaJrrjSXEXFlWNjbiRfGnCKc)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818e4da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"tbRAYSaJrrjSXEXFlWNjbiRfGnCKc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.riuFeUreUIBJUTRhzfXhBWsaddTCA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Vector2, bool, float_t, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO)>(&::Rewired::ComponentControls::TouchButton::riuFeUreUIBJUTRhzfXhBWsaddTCA)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1818e45f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"riuFeUreUIBJUTRhzfXhBWsaddTCA", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.WZlsldGNrFoxFNZTkfYHpLDBJJrD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Vector2, ::Rewired::Utils::UI::PositionType, bool, float_t, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO)>(&::Rewired::ComponentControls::TouchButton::WZlsldGNrFoxFNZTkfYHpLDBJJrD)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1818e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"WZlsldGNrFoxFNZTkfYHpLDBJJrD", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.facgCiPlJwfBtefDBGPumHysCusDA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::Vector2, ::Rewired::Utils::UI::PositionType, float_t, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO)>(&::Rewired::ComponentControls::TouchButton::facgCiPlJwfBtefDBGPumHysCusDA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818e3850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"facgCiPlJwfBtefDBGPumHysCusDA", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.rFMyvpDDHAmDMrUylJLBDGQzgxrj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO, ::UnityEngine::Vector2, ::Rewired::Utils::UI::PositionType)>(&::Rewired::ComponentControls::TouchButton::rFMyvpDDHAmDMrUylJLBDGQzgxrj)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e4410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"rFMyvpDDHAmDMrUylJLBDGQzgxrj", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.cLpXkFqwrFnLVHpTjuqEqxkjUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO)>(&::Rewired::ComponentControls::TouchButton::cLpXkFqwrFnLVHpTjuqEqxkjUp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e3600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"cLpXkFqwrFnLVHpTjuqEqxkjUp", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.UCLHnBwPQttIRcmgzjjIrKfHCEkI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO)>(&::Rewired::ComponentControls::TouchButton::UCLHnBwPQttIRcmgzjjIrKfHCEkI)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e28f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"UCLHnBwPQttIRcmgzjjIrKfHCEkI", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.mxAyjRwmchZklyoKYFolyvxhQgGD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(int32_t)>(&::Rewired::ComponentControls::TouchButton::mxAyjRwmchZklyoKYFolyvxhQgGD)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818e3f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"mxAyjRwmchZklyoKYFolyvxhQgGD", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.eTYcagUYSqAzgvihGwtlDdWezZdv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::eTYcagUYSqAzgvihGwtlDdWezZdv)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e37f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"eTYcagUYSqAzgvihGwtlDdWezZdv", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.NZaMximVLZoBicfcNRUNUCLYQItx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::NZaMximVLZoBicfcNRUNUCLYQItx)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1818e1850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"NZaMximVLZoBicfcNRUNUCLYQItx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.TwRgqOGFAqxFTdOpNxOgABVKnVZq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::TwRgqOGFAqxFTdOpNxOgABVKnVZq)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e28b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"TwRgqOGFAqxFTdOpNxOgABVKnVZq", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.PVrGJqryzvCcteUEJSBkiCtjEZLaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::PVrGJqryzvCcteUEJSBkiCtjEZLaA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818e25d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"PVrGJqryzvCcteUEJSBkiCtjEZLaA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OwmFIICDsOllwcCjeiclaskmwgPWB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchButton::*)(int32_t)>(&::Rewired::ComponentControls::TouchButton::OwmFIICDsOllwcCjeiclaskmwgPWB)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e2580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"OwmFIICDsOllwcCjeiclaskmwgPWB", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.ZixoPXNjgDGduSRfAqHojyGDpyVC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchButton::*)(int32_t, ::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchButton::ZixoPXNjgDGduSRfAqHojyGDpyVC)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1818e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ZixoPXNjgDGduSRfAqHojyGDpyVC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.WOHiDSxDcZEtIpTJHINIchjhqTyp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchButton::*)(int32_t)>(&::Rewired::ComponentControls::TouchButton::WOHiDSxDcZEtIpTJHINIchjhqTyp)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818e2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"WOHiDSxDcZEtIpTJHINIchjhqTyp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OteOYIpajuFSzHVIMamKhQObMZOrb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::OteOYIpajuFSzHVIMamKhQObMZOrb)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818e2430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"OteOYIpajuFSzHVIMamKhQObMZOrb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.xhqffxUVwOJpwOhwfYTUbXxHwsof
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchButton::*)(int32_t)>(&::Rewired::ComponentControls::TouchButton::xhqffxUVwOJpwOhwfYTUbXxHwsof)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1818e5020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"xhqffxUVwOJpwOhwfYTUbXxHwsof", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.FZIcSDqtWPzSfBwoVsLbuiAlqHVB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP)>(&::Rewired::ComponentControls::TouchButton::FZIcSDqtWPzSfBwoVsLbuiAlqHVB)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1818e1380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"FZIcSDqtWPzSfBwoVsLbuiAlqHVB", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.SwrdhubagidbxAtKbtxWZmnRJUGlA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP)>(&::Rewired::ComponentControls::TouchButton::SwrdhubagidbxAtKbtxWZmnRJUGlA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818e27f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"SwrdhubagidbxAtKbtxWZmnRJUGlA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.gAnxMrXztHBTFjxkzGLIpzkRoMIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP)>(&::Rewired::ComponentControls::TouchButton::gAnxMrXztHBTFjxkzGLIpzkRoMIR)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1818e38e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"gAnxMrXztHBTFjxkzGLIpzkRoMIR", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.tNggSnZmYarwnrhAKdCyCQSeNSSJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP)>(&::Rewired::ComponentControls::TouchButton::tNggSnZmYarwnrhAKdCyCQSeNSSJ)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818e4cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"tNggSnZmYarwnrhAKdCyCQSeNSSJ", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.pgNjDEQdsmjuDKKMeiVxJuXzCCVFA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(int32_t, ::UnityEngine::Vector2, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP)>(&::Rewired::ComponentControls::TouchButton::pgNjDEQdsmjuDKKMeiVxJuXzCCVFA)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818e3f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"pgNjDEQdsmjuDKKMeiVxJuXzCCVFA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.YvyVOcLZdYNTclMyqCPIPjZZVyjo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::YvyVOcLZdYNTclMyqCPIPjZZVyjo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"YvyVOcLZdYNTclMyqCPIPjZZVyjo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::OnPointerDown)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e1cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::OnPointerUp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e1f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::OnPointerEnter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818e1da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::OnPointerExit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818e1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.BedXhkXxXaXcxKODRdfjnbbpRId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::BedXhkXxXaXcxKODRdfjnbbpRId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e10a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"BedXhkXxXaXcxKODRdfjnbbpRId", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.ruJgCKfZamhgzFwvutgYEmBuhjZT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::ruJgCKfZamhgzFwvutgYEmBuhjZT)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818e47d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ruJgCKfZamhgzFwvutgYEmBuhjZT", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.EMLfkYoKeETYuJDTOAcykWcHpgpPA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::EMLfkYoKeETYuJDTOAcykWcHpgpPA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e12a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"EMLfkYoKeETYuJDTOAcykWcHpgpPA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.wYBoXYVOpjyUWTPNZSqBBARuImwd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchButton::wYBoXYVOpjyUWTPNZSqBBARuImwd)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818e4f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"wYBoXYVOpjyUWTPNZSqBBARuImwd", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.jHIorQXMwYsWtnroBOmxBhZwDqUy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(float_t)>(&::Rewired::ComponentControls::TouchButton::jHIorQXMwYsWtnroBOmxBhZwDqUy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818e3e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"jHIorQXMwYsWtnroBOmxBhZwDqUy", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.zxHJGFnMtSFDAjJVDsKfjeedpbVmA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)(bool)>(&::Rewired::ComponentControls::TouchButton::zxHJGFnMtSFDAjJVDsKfjeedpbVmA)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818e51d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"zxHJGFnMtSFDAjJVDsKfjeedpbVmA", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.OoAQNhBmVMSHFAmPSjoGiEFhDaYG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::OoAQNhBmVMSHFAmPSjoGiEFhDaYG)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e23f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"OoAQNhBmVMSHFAmPSjoGiEFhDaYG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchButton.svPDNlSfIcuFBufhNXdsoiXvikok
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchButton::*)()>(&::Rewired::ComponentControls::TouchButton::svPDNlSfIcuFBufhNXdsoiXvikok)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818e4c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"svPDNlSfIcuFBufhNXdsoiXvikok", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& Rewired::ComponentControls::TouchButton::__cordl_internal_get__targetCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__targetCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__targetCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetCustomControllerElement = value;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonType& Rewired::ComponentControls::TouchButton::__cordl_internal_get__buttonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonType;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonType const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__buttonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonType;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__buttonType(::Rewired::ComponentControls::TouchButton_ButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonType = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__activateOnSwipeIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnSwipeIn;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__activateOnSwipeIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnSwipeIn;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__activateOnSwipeIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateOnSwipeIn = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__stayActiveOnSwipeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayActiveOnSwipeOut;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__stayActiveOnSwipeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayActiveOnSwipeOut;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__stayActiveOnSwipeOut(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stayActiveOnSwipeOut = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__useDigitalAxisSimulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useDigitalAxisSimulation;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__useDigitalAxisSimulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useDigitalAxisSimulation;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__useDigitalAxisSimulation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useDigitalAxisSimulation = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get__digitalAxisGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisGravity;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__digitalAxisGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisGravity;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__digitalAxisGravity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalAxisGravity = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get__digitalAxisSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSensitivity;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__digitalAxisSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSensitivity;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__digitalAxisSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalAxisSensitivity = value;
}
constexpr ::Rewired::Internal::StandaloneAxis*& Rewired::ComponentControls::TouchButton::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::Rewired::Internal::StandaloneAxis* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__axis(::Rewired::Internal::StandaloneAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& Rewired::ComponentControls::TouchButton::__cordl_internal_get__touchRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchRegion;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__touchRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchRegion;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__touchRegion(::UnityW<::Rewired::ComponentControls::TouchRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchRegion = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__useTouchRegionOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTouchRegionOnly;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__useTouchRegionOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTouchRegionOnly;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__useTouchRegionOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTouchRegionOnly = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__moveToTouchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchPosition;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__moveToTouchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchPosition;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__moveToTouchPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveToTouchPosition = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__returnOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnOnRelease;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__returnOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnOnRelease;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__returnOnRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____returnOnRelease = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__followTouchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTouchPosition;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__followTouchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTouchPosition;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__followTouchPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followTouchPosition = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__animateOnMoveToTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnMoveToTouch;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__animateOnMoveToTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnMoveToTouch;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__animateOnMoveToTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animateOnMoveToTouch = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get__moveToTouchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchSpeed;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__moveToTouchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveToTouchSpeed;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__moveToTouchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveToTouchSpeed = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__animateOnReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnReturn;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__animateOnReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateOnReturn;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__animateOnReturn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animateOnReturn = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get__returnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnSpeed;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__returnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____returnSpeed;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__returnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____returnSpeed = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get__manageRaycasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manageRaycasting;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__manageRaycasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manageRaycasting;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__manageRaycasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manageRaycasting = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get_qkXXIRgRVWhIwrNAiHibhFbgJHcSA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qkXXIRgRVWhIwrNAiHibhFbgJHcSA;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_qkXXIRgRVWhIwrNAiHibhFbgJHcSA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qkXXIRgRVWhIwrNAiHibhFbgJHcSA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_qkXXIRgRVWhIwrNAiHibhFbgJHcSA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qkXXIRgRVWhIwrNAiHibhFbgJHcSA = value;
}
constexpr float_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get_xCUllGGLBTbuNwwggDnZAAmFYqQq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xCUllGGLBTbuNwwggDnZAAmFYqQq;
}
constexpr float_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_xCUllGGLBTbuNwwggDnZAAmFYqQq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xCUllGGLBTbuNwwggDnZAAmFYqQq;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_xCUllGGLBTbuNwwggDnZAAmFYqQq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xCUllGGLBTbuNwwggDnZAAmFYqQq = value;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion>& Rewired::ComponentControls::TouchButton::__cordl_internal_get_TlvlJaddKKbOaAlZuZvtmgdTxbkP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TlvlJaddKKbOaAlZuZvtmgdTxbkP;
}
constexpr ::UnityW<::Rewired::ComponentControls::TouchRegion> const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_TlvlJaddKKbOaAlZuZvtmgdTxbkP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TlvlJaddKKbOaAlZuZvtmgdTxbkP;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_TlvlJaddKKbOaAlZuZvtmgdTxbkP(::UnityW<::Rewired::ComponentControls::TouchRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TlvlJaddKKbOaAlZuZvtmgdTxbkP = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchButton::__cordl_internal_get_NhKElCpetxNCUlHJcEosefscFbSgA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NhKElCpetxNCUlHJcEosefscFbSgA;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_NhKElCpetxNCUlHJcEosefscFbSgA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NhKElCpetxNCUlHJcEosefscFbSgA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_NhKElCpetxNCUlHJcEosefscFbSgA(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NhKElCpetxNCUlHJcEosefscFbSgA = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get_CrKDQVhWHnUuszAGrNTsGOQGTRSK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrKDQVhWHnUuszAGrNTsGOQGTRSK;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_CrKDQVhWHnUuszAGrNTsGOQGTRSK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CrKDQVhWHnUuszAGrNTsGOQGTRSK;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_CrKDQVhWHnUuszAGrNTsGOQGTRSK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CrKDQVhWHnUuszAGrNTsGOQGTRSK = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get_glNAKokVyEYlZaSfJDSaqeSRnqPbA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glNAKokVyEYlZaSfJDSaqeSRnqPbA;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_glNAKokVyEYlZaSfJDSaqeSRnqPbA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glNAKokVyEYlZaSfJDSaqeSRnqPbA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_glNAKokVyEYlZaSfJDSaqeSRnqPbA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glNAKokVyEYlZaSfJDSaqeSRnqPbA = value;
}
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO& Rewired::ComponentControls::TouchButton::__cordl_internal_get_ubKZVAJMqkHzVwwBssfMWBwzebzGA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ubKZVAJMqkHzVwwBssfMWBwzebzGA;
}
constexpr ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_ubKZVAJMqkHzVwwBssfMWBwzebzGA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ubKZVAJMqkHzVwwBssfMWBwzebzGA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_ubKZVAJMqkHzVwwBssfMWBwzebzGA(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ubKZVAJMqkHzVwwBssfMWBwzebzGA = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get_pzOEGaOFBNjcAGJpxiorpVdSvPjg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pzOEGaOFBNjcAGJpxiorpVdSvPjg;
}
constexpr int32_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_pzOEGaOFBNjcAGJpxiorpVdSvPjg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pzOEGaOFBNjcAGJpxiorpVdSvPjg;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_pzOEGaOFBNjcAGJpxiorpVdSvPjg(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pzOEGaOFBNjcAGJpxiorpVdSvPjg = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchButton::__cordl_internal_get_GFUjkiJAPccoTHafrcoTLXXyLKisA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GFUjkiJAPccoTHafrcoTLXXyLKisA;
}
constexpr int32_t const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_GFUjkiJAPccoTHafrcoTLXXyLKisA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GFUjkiJAPccoTHafrcoTLXXyLKisA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_GFUjkiJAPccoTHafrcoTLXXyLKisA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GFUjkiJAPccoTHafrcoTLXXyLKisA = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get_SJiPfcdUrTqBocEWYAURLqixvoMi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SJiPfcdUrTqBocEWYAURLqixvoMi;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_SJiPfcdUrTqBocEWYAURLqixvoMi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SJiPfcdUrTqBocEWYAURLqixvoMi;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_SJiPfcdUrTqBocEWYAURLqixvoMi(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SJiPfcdUrTqBocEWYAURLqixvoMi = value;
}
constexpr bool& Rewired::ComponentControls::TouchButton::__cordl_internal_get_mOrzvUlvAelHMFzTweVMBmzMthcy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mOrzvUlvAelHMFzTweVMBmzMthcy;
}
constexpr bool const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_mOrzvUlvAelHMFzTweVMBmzMthcy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mOrzvUlvAelHMFzTweVMBmzMthcy;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_mOrzvUlvAelHMFzTweVMBmzMthcy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mOrzvUlvAelHMFzTweVMBmzMthcy = value;
}
constexpr ::System::Collections::IEnumerator*& Rewired::ComponentControls::TouchButton::__cordl_internal_get_LGJqEglDamnDKXwRRGCPjDjSbsdFA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LGJqEglDamnDKXwRRGCPjDjSbsdFA;
}
constexpr ::System::Collections::IEnumerator* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_LGJqEglDamnDKXwRRGCPjDjSbsdFA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LGJqEglDamnDKXwRRGCPjDjSbsdFA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_LGJqEglDamnDKXwRRGCPjDjSbsdFA(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LGJqEglDamnDKXwRRGCPjDjSbsdFA = value;
}
constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*& Rewired::ComponentControls::TouchButton::__cordl_internal_get_dUEDBZgloiqjavslIAVAgiUUpJjxA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dUEDBZgloiqjavslIAVAgiUUpJjxA;
}
constexpr ::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_dUEDBZgloiqjavslIAVAgiUUpJjxA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dUEDBZgloiqjavslIAVAgiUUpJjxA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_dUEDBZgloiqjavslIAVAgiUUpJjxA(::GlobalNamespace::DqFEdekqxKkWYIisdJDTEhuknscCc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dUEDBZgloiqjavslIAVAgiUUpJjxA = value;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*& Rewired::ComponentControls::TouchButton::__cordl_internal_get_WkPVctNiKBEUnMeRreXWHwmxaEttA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WkPVctNiKBEUnMeRreXWHwmxaEttA;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_WkPVctNiKBEUnMeRreXWHwmxaEttA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WkPVctNiKBEUnMeRreXWHwmxaEttA;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_WkPVctNiKBEUnMeRreXWHwmxaEttA(::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WkPVctNiKBEUnMeRreXWHwmxaEttA = value;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*& Rewired::ComponentControls::TouchButton::__cordl_internal_get_UoydxhjZbDDSFlKwEebrWtsscPFZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UoydxhjZbDDSFlKwEebrWtsscPFZ;
}
constexpr ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_UoydxhjZbDDSFlKwEebrWtsscPFZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UoydxhjZbDDSFlKwEebrWtsscPFZ;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_UoydxhjZbDDSFlKwEebrWtsscPFZ(::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UoydxhjZbDDSFlKwEebrWtsscPFZ = value;
}
constexpr ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onAxisValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAxisValueChanged;
}
constexpr ::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onAxisValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAxisValueChanged;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__onAxisValueChanged(::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAxisValueChanged = value;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onButtonValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onButtonValueChanged;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onButtonValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onButtonValueChanged;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__onButtonValueChanged(::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onButtonValueChanged = value;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onButtonDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onButtonDown;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onButtonDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onButtonDown;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__onButtonDown(::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onButtonDown = value;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onButtonUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onButtonUp;
}
constexpr ::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get__onButtonUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onButtonUp;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set__onButtonUp(::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onButtonUp = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& Rewired::ComponentControls::TouchButton::__cordl_internal_get_lArjqERgvpUmUCEjEfTwjjGcmMop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lArjqERgvpUmUCEjEfTwjjGcmMop;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& Rewired::ComponentControls::TouchButton::__cordl_internal_get_lArjqERgvpUmUCEjEfTwjjGcmMop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lArjqERgvpUmUCEjEfTwjjGcmMop;
}
constexpr void Rewired::ComponentControls::TouchButton::__cordl_internal_set_lArjqERgvpUmUCEjEfTwjjGcmMop(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lArjqERgvpUmUCEjEfTwjjGcmMop = value;
}
inline void Rewired::ComponentControls::TouchButton::add_AxisValueChangedEvent(::UnityEngine::Events::UnityAction_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_AxisValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::remove_AxisValueChangedEvent(::UnityEngine::Events::UnityAction_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_AxisValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::add_ButtonValueChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_ButtonValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::remove_ButtonValueChangedEvent(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_ButtonValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::add_ButtonDownEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_ButtonDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::remove_ButtonDownEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_ButtonDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::add_ButtonUpEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"add_ButtonUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::remove_ButtonUpEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"remove_ButtonUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* Rewired::ComponentControls::TouchButton::get_targetCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_targetCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchButton_ButtonType Rewired::ComponentControls::TouchButton::get_buttonType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_buttonType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchButton_ButtonType>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_buttonType(::Rewired::ComponentControls::TouchButton_ButtonType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_buttonType", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ButtonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_activateOnSwipeIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_activateOnSwipeIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_activateOnSwipeIn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_activateOnSwipeIn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_stayActiveOnSwipeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_stayActiveOnSwipeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_stayActiveOnSwipeOut(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_stayActiveOnSwipeOut", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_useDigitalAxisSimulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_useDigitalAxisSimulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_useDigitalAxisSimulation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_useDigitalAxisSimulation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchButton::get_digitalAxisGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_digitalAxisGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_digitalAxisGravity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_digitalAxisGravity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchButton::get_digitalAxisSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_digitalAxisSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_digitalAxisSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_digitalAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Rewired::ComponentControls::TouchRegion> Rewired::ComponentControls::TouchButton::get_touchRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_touchRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::ComponentControls::TouchRegion>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_touchRegion(::Rewired::ComponentControls::TouchRegion*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_touchRegion", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_useTouchRegionOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_useTouchRegionOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_useTouchRegionOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_useTouchRegionOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_moveToTouchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_moveToTouchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_moveToTouchPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_moveToTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_returnOnRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_returnOnRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_returnOnRelease(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_returnOnRelease", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_followTouchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_followTouchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_followTouchPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_followTouchPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_animateOnMoveToTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_animateOnMoveToTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_animateOnMoveToTouch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_animateOnMoveToTouch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchButton::get_moveToTouchSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_moveToTouchSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_moveToTouchSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_moveToTouchSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_animateOnReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_animateOnReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_animateOnReturn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_animateOnReturn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchButton::get_returnSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_returnSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_returnSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_returnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_manageRaycasting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_manageRaycasting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_manageRaycasting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_manageRaycasting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ComponentControls::TouchButton::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_pointerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::set_pointerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"set_pointerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchButton::get_hasPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_hasPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis* Rewired::ComponentControls::TouchButton::get_axis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"get_axis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis*>(this, ___internal_method);
}
inline ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* Rewired::ComponentControls::TouchButton::JySFkEkVVduzDXgyUYPVtNNlQmMe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"JySFkEkVVduzDXgyUYPVtNNlQmMe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*>(this, ___internal_method);
}
inline ::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>* Rewired::ComponentControls::TouchButton::VXmUGUUEQSHCURGfaIisZoaJDEqHA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"VXmUGUUEQSHCURGfaIisZoaJDEqHA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>*>(this, ___internal_method);
}
inline float_t Rewired::ComponentControls::TouchButton::kujDScPMbjvAAskxvBQIBBacelSG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"kujDScPMbjvAAskxvBQIBBacelSG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::ComponentControls::TouchButton::JNzbdWXJfvmKcIdquoOTfpMfpEiR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"JNzbdWXJfvmKcIdquoOTfpMfpEiR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::utgmQLnUzMrGecPWTEvyAUzydRAhA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"utgmQLnUzMrGecPWTEvyAUzydRAhA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::VoBxjyPojqjFbhubHnmLNMViLfLkA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"VoBxjyPojqjFbhubHnmLNMViLfLkA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::ComponentControls::TouchButton::bgeAqpSfAoTpquDkiqTgIPBcYqzn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"bgeAqpSfAoTpquDkiqTgIPBcYqzn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::SetRawValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"SetRawValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchButton::SetDefaultPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"SetDefaultPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::fbJiuOEgGgDaLvsPUKeviuqHokFmB(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"fbJiuOEgGgDaLvsPUKeviuqHokFmB", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::ReturnToDefaultPosition(bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ReturnToDefaultPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instant);
}
inline void Rewired::ComponentControls::TouchButton::ReturnToDefaultPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ReturnToDefaultPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnCustomControllerUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnSubscribeEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnUnsubscribeEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnSetProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnClear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::ClearValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::IsPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::IsThisOrTouchRegionGameObject(::UnityEngine::GameObject*  gameObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject);
}
inline void Rewired::ComponentControls::TouchButton::qyKRKAMGCqlaBnJXSdZCBEQNoVrKA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"qyKRKAMGCqlaBnJXSdZCBEQNoVrKA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::pyDNVNHGaiyZoFNEMqDJMUKArdEc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"pyDNVNHGaiyZoFNEMqDJMUKArdEc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::cbKjkHqVSDKteAKmdfJxHRPJHiqk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"cbKjkHqVSDKteAKmdfJxHRPJHiqk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::HfCwPZUYYOAAuSVVBEBjdKZGZMCb(float_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"HfCwPZUYYOAAuSVVBEBjdKZGZMCb", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchButton::rCutgovtWyrzIKsgiZYvJNWvhQg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"rCutgovtWyrzIKsgiZYvJNWvhQg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::HEQJNGBYVIPvbYFlhsyjQXTKclkr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"HEQJNGBYVIPvbYFlhsyjQXTKclkr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::zfMdnqFIsicXxmUvkUjQBwEoJmuX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"zfMdnqFIsicXxmUvkUjQBwEoJmuX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::FjcrSoCtFPSZYzNOSNvyRipjaqxEA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"FjcrSoCtFPSZYzNOSNvyRipjaqxEA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::XVAPKPgoBZASJFOmzqlIvLojgfNRA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"XVAPKPgoBZASJFOmzqlIvLojgfNRA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::iySYfOAetXhJQBywABPhtLABHKbO(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"iySYfOAetXhJQBywABPhtLABHKbO", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::hsxHaDUnNbWzBTPtMMKnVdwYslke(::Rewired::ComponentControls::TouchRegion*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"hsxHaDUnNbWzBTPtMMKnVdwYslke", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::tbRAYSaJrrjSXEXFlWNjbiRfGnCKc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"tbRAYSaJrrjSXEXFlWNjbiRfGnCKc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::riuFeUreUIBJUTRhzfXhBWsaddTCA(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"riuFeUreUIBJUTRhzfXhBWsaddTCA", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::ComponentControls::TouchButton::WZlsldGNrFoxFNZTkfYHpLDBJJrD(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"WZlsldGNrFoxFNZTkfYHpLDBJJrD", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline ::System::Collections::IEnumerator* Rewired::ComponentControls::TouchButton::facgCiPlJwfBtefDBGPumHysCusDA(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"facgCiPlJwfBtefDBGPumHysCusDA", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::ComponentControls::TouchButton::rFMyvpDDHAmDMrUylJLBDGQzgxrj(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::UI::PositionType  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"rFMyvpDDHAmDMrUylJLBDGQzgxrj", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::Utils::UI::PositionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ComponentControls::TouchButton::cLpXkFqwrFnLVHpTjuqEqxkjUp(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"cLpXkFqwrFnLVHpTjuqEqxkjUp", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::UCLHnBwPQttIRcmgzjjIrKfHCEkI(::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"UCLHnBwPQttIRcmgzjjIrKfHCEkI", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchButton_ptveuPOBpmaNEXcHnQGLtBtLeyuO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::mxAyjRwmchZklyoKYFolyvxhQgGD(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"mxAyjRwmchZklyoKYFolyvxhQgGD", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::eTYcagUYSqAzgvihGwtlDdWezZdv()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"eTYcagUYSqAzgvihGwtlDdWezZdv", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::NZaMximVLZoBicfcNRUNUCLYQItx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"NZaMximVLZoBicfcNRUNUCLYQItx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::TwRgqOGFAqxFTdOpNxOgABVKnVZq()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"TwRgqOGFAqxFTdOpNxOgABVKnVZq", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::PVrGJqryzvCcteUEJSBkiCtjEZLaA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"PVrGJqryzvCcteUEJSBkiCtjEZLaA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchButton::OwmFIICDsOllwcCjeiclaskmwgPWB(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"OwmFIICDsOllwcCjeiclaskmwgPWB", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchButton::ZixoPXNjgDGduSRfAqHojyGDpyVC(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ZixoPXNjgDGduSRfAqHojyGDpyVC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchButton::WOHiDSxDcZEtIpTJHINIchjhqTyp(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"WOHiDSxDcZEtIpTJHINIchjhqTyp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::OteOYIpajuFSzHVIMamKhQObMZOrb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"OteOYIpajuFSzHVIMamKhQObMZOrb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchButton::xhqffxUVwOJpwOhwfYTUbXxHwsof(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"xhqffxUVwOJpwOhwfYTUbXxHwsof", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::FZIcSDqtWPzSfBwoVsLbuiAlqHVB(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"FZIcSDqtWPzSfBwoVsLbuiAlqHVB", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchButton::SwrdhubagidbxAtKbtxWZmnRJUGlA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"SwrdhubagidbxAtKbtxWZmnRJUGlA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchButton::gAnxMrXztHBTFjxkzGLIpzkRoMIR(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"gAnxMrXztHBTFjxkzGLIpzkRoMIR", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchButton::tNggSnZmYarwnrhAKdCyCQSeNSSJ(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"tNggSnZmYarwnrhAKdCyCQSeNSSJ", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchButton::pgNjDEQdsmjuDKKMeiVxJuXzCCVFA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"pgNjDEQdsmjuDKKMeiVxJuXzCCVFA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Rewired::ComponentControls::TouchButton_vrpWJBPlivNOUKrRiolsfmSSMUeP>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ComponentControls::TouchButton::YvyVOcLZdYNTclMyqCPIPjZZVyjo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"YvyVOcLZdYNTclMyqCPIPjZZVyjo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchButton::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchButton::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchButton::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchButton::BedXhkXxXaXcxKODRdfjnbbpRId(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"BedXhkXxXaXcxKODRdfjnbbpRId", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::ruJgCKfZamhgzFwvutgYEmBuhjZT(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"ruJgCKfZamhgzFwvutgYEmBuhjZT", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::EMLfkYoKeETYuJDTOAcykWcHpgpPA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"EMLfkYoKeETYuJDTOAcykWcHpgpPA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::wYBoXYVOpjyUWTPNZSqBBARuImwd(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"wYBoXYVOpjyUWTPNZSqBBARuImwd", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::jHIorQXMwYsWtnroBOmxBhZwDqUy(float_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"jHIorQXMwYsWtnroBOmxBhZwDqUy", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::zxHJGFnMtSFDAjJVDsKfjeedpbVmA(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"zxHJGFnMtSFDAjJVDsKfjeedpbVmA", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchButton::OoAQNhBmVMSHFAmPSjoGiEFhDaYG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"OoAQNhBmVMSHFAmPSjoGiEFhDaYG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchButton::svPDNlSfIcuFBufhNXdsoiXvikok()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchButton*>(),
                        {"svPDNlSfIcuFBufhNXdsoiXvikok", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchButton* Rewired::ComponentControls::TouchButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchButton*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchButton::TouchButton()   {
}
