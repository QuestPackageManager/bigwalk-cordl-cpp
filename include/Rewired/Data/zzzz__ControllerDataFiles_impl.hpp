#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerDataFiles.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickTemplateMap_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rewired/Data/zzzz__ControllerDataFiles_def.hpp"
#include "GlobalNamespace/zzzz__TcdPIZMIwGFYJfZZOMhQGedCCqvbA_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareControllerTemplateMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickTemplateMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerTemplateMap_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ADictionary_2_def.hpp"
#include "Rewired/zzzz__BridgedControllerHWInfo_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementIdentifier_def.hpp"
#include "Rewired/zzzz__HardwareJoystickMap_InputManager_def.hpp"
#include "Rewired/zzzz__InputPlatform_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.get_defaultHardwareJoystickMapGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::get_defaultHardwareJoystickMapGuid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18187bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_defaultHardwareJoystickMapGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.get_JoystickTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::get_JoystickTemplates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_JoystickTemplates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.set_JoystickTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerDataFiles::*)(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>)>(&::Rewired::Data::ControllerDataFiles::set_JoystickTemplates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"set_JoystickTemplates", {}, {::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.get_HardwareJoystickMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::get_HardwareJoystickMaps)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_HardwareJoystickMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.set_HardwareJoystickMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerDataFiles::*)(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap*>)>(&::Rewired::Data::ControllerDataFiles::set_HardwareJoystickMaps)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"set_HardwareJoystickMaps", {}, {::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.get_DefaultHardwareJoystickMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::get_DefaultHardwareJoystickMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_DefaultHardwareJoystickMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.set_DefaultHardwareJoystickMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerDataFiles::*)(::Rewired::Data::Mapping::HardwareJoystickMap*)>(&::Rewired::Data::ControllerDataFiles::set_DefaultHardwareJoystickMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"set_DefaultHardwareJoystickMap", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18187bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetJoystickNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::GetJoystickNames)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18187b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetEditorJoystickNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::GetEditorJoystickNames)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18187b210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetEditorJoystickNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetJoystickGuids
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Guid> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::GetJoystickGuids)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18187b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickGuids", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetJoystickTemplateNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::GetJoystickTemplateNames)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18187b8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickTemplateNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetJoystickTemplateGuids
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Guid> (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::GetJoystickTemplateGuids)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18187b7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickTemplateGuids", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetHardwareJoystickMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> (::Rewired::Data::ControllerDataFiles::*)(::System::Guid)>(&::Rewired::Data::ControllerDataFiles::GetHardwareJoystickMap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18187b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetHardwareJoystickMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetJoystickTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> (::Rewired::Data::ControllerDataFiles::*)(::System::Guid)>(&::Rewired::Data::ControllerDataFiles::GetJoystickTemplate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18187b9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickTemplate", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetControllerTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::IHardwareControllerTemplateMap* (::Rewired::Data::ControllerDataFiles::*)(::System::Guid)>(&::Rewired::Data::ControllerDataFiles::GetControllerTemplate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187b1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetControllerTemplate", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.GetHardwareJoystickOrTemplateMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::IHardwareControllerMap* (::Rewired::Data::ControllerDataFiles::*)(::System::Guid)>(&::Rewired::Data::ControllerDataFiles::GetHardwareJoystickOrTemplateMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18187b4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetHardwareJoystickOrTemplateMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.aTbzmaEqtiABFKMRXSsqDEZWpftn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementIdentifier* (::Rewired::Data::ControllerDataFiles::*)(::System::Guid, int32_t, ::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap*>)>(&::Rewired::Data::ControllerDataFiles::aTbzmaEqtiABFKMRXSsqDEZWpftn)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18187bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"aTbzmaEqtiABFKMRXSsqDEZWpftn", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.sflcEoDiTzcOQGIoAuITeHCrRMaZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerDataFiles::*)(::System::Guid, ::System::Guid, int32_t, ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj>*)>(&::Rewired::Data::ControllerDataFiles::sflcEoDiTzcOQGIoAuITeHCrRMaZ)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18187c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"sflcEoDiTzcOQGIoAuITeHCrRMaZ", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.qbJPYNSxYMoIuNQNCAgHTnjgEAsE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareJoystickMap_InputManager* (::Rewired::Data::ControllerDataFiles::*)(::System::Guid, ::Rewired::InputSource)>(&::Rewired::Data::ControllerDataFiles::qbJPYNSxYMoIuNQNCAgHTnjgEAsE)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18187c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"qbJPYNSxYMoIuNQNCAgHTnjgEAsE", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::Rewired::InputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.kavrrpaoFifjuzIIoiRltFIdjJkiA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareJoystickMap_InputManager* (::Rewired::Data::ControllerDataFiles::*)(::Rewired::BridgedControllerHWInfo*)>(&::Rewired::Data::ControllerDataFiles::kavrrpaoFifjuzIIoiRltFIdjJkiA)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18187c030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"kavrrpaoFifjuzIIoiRltFIdjJkiA", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.hCCZNqEgwtoNEMyxvaOhqhxsojNL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareJoystickMap_InputManager* (::Rewired::Data::ControllerDataFiles::*)(::Rewired::Data::Mapping::HardwareJoystickMap*, ::Rewired::BridgedControllerHWInfo*, bool, ::by_ref<::Rewired::InputPlatform>, ::by_ref<int32_t>, ::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>)>(&::Rewired::Data::ControllerDataFiles::hCCZNqEgwtoNEMyxvaOhqhxsojNL)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18187bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"hCCZNqEgwtoNEMyxvaOhqhxsojNL", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap*>(), ::i2c::type_of<::Rewired::BridgedControllerHWInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Rewired::InputPlatform>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.wsUOtMlGWzrNAurQAYspkRWfZoQF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareJoystickMap_InputManager* (::Rewired::Data::ControllerDataFiles::*)(::Rewired::BridgedControllerHWInfo*, ::StringW)>(&::Rewired::Data::ControllerDataFiles::wsUOtMlGWzrNAurQAYspkRWfZoQF)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18187c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"wsUOtMlGWzrNAurQAYspkRWfZoQF", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.HFOERZekyIkrKOWqJhYAOjREbvzGb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareJoystickMap_InputManager* (::Rewired::Data::ControllerDataFiles::*)(::Rewired::BridgedControllerHWInfo*)>(&::Rewired::Data::ControllerDataFiles::HFOERZekyIkrKOWqJhYAOjREbvzGb)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18187bab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"HFOERZekyIkrKOWqJhYAOjREbvzGb", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.cnrrMZjYSARCRiBZcfxJxKzHztBA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA* (::Rewired::Data::ControllerDataFiles::*)(::System::Guid)>(&::Rewired::Data::ControllerDataFiles::cnrrMZjYSARCRiBZcfxJxKzHztBA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18187bde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"cnrrMZjYSARCRiBZcfxJxKzHztBA", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.zmBHvcaKJldcFBiIEjDodTutkiKf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::IHardwareControllerTemplateMap* (::Rewired::Data::ControllerDataFiles::*)(::System::Guid)>(&::Rewired::Data::ControllerDataFiles::zmBHvcaKJldcFBiIEjDodTutkiKf)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"zmBHvcaKJldcFBiIEjDodTutkiKf", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerDataFiles.zXIDjyBTnPqfiPpqOxsluZzMGbim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerDataFiles::*)()>(&::Rewired::Data::ControllerDataFiles::zXIDjyBTnPqfiPpqOxsluZzMGbim)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"zXIDjyBTnPqfiPpqOxsluZzMGbim", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>& Rewired::Data::ControllerDataFiles::__cordl_internal_get_defaultHardwareJoystickMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHardwareJoystickMap;
}
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> const& Rewired::Data::ControllerDataFiles::__cordl_internal_get_defaultHardwareJoystickMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultHardwareJoystickMap;
}
constexpr void Rewired::Data::ControllerDataFiles::__cordl_internal_set_defaultHardwareJoystickMap(::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultHardwareJoystickMap = value;
}
constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>& Rewired::Data::ControllerDataFiles::__cordl_internal_get_hardwareJoystickMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareJoystickMaps;
}
constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>> const& Rewired::Data::ControllerDataFiles::__cordl_internal_get_hardwareJoystickMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareJoystickMaps;
}
constexpr void Rewired::Data::ControllerDataFiles::__cordl_internal_set_hardwareJoystickMaps(::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareJoystickMaps = value;
}
constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>& Rewired::Data::ControllerDataFiles::__cordl_internal_get_joystickTemplates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTemplates;
}
constexpr ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>> const& Rewired::Data::ControllerDataFiles::__cordl_internal_get_joystickTemplates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTemplates;
}
constexpr void Rewired::Data::ControllerDataFiles::__cordl_internal_set_joystickTemplates(::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickTemplates = value;
}
constexpr bool& Rewired::Data::ControllerDataFiles::__cordl_internal_get_SqxZXpvDbsxdSVqLXvODqXCvmiyl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SqxZXpvDbsxdSVqLXvODqXCvmiyl;
}
constexpr bool const& Rewired::Data::ControllerDataFiles::__cordl_internal_get_SqxZXpvDbsxdSVqLXvODqXCvmiyl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SqxZXpvDbsxdSVqLXvODqXCvmiyl;
}
constexpr void Rewired::Data::ControllerDataFiles::__cordl_internal_set_SqxZXpvDbsxdSVqLXvODqXCvmiyl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SqxZXpvDbsxdSVqLXvODqXCvmiyl = value;
}
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>*& Rewired::Data::ControllerDataFiles::__cordl_internal_get_oigItoQGCIiUpZBOvoNtIIJygmICA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oigItoQGCIiUpZBOvoNtIIJygmICA;
}
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>* const& Rewired::Data::ControllerDataFiles::__cordl_internal_get_oigItoQGCIiUpZBOvoNtIIJygmICA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oigItoQGCIiUpZBOvoNtIIJygmICA;
}
constexpr void Rewired::Data::ControllerDataFiles::__cordl_internal_set_oigItoQGCIiUpZBOvoNtIIJygmICA(::Rewired::Utils::Classes::Data::ADictionary_2<::System::Guid,::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oigItoQGCIiUpZBOvoNtIIJygmICA = value;
}
inline ::System::Guid Rewired::Data::ControllerDataFiles::get_defaultHardwareJoystickMapGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_defaultHardwareJoystickMapGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>> Rewired::Data::ControllerDataFiles::get_JoystickTemplates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_JoystickTemplates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>>(this, ___internal_method);
}
inline void Rewired::Data::ControllerDataFiles::set_JoystickTemplates(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"set_JoystickTemplates", {}, {::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>> Rewired::Data::ControllerDataFiles::get_HardwareJoystickMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_HardwareJoystickMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>>(this, ___internal_method);
}
inline void Rewired::Data::ControllerDataFiles::set_HardwareJoystickMaps(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"set_HardwareJoystickMaps", {}, {::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> Rewired::Data::ControllerDataFiles::get_DefaultHardwareJoystickMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"get_DefaultHardwareJoystickMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>(this, ___internal_method);
}
inline void Rewired::Data::ControllerDataFiles::set_DefaultHardwareJoystickMap(::Rewired::Data::Mapping::HardwareJoystickMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"set_DefaultHardwareJoystickMap", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Data::ControllerDataFiles::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::ControllerDataFiles::GetJoystickNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::ControllerDataFiles::GetEditorJoystickNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetEditorJoystickNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::System::Guid> Rewired::Data::ControllerDataFiles::GetJoystickGuids()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickGuids", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Guid>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::ControllerDataFiles::GetJoystickTemplateNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickTemplateNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::System::Guid> Rewired::Data::ControllerDataFiles::GetJoystickTemplateGuids()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickTemplateGuids", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Guid>>(this, ___internal_method);
}
inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> Rewired::Data::ControllerDataFiles::GetHardwareJoystickMap(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetHardwareJoystickMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>>(this, ___internal_method, guid);
}
inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> Rewired::Data::ControllerDataFiles::GetJoystickTemplate(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetJoystickTemplate", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>>(this, ___internal_method, guid);
}
inline ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* Rewired::Data::ControllerDataFiles::GetControllerTemplate(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetControllerTemplate", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::IHardwareControllerTemplateMap*>(this, ___internal_method, guid);
}
inline ::Rewired::Data::Mapping::IHardwareControllerMap* Rewired::Data::ControllerDataFiles::GetHardwareJoystickOrTemplateMap(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"GetHardwareJoystickOrTemplateMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::IHardwareControllerMap*>(this, ___internal_method, guid);
}
inline ::Rewired::ControllerTemplateElementIdentifier* Rewired::Data::ControllerDataFiles::aTbzmaEqtiABFKMRXSsqDEZWpftn(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap*>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"aTbzmaEqtiABFKMRXSsqDEZWpftn", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementIdentifier*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t Rewired::Data::ControllerDataFiles::sflcEoDiTzcOQGIoAuITeHCrRMaZ(::System::Guid  _cordl_fixed_empty_name_whitespace, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj>*  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"sflcEoDiTzcOQGIoAuITeHCrRMaZ", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::HardwareJoystickMap_InputManager* Rewired::Data::ControllerDataFiles::qbJPYNSxYMoIuNQNCAgHTnjgEAsE(::System::Guid  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"qbJPYNSxYMoIuNQNCAgHTnjgEAsE", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::Rewired::InputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareJoystickMap_InputManager*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::HardwareJoystickMap_InputManager* Rewired::Data::ControllerDataFiles::kavrrpaoFifjuzIIoiRltFIdjJkiA(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"kavrrpaoFifjuzIIoiRltFIdjJkiA", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareJoystickMap_InputManager*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::HardwareJoystickMap_InputManager* Rewired::Data::ControllerDataFiles::hCCZNqEgwtoNEMyxvaOhqhxsojNL(::Rewired::Data::Mapping::HardwareJoystickMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::Rewired::InputPlatform>  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_4, ::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>  _cordl_fixed_empty_name_whitespace_param_5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"hCCZNqEgwtoNEMyxvaOhqhxsojNL", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap*>(), ::i2c::type_of<::Rewired::BridgedControllerHWInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Rewired::InputPlatform>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareJoystickMap_InputManager*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5);
}
inline ::Rewired::HardwareJoystickMap_InputManager* Rewired::Data::ControllerDataFiles::wsUOtMlGWzrNAurQAYspkRWfZoQF(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"wsUOtMlGWzrNAurQAYspkRWfZoQF", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareJoystickMap_InputManager*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::HardwareJoystickMap_InputManager* Rewired::Data::ControllerDataFiles::HFOERZekyIkrKOWqJhYAOjREbvzGb(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"HFOERZekyIkrKOWqJhYAOjREbvzGb", {}, {::i2c::type_of<::Rewired::BridgedControllerHWInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareJoystickMap_InputManager*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA* Rewired::Data::ControllerDataFiles::cnrrMZjYSARCRiBZcfxJxKzHztBA(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"cnrrMZjYSARCRiBZcfxJxKzHztBA", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* Rewired::Data::ControllerDataFiles::zmBHvcaKJldcFBiIEjDodTutkiKf(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"zmBHvcaKJldcFBiIEjDodTutkiKf", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::IHardwareControllerTemplateMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::ControllerDataFiles::zXIDjyBTnPqfiPpqOxsluZzMGbim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerDataFiles*>(),
                        {"zXIDjyBTnPqfiPpqOxsluZzMGbim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerDataFiles* Rewired::Data::ControllerDataFiles::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerDataFiles*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerDataFiles::ControllerDataFiles()   {
}
