#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerSetSelector_Editor.hpp"
#include "Rewired/zzzz__ControllerSetSelector_impl.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__ControllerSetSelector_Editor_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "Rewired/zzzz__ControllerSetSelector_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::Rewired::ControllerSetSelector_Type)>(&::Rewired::Data::ControllerSetSelector_Editor::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818a1e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818a1f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::Rewired::Data::ControllerSetSelector_Editor*)>(&::Rewired::Data::ControllerSetSelector_Editor::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818a1e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerSetSelector_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector_Type (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::Rewired::ControllerSetSelector_Type)>(&::Rewired::Data::ControllerSetSelector_Editor::set_type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_type", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::Rewired::ControllerType)>(&::Rewired::Data::ControllerSetSelector_Editor::set_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_hardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_hardwareTypeGuid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818a1fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_hardwareTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_hardwareTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::System::Guid)>(&::Rewired::Data::ControllerSetSelector_Editor::set_hardwareTypeGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818a2040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_hardwareTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_hardwareTypeGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_hardwareTypeGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_hardwareTypeGuidString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_hardwareTypeGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::StringW)>(&::Rewired::Data::ControllerSetSelector_Editor::set_hardwareTypeGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_hardwareTypeGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_hardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_hardwareIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_hardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::StringW)>(&::Rewired::Data::ControllerSetSelector_Editor::set_hardwareIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_hardwareIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_controllerTemplateTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_controllerTemplateTypeGuid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18188d3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerTemplateTypeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_controllerTemplateTypeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::System::Guid)>(&::Rewired::Data::ControllerSetSelector_Editor::set_controllerTemplateTypeGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18188d760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerTemplateTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_controllerTemplateTypeGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_controllerTemplateTypeGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerTemplateTypeGuidString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_controllerTemplateTypeGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::StringW)>(&::Rewired::Data::ControllerSetSelector_Editor::set_controllerTemplateTypeGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerTemplateTypeGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818a1f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::System::Guid)>(&::Rewired::Data::ControllerSetSelector_Editor::set_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818a2010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_deviceInstanceGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_deviceInstanceGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_deviceInstanceGuidString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_deviceInstanceGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(::StringW)>(&::Rewired::Data::ControllerSetSelector_Editor::set_deviceInstanceGuidString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_deviceInstanceGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(int32_t)>(&::Rewired::Data::ControllerSetSelector_Editor::set_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.get_customControllerSourceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::get_customControllerSourceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_customControllerSourceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.set_customControllerSourceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerSetSelector_Editor::*)(int32_t)>(&::Rewired::Data::ControllerSetSelector_Editor::set_customControllerSourceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_customControllerSourceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.CFKlvMAIVRqLbuarixdSItQprGim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerSetSelector* (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::CFKlvMAIVRqLbuarixdSItQprGim)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1818a1c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"CFKlvMAIVRqLbuarixdSItQprGim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerSetSelector_Editor.Rewired_Utils_Interfaces_IDeepCloneable_DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::ControllerSetSelector_Editor::*)()>(&::Rewired::Data::ControllerSetSelector_Editor::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818a1d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerSetSelector_Type& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::Rewired::ControllerSetSelector_Type const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__type(::Rewired::ControllerSetSelector_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::Rewired::ControllerType& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr ::Rewired::ControllerType const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__controllerType(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerType = value;
}
constexpr ::StringW& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__hardwareTypeGuidString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareTypeGuidString;
}
constexpr ::StringW const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__hardwareTypeGuidString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareTypeGuidString;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__hardwareTypeGuidString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardwareTypeGuidString = value;
}
constexpr ::StringW& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__hardwareIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareIdentifier;
}
constexpr ::StringW const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__hardwareIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareIdentifier;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__hardwareIdentifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardwareIdentifier = value;
}
constexpr ::StringW& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__controllerTemplateTypeGuidString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerTemplateTypeGuidString;
}
constexpr ::StringW const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__controllerTemplateTypeGuidString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerTemplateTypeGuidString;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__controllerTemplateTypeGuidString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerTemplateTypeGuidString = value;
}
constexpr ::StringW& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__deviceInstanceGuidString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceInstanceGuidString;
}
constexpr ::StringW const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__deviceInstanceGuidString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceInstanceGuidString;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__deviceInstanceGuidString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deviceInstanceGuidString = value;
}
constexpr int32_t& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__customControllerSourceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customControllerSourceId;
}
constexpr int32_t const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__customControllerSourceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customControllerSourceId;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__customControllerSourceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customControllerSourceId = value;
}
constexpr int32_t& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__controllerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerId;
}
constexpr int32_t const& Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_get__controllerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerId;
}
constexpr void Rewired::Data::ControllerSetSelector_Editor::__cordl_internal_set__controllerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerId = value;
}
inline void Rewired::Data::ControllerSetSelector_Editor::_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::ControllerSetSelector_Editor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::_ctor(::Rewired::Data::ControllerSetSelector_Editor*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerSetSelector_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerSetSelector_Type Rewired::Data::ControllerSetSelector_Editor::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector_Type>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_type(::Rewired::ControllerSetSelector_Type  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_type", {}, {::i2c::type_of<::Rewired::ControllerSetSelector_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerType Rewired::Data::ControllerSetSelector_Editor::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_controllerType(::Rewired::ControllerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerType", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::Data::ControllerSetSelector_Editor::get_hardwareTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_hardwareTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_hardwareTypeGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_hardwareTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::ControllerSetSelector_Editor::get_hardwareTypeGuidString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_hardwareTypeGuidString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_hardwareTypeGuidString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_hardwareTypeGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::ControllerSetSelector_Editor::get_hardwareIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_hardwareIdentifier(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_hardwareIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::Data::ControllerSetSelector_Editor::get_controllerTemplateTypeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerTemplateTypeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_controllerTemplateTypeGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerTemplateTypeGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::ControllerSetSelector_Editor::get_controllerTemplateTypeGuidString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerTemplateTypeGuidString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_controllerTemplateTypeGuidString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerTemplateTypeGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::Data::ControllerSetSelector_Editor::get_deviceInstanceGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_deviceInstanceGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::ControllerSetSelector_Editor::get_deviceInstanceGuidString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_deviceInstanceGuidString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_deviceInstanceGuidString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_deviceInstanceGuidString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Data::ControllerSetSelector_Editor::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_controllerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_controllerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Data::ControllerSetSelector_Editor::get_customControllerSourceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"get_customControllerSourceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::ControllerSetSelector_Editor::set_customControllerSourceId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"set_customControllerSourceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerSetSelector* Rewired::Data::ControllerSetSelector_Editor::CFKlvMAIVRqLbuarixdSItQprGim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"CFKlvMAIVRqLbuarixdSItQprGim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerSetSelector*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::ControllerSetSelector_Editor::Rewired_Utils_Interfaces_IDeepCloneable_DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerSetSelector_Editor*>(),
                        {"Rewired.Utils.Interfaces.IDeepCloneable.DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerSetSelector_Editor* Rewired::Data::ControllerSetSelector_Editor::New_ctor(::Rewired::ControllerSetSelector_Type  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerSetSelector_Editor*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::Data::ControllerSetSelector_Editor* Rewired::Data::ControllerSetSelector_Editor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerSetSelector_Editor*>());
}
inline ::Rewired::Data::ControllerSetSelector_Editor* Rewired::Data::ControllerSetSelector_Editor::New_ctor(::Rewired::Data::ControllerSetSelector_Editor*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerSetSelector_Editor*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr  Rewired::Data::ControllerSetSelector_Editor::operator ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* Rewired::Data::ControllerSetSelector_Editor::i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerSetSelector_Editor::ControllerSetSelector_Editor()   {
}
