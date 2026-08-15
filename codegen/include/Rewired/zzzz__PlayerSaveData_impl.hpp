#pragma once
// IWYU pragma private; include "Rewired/PlayerSaveData.hpp"
#include "Rewired/zzzz__CustomControllerMapSaveData_impl.hpp"
#include "Rewired/zzzz__InputBehavior_impl.hpp"
#include "Rewired/zzzz__JoystickMapSaveData_impl.hpp"
#include "Rewired/zzzz__KeyboardMapSaveData_impl.hpp"
#include "Rewired/zzzz__MouseMapSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__PlayerSaveData_def.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
#include "Rewired/zzzz__CustomControllerMapSaveData_def.hpp"
#include "Rewired/zzzz__InputBehavior_def.hpp"
#include "Rewired/zzzz__JoystickMapSaveData_def.hpp"
#include "Rewired/zzzz__KeyboardMapSaveData_def.hpp"
#include "Rewired/zzzz__MouseMapSaveData_def.hpp"
#include "Rewired/zzzz__PlayerSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_joystickMapSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::JoystickMapSaveData*> (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_joystickMapSaveData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_joystickMapSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_keyboardMapSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::KeyboardMapSaveData*> (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_keyboardMapSaveData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_keyboardMapSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_mouseMapSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::MouseMapSaveData*> (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_mouseMapSaveData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_mouseMapSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_customControllerMapSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::CustomControllerMapSaveData*> (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_customControllerMapSaveData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_customControllerMapSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_inputBehaviors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::InputBehavior*> (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_inputBehaviors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_inputBehaviors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_joystickMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_joystickMapCount)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180cbd2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_joystickMapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_keyboardMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_keyboardMapCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819b98a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_keyboardMapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_mouseMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_mouseMapCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a9050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_mouseMapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_customControllerMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_customControllerMapCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803aba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_customControllerMapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_inputBehaviorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_inputBehaviorCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818d0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_inputBehaviorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData.get_AllControllerMapSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>* (::Rewired::PlayerSaveData::*)()>(&::Rewired::PlayerSaveData::get_AllControllerMapSaveData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819b9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_AllControllerMapSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerSaveData::*)(::ArrayW<::Rewired::JoystickMapSaveData*>, ::ArrayW<::Rewired::KeyboardMapSaveData*>, ::ArrayW<::Rewired::MouseMapSaveData*>, ::ArrayW<::Rewired::CustomControllerMapSaveData*>, ::System::Collections::Generic::IList_1<::Rewired::InputBehavior*>*)>(&::Rewired::PlayerSaveData::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1819b9670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Rewired::JoystickMapSaveData*>>(), ::i2c::type_of<::ArrayW<::Rewired::KeyboardMapSaveData*>>(), ::i2c::type_of<::ArrayW<::Rewired::MouseMapSaveData*>>(), ::i2c::type_of<::ArrayW<::Rewired::CustomControllerMapSaveData*>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::InputBehavior*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::Rewired::JoystickMapSaveData*> Rewired::PlayerSaveData::get_joystickMapSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_joystickMapSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::JoystickMapSaveData*>>(*this, ___internal_method);
}
inline ::ArrayW<::Rewired::KeyboardMapSaveData*> Rewired::PlayerSaveData::get_keyboardMapSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_keyboardMapSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::KeyboardMapSaveData*>>(*this, ___internal_method);
}
inline ::ArrayW<::Rewired::MouseMapSaveData*> Rewired::PlayerSaveData::get_mouseMapSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_mouseMapSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::MouseMapSaveData*>>(*this, ___internal_method);
}
inline ::ArrayW<::Rewired::CustomControllerMapSaveData*> Rewired::PlayerSaveData::get_customControllerMapSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_customControllerMapSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::CustomControllerMapSaveData*>>(*this, ___internal_method);
}
inline ::ArrayW<::Rewired::InputBehavior*> Rewired::PlayerSaveData::get_inputBehaviors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_inputBehaviors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::InputBehavior*>>(*this, ___internal_method);
}
inline int32_t Rewired::PlayerSaveData::get_joystickMapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_joystickMapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::PlayerSaveData::get_keyboardMapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_keyboardMapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::PlayerSaveData::get_mouseMapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_mouseMapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::PlayerSaveData::get_customControllerMapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_customControllerMapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::PlayerSaveData::get_inputBehaviorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_inputBehaviorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>* Rewired::PlayerSaveData::get_AllControllerMapSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {"get_AllControllerMapSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>*>(*this, ___internal_method);
}
inline void Rewired::PlayerSaveData::_ctor(::ArrayW<::Rewired::JoystickMapSaveData*>  _cordl_fixed_empty_name_whitespace, ::ArrayW<::Rewired::KeyboardMapSaveData*>  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::MouseMapSaveData*>  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::CustomControllerMapSaveData*>  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::IList_1<::Rewired::InputBehavior*>*  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Rewired::JoystickMapSaveData*>>(), ::i2c::type_of<::ArrayW<::Rewired::KeyboardMapSaveData*>>(), ::i2c::type_of<::ArrayW<::Rewired::MouseMapSaveData*>>(), ::i2c::type_of<::ArrayW<::Rewired::CustomControllerMapSaveData*>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::InputBehavior*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
// Ctor Parameters [CppParam { name: "tcYuVSRUYBQgRYOmEIEKQMdQheIK", ty: "::ArrayW<::Rewired::JoystickMapSaveData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "IhThRItEiKqyLgAcrsGjdqivWnVS", ty: "::ArrayW<::Rewired::KeyboardMapSaveData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "kovBnTVrJCamqaAISZwmNVRZxbgSA", ty: "::ArrayW<::Rewired::MouseMapSaveData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "haBuoIZzeeKonTmHdbTWhNLnxyeCA", ty: "::ArrayW<::Rewired::CustomControllerMapSaveData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "nOkrwMdfIWXUtsatbNGETekOWnK", ty: "::ArrayW<::Rewired::InputBehavior*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::PlayerSaveData::PlayerSaveData(::ArrayW<::Rewired::JoystickMapSaveData*>  tcYuVSRUYBQgRYOmEIEKQMdQheIK, ::ArrayW<::Rewired::KeyboardMapSaveData*>  IhThRItEiKqyLgAcrsGjdqivWnVS, ::ArrayW<::Rewired::MouseMapSaveData*>  kovBnTVrJCamqaAISZwmNVRZxbgSA, ::ArrayW<::Rewired::CustomControllerMapSaveData*>  haBuoIZzeeKonTmHdbTWhNLnxyeCA, ::ArrayW<::Rewired::InputBehavior*>  nOkrwMdfIWXUtsatbNGETekOWnK) noexcept  {
this->tcYuVSRUYBQgRYOmEIEKQMdQheIK = tcYuVSRUYBQgRYOmEIEKQMdQheIK;
this->IhThRItEiKqyLgAcrsGjdqivWnVS = IhThRItEiKqyLgAcrsGjdqivWnVS;
this->kovBnTVrJCamqaAISZwmNVRZxbgSA = kovBnTVrJCamqaAISZwmNVRZxbgSA;
this->haBuoIZzeeKonTmHdbTWhNLnxyeCA = haBuoIZzeeKonTmHdbTWhNLnxyeCA;
this->nOkrwMdfIWXUtsatbNGETekOWnK = nOkrwMdfIWXUtsatbNGETekOWnK;
}
// Ctor Parameters []
constexpr ::Rewired::PlayerSaveData::PlayerSaveData()   {
}
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)(int32_t)>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)()>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)()>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::MoveNext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1819b8100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE.System_Collections_Generic_IEnumerator_Rewired_ControllerMapSaveData__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMapSaveData* (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)()>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_Generic_IEnumerator_Rewired_ControllerMapSaveData__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerMapSaveData>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)()>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)()>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE.System_Collections_Generic_IEnumerable_Rewired_ControllerMapSaveData__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>* (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)()>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_Generic_IEnumerable_Rewired_ControllerMapSaveData__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819b8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerMapSaveData>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::*)()>(&::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819b8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_lVSIhfaEQyEjipRLdbuQnzPBBKtj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lVSIhfaEQyEjipRLdbuQnzPBBKtj;
}
constexpr int32_t const& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_lVSIhfaEQyEjipRLdbuQnzPBBKtj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lVSIhfaEQyEjipRLdbuQnzPBBKtj;
}
constexpr void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_set_lVSIhfaEQyEjipRLdbuQnzPBBKtj(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lVSIhfaEQyEjipRLdbuQnzPBBKtj = value;
}
constexpr ::Rewired::ControllerMapSaveData*& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_VBZrwmzvBmouEGawYgYwqumkRMAl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VBZrwmzvBmouEGawYgYwqumkRMAl;
}
constexpr ::Rewired::ControllerMapSaveData* const& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_VBZrwmzvBmouEGawYgYwqumkRMAl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VBZrwmzvBmouEGawYgYwqumkRMAl;
}
constexpr void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_set_VBZrwmzvBmouEGawYgYwqumkRMAl(::Rewired::ControllerMapSaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VBZrwmzvBmouEGawYgYwqumkRMAl = value;
}
constexpr int32_t& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_nbUAoNBOwczTDzPFquVSMPQuSzgp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbUAoNBOwczTDzPFquVSMPQuSzgp;
}
constexpr int32_t const& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_nbUAoNBOwczTDzPFquVSMPQuSzgp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbUAoNBOwczTDzPFquVSMPQuSzgp;
}
constexpr void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_set_nbUAoNBOwczTDzPFquVSMPQuSzgp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nbUAoNBOwczTDzPFquVSMPQuSzgp = value;
}
constexpr ::Rewired::PlayerSaveData& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_KmzmBdrwPxnJylYlmWBqHBNpWGKE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KmzmBdrwPxnJylYlmWBqHBNpWGKE;
}
constexpr ::Rewired::PlayerSaveData const& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_KmzmBdrwPxnJylYlmWBqHBNpWGKE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KmzmBdrwPxnJylYlmWBqHBNpWGKE;
}
constexpr void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_set_KmzmBdrwPxnJylYlmWBqHBNpWGKE(::Rewired::PlayerSaveData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KmzmBdrwPxnJylYlmWBqHBNpWGKE = value;
}
constexpr ::Rewired::PlayerSaveData& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_dDLhMjpEMPjWfdpUEQMPkEXTRrqr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dDLhMjpEMPjWfdpUEQMPkEXTRrqr;
}
constexpr ::Rewired::PlayerSaveData const& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_dDLhMjpEMPjWfdpUEQMPkEXTRrqr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dDLhMjpEMPjWfdpUEQMPkEXTRrqr;
}
constexpr void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_set_dDLhMjpEMPjWfdpUEQMPkEXTRrqr(::Rewired::PlayerSaveData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dDLhMjpEMPjWfdpUEQMPkEXTRrqr = value;
}
constexpr int32_t& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_jpYDVYijwCHKYQNwinYloxCkddYJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jpYDVYijwCHKYQNwinYloxCkddYJ;
}
constexpr int32_t const& Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_get_jpYDVYijwCHKYQNwinYloxCkddYJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jpYDVYijwCHKYQNwinYloxCkddYJ;
}
constexpr void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::__cordl_internal_set_jpYDVYijwCHKYQNwinYloxCkddYJ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jpYDVYijwCHKYQNwinYloxCkddYJ = value;
}
inline void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerMapSaveData* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_Generic_IEnumerator_Rewired_ControllerMapSaveData__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerMapSaveData>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMapSaveData*>(this, ___internal_method);
}
inline void Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_Generic_IEnumerable_Rewired_ControllerMapSaveData__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerMapSaveData>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>"
constexpr  Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerMapSaveData__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerMapSaveData*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>"
constexpr  Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerMapSaveData__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerMapSaveData*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE::PlayerSaveData_GFjRHKWGKbEwwupMcwgFLTyKavoE()   {
}
