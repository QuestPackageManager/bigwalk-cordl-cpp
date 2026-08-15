#pragma once
// IWYU pragma private; include "Rewired/ControllerSetSelector.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerSetSelector_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "Rewired/zzzz__ControllerSetSelector_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerSetSelector_Type::ControllerSetSelector_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerSetSelector_Type::ControllerSetSelector_Type()   {
}
constexpr ::Rewired::ControllerSetSelector_Type  Rewired::ControllerSetSelector_Type::All{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ControllerSetSelector_Type  Rewired::ControllerSetSelector_Type::ControllerType{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ControllerSetSelector_Type  Rewired::ControllerSetSelector_Type::HardwareType{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ControllerSetSelector_Type  Rewired::ControllerSetSelector_Type::ControllerTemplateType{static_cast<int32_t>(0x3)};
constexpr ::Rewired::ControllerSetSelector_Type  Rewired::ControllerSetSelector_Type::PersistentControllerInstance{static_cast<int32_t>(0x4)};
constexpr ::Rewired::ControllerSetSelector_Type  Rewired::ControllerSetSelector_Type::SessionControllerInstance{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::Rewired::ControllerSetSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::Rewired::ControllerSetSelector_Type)>(&::Rewired::ControllerSetSelector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18183f180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814fa6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::Rewired::ControllerSetSelector*)>(&::Rewired::ControllerSetSelector::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18183f190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::Rewired::ControllerSetSelector_Type, ::Rewired::ControllerType, ::StringW, ::StringW, int32_t)>(&::Rewired::ControllerSetSelector::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18183f200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.IkQGkQAlevuQmkjqsTpXAyLPULYqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::IkQGkQAlevuQmkjqsTpXAyLPULYqA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814bcdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"IkQGkQAlevuQmkjqsTpXAyLPULYqA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector_Type (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::get_type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.set_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::Rewired::ControllerSetSelector_Type)>(&::Rewired::ControllerSetSelector::set_type)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18183f4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_type", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.set_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::Rewired::ControllerType)>(&::Rewired::ControllerSetSelector::set_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.get_hardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::get_hardwareTypeGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18183f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_hardwareTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.set_hardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::System::Guid)>(&::Rewired::ControllerSetSelector::set_hardwareTypeGuid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183f430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_hardwareTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.get_hardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::get_hardwareIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.set_hardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::StringW)>(&::Rewired::ControllerSetSelector::set_hardwareIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_hardwareIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.get_controllerTemplateTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::get_controllerTemplateTypeGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18183f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_controllerTemplateTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.set_controllerTemplateTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::System::Guid)>(&::Rewired::ControllerSetSelector::set_controllerTemplateTypeGuid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_controllerTemplateTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18183f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.set_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(::System::Guid)>(&::Rewired::ControllerSetSelector::set_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183f3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::get_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.set_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)(int32_t)>(&::Rewired::ControllerSetSelector::set_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerSetSelector::*)(::Rewired::Controller*)>(&::Rewired::ControllerSetSelector::Matches)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18183e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"Matches", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::ToString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18183efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                    {::i2c::class_of<::Rewired::ControllerSetSelector*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.PgvElNZFUOSaEuBnnluhbhACJJMQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::PgvElNZFUOSaEuBnnluhbhACJJMQ)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18183e700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"PgvElNZFUOSaEuBnnluhbhACJJMQ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18183f130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.Rewired_Utils_Interfaces_IDeepCloneable_DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerSetSelector::*)()>(&::Rewired::ControllerSetSelector::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18183e750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)()>(&::Rewired::ControllerSetSelector::SelectAll)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18183e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectControllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::ControllerType)>(&::Rewired::ControllerSetSelector::SelectControllerType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18183eaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectControllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectHardwareType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::ControllerType, ::System::Guid, ::StringW)>(&::Rewired::ControllerSetSelector::SelectHardwareType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18183eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectHardwareType", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectHardwareType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::Controller*)>(&::Rewired::ControllerSetSelector::SelectHardwareType)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18183ec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectHardwareType", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectControllerTemplateType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::ControllerType, ::System::Guid)>(&::Rewired::ControllerSetSelector::SelectControllerTemplateType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18183e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectControllerTemplateType", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectControllerTemplateType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::IControllerTemplate*)>(&::Rewired::ControllerSetSelector::SelectControllerTemplateType)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18183e8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectControllerTemplateType", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectPersistentControllerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::ControllerType, ::System::Guid)>(&::Rewired::ControllerSetSelector::SelectPersistentControllerInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18183ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectPersistentControllerInstance", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectPersistentControllerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::Controller*)>(&::Rewired::ControllerSetSelector::SelectPersistentControllerInstance)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18183ee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectPersistentControllerInstance", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectSessionControllerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::ControllerType, int32_t)>(&::Rewired::ControllerSetSelector::SelectSessionControllerInstance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18183ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectSessionControllerInstance", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerSetSelector.SelectSessionControllerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (*)(::Rewired::Controller*)>(&::Rewired::ControllerSetSelector::SelectSessionControllerInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18183ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectSessionControllerInstance", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerSetSelector_Type& Rewired::ControllerSetSelector::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::Rewired::ControllerSetSelector_Type const& Rewired::ControllerSetSelector::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void Rewired::ControllerSetSelector::__cordl_internal_set__type(::Rewired::ControllerSetSelector_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::Rewired::ControllerType& Rewired::ControllerSetSelector::__cordl_internal_get__controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr ::Rewired::ControllerType const& Rewired::ControllerSetSelector::__cordl_internal_get__controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr void Rewired::ControllerSetSelector::__cordl_internal_set__controllerType(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerType = value;
}
constexpr ::StringW& Rewired::ControllerSetSelector::__cordl_internal_get__guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guid;
}
constexpr ::StringW const& Rewired::ControllerSetSelector::__cordl_internal_get__guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guid;
}
constexpr void Rewired::ControllerSetSelector::__cordl_internal_set__guid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guid = value;
}
constexpr ::StringW& Rewired::ControllerSetSelector::__cordl_internal_get__hardwareIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareIdentifier;
}
constexpr ::StringW const& Rewired::ControllerSetSelector::__cordl_internal_get__hardwareIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareIdentifier;
}
constexpr void Rewired::ControllerSetSelector::__cordl_internal_set__hardwareIdentifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardwareIdentifier = value;
}
constexpr int32_t& Rewired::ControllerSetSelector::__cordl_internal_get__controllerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerId;
}
constexpr int32_t const& Rewired::ControllerSetSelector::__cordl_internal_get__controllerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerId;
}
constexpr void Rewired::ControllerSetSelector::__cordl_internal_set__controllerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerId = value;
}
constexpr ::System::Guid& Rewired::ControllerSetSelector::__cordl_internal_get_sQPfAnXKMaXkEoOuHkkXcehLcliU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sQPfAnXKMaXkEoOuHkkXcehLcliU;
}
constexpr ::System::Guid const& Rewired::ControllerSetSelector::__cordl_internal_get_sQPfAnXKMaXkEoOuHkkXcehLcliU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sQPfAnXKMaXkEoOuHkkXcehLcliU;
}
constexpr void Rewired::ControllerSetSelector::__cordl_internal_set_sQPfAnXKMaXkEoOuHkkXcehLcliU(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sQPfAnXKMaXkEoOuHkkXcehLcliU = value;
}
inline void Rewired::ControllerSetSelector::_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerSetSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::_ctor(::Rewired::ControllerSetSelector*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerSetSelector::_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline bool Rewired::ControllerSetSelector::IkQGkQAlevuQmkjqsTpXAyLPULYqA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"IkQGkQAlevuQmkjqsTpXAyLPULYqA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerSetSelector_Type Rewired::ControllerSetSelector::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector_Type>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::set_type(::Rewired::ControllerSetSelector_Type  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_type", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerType Rewired::ControllerSetSelector::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::set_controllerType(::Rewired::ControllerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::ControllerSetSelector::get_hardwareTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_hardwareTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::set_hardwareTypeGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_hardwareTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerSetSelector::get_hardwareIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::set_hardwareIdentifier(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_hardwareIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::ControllerSetSelector::get_controllerTemplateTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_controllerTemplateTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::set_controllerTemplateTypeGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_controllerTemplateTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::ControllerSetSelector::get_deviceInstanceGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::set_deviceInstanceGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerSetSelector::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::set_controllerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ControllerSetSelector::Matches(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"Matches", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controller);
}
inline ::StringW Rewired::ControllerSetSelector::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerSetSelector*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::PgvElNZFUOSaEuBnnluhbhACJJMQ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"PgvElNZFUOSaEuBnnluhbhACJJMQ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerSetSelector::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerSetSelector::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectControllerType(::Rewired::ControllerType  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectControllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controllerType);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectHardwareType(::Rewired::ControllerType  controllerType, ::System::Guid  hardwareTypeGuid, ::StringW  hardwareIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectHardwareType", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controllerType, hardwareTypeGuid, hardwareIdentifier);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectHardwareType(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectHardwareType", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controller);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectControllerTemplateType(::Rewired::ControllerType  controllerType, ::System::Guid  controllerTemplateTypeGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectControllerTemplateType", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controllerType, controllerTemplateTypeGuid);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectControllerTemplateType(::Rewired::IControllerTemplate*  controllerTemplate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectControllerTemplateType", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controllerTemplate);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectPersistentControllerInstance(::Rewired::ControllerType  controllerType, ::System::Guid  deviceInstanceGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectPersistentControllerInstance", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controllerType, deviceInstanceGuid);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectPersistentControllerInstance(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectPersistentControllerInstance", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controller);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectSessionControllerInstance(::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectSessionControllerInstance", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controllerType, controllerId);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::SelectSessionControllerInstance(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerSetSelector*>(),
                        {"SelectSessionControllerInstance", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(nullptr, ___internal_method, controller);
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::New_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerSetSelector*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerSetSelector*>());
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::New_ctor(::Rewired::ControllerSetSelector*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerSetSelector*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerSetSelector* Rewired::ControllerSetSelector::New_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerSetSelector*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  Rewired::ControllerSetSelector::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* Rewired::ControllerSetSelector::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr  Rewired::ControllerSetSelector::operator ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* Rewired::ControllerSetSelector::i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerSetSelector::ControllerSetSelector()   {
}
