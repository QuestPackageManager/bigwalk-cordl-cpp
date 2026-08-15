#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareJoystickTemplateMap.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareControllerTemplateMap_impl.hpp"
#include "Rewired/Data/zzzz__ControllerTemplateElementIdentifier_Editor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickTemplateMap_def.hpp"
#include "GlobalNamespace/zzzz__TcdPIZMIwGFYJfZZOMhQGedCCqvbA_def.hpp"
#include "GlobalNamespace/zzzz__smFerTUgMidkgqEycQsjiJLyrhyp_def.hpp"
#include "Rewired/Data/Mapping/zzzz__ControllerMap_Editor_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickTemplateMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__IControllerTemplateMapSpecialElement_Internal_def.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerMap_Internal_def.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerTemplateMap_Internal_def.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerTemplateMap_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerElementIdentifierCommon_Internal_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerTemplateElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::*)(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818d08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry.get_JoystickGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::get_JoystickGuid)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818d0a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"get_JoystickGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry.GetJoystickElementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetJoystickElementId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d07d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetJoystickElementId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry.GetTemplateElementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetTemplateElementId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d0860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetTemplateElementId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry.GetElementIdentifierMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetElementIdentifierMap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d0690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetElementIdentifierMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry.GetElementIdentifierMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::*)(int32_t, ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetElementIdentifierMaps)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818d0720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetElementIdentifierMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_joystickGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickGuid;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_joystickGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickGuid;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_set_joystickGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickGuid = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_fileGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileGuid;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_fileGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileGuid;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_set_fileGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileGuid = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_elementIdentifierMappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierMappings;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>* const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_get_elementIdentifierMappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierMappings;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::__cordl_internal_set_elementIdentifierMappings(::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifierMappings = value;
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Guid Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::get_JoystickGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"get_JoystickGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetJoystickElementId(int32_t  templateElementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetJoystickElementId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, templateElementId);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetTemplateElementId(int32_t  joystickElementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetTemplateElementId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, joystickElementId);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetElementIdentifierMap(int32_t  templateId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetElementIdentifierMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>(this, ___internal_method, templateId);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::GetElementIdentifierMaps(int32_t  templateId, ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(),
                        {"GetElementIdentifierMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, templateId, results);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>());
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::New_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry::HardwareJoystickTemplateMap_Entry()   {
}
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::*)(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818d03b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_templateId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateId;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_templateId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateId;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_set_templateId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateId = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_joystickId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickId;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_joystickId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickId;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_set_joystickId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickId = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_joystickId2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickId2;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_joystickId2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickId2;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_set_joystickId2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickId2 = value;
}
constexpr bool& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_splitAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAxis;
}
constexpr bool const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_get_splitAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAxis;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::__cordl_internal_set_splitAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitAxis = value;
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>());
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::New_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap::HardwareJoystickTemplateMap_ElementIdentifierMap()   {
}
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::*)(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::__cordl_internal_get_elementIdentifierId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierId;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::__cordl_internal_get_elementIdentifierId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierId;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::__cordl_internal_set_elementIdentifierId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifierId = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::__cordl_internal_set_data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T>
inline T Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::Rewired_Data_Mapping_IControllerTemplateMapSpecialElement_Internal_GetMapping()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>(),
                    {"Rewired.Data.Mapping.IControllerTemplateMapSpecialElement_Internal.GetMapping", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry* Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>());
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry* Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::New_ctor(::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::operator ::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*() noexcept {
return static_cast<::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal"
constexpr ::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::i___Rewired__Data__Mapping__IControllerTemplateMapSpecialElement_Internal() noexcept {
return static_cast<::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry::HardwareJoystickTemplateMap_SpecialElementEntry()   {
}
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR.System_Collections_Generic_IEnumerator_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_Generic_IEnumerator_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.Interfaces.IControllerElementIdentifierCommon_Internal>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR.System_Collections_Generic_IEnumerable_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_Generic_IEnumerable_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818d6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.Interfaces.IControllerElementIdentifierCommon_Internal>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818d6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_ueUxXYcsYQDliDCThopuefdDhaTq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ueUxXYcsYQDliDCThopuefdDhaTq;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_ueUxXYcsYQDliDCThopuefdDhaTq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ueUxXYcsYQDliDCThopuefdDhaTq;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_set_ueUxXYcsYQDliDCThopuefdDhaTq(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ueUxXYcsYQDliDCThopuefdDhaTq = value;
}
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_MbSBYwnlZsPEvcdlnjyVfHLypjnO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MbSBYwnlZsPEvcdlnjyVfHLypjnO;
}
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_MbSBYwnlZsPEvcdlnjyVfHLypjnO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MbSBYwnlZsPEvcdlnjyVfHLypjnO;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_set_MbSBYwnlZsPEvcdlnjyVfHLypjnO(::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MbSBYwnlZsPEvcdlnjyVfHLypjnO = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_ogQyicDdABIOThTUOtCkXUOzkJQU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ogQyicDdABIOThTUOtCkXUOzkJQU;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_ogQyicDdABIOThTUOtCkXUOzkJQU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ogQyicDdABIOThTUOtCkXUOzkJQU;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_set_ogQyicDdABIOThTUOtCkXUOzkJQU(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ogQyicDdABIOThTUOtCkXUOzkJQU = value;
}
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_IxbEfYGPGpeqDXOkYZXnIBMBHciJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IxbEfYGPGpeqDXOkYZXnIBMBHciJ;
}
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_IxbEfYGPGpeqDXOkYZXnIBMBHciJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IxbEfYGPGpeqDXOkYZXnIBMBHciJ;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_set_IxbEfYGPGpeqDXOkYZXnIBMBHciJ(::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IxbEfYGPGpeqDXOkYZXnIBMBHciJ = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_NAbqNkwrYyYULFbEQVkSyhUhQgdH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NAbqNkwrYyYULFbEQVkSyhUhQgdH;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_get_NAbqNkwrYyYULFbEQVkSyhUhQgdH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NAbqNkwrYyYULFbEQVkSyhUhQgdH;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::__cordl_internal_set_NAbqNkwrYyYULFbEQVkSyhUhQgdH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NAbqNkwrYyYULFbEQVkSyhUhQgdH = value;
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_Generic_IEnumerator_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.Interfaces.IControllerElementIdentifierCommon_Internal>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_Generic_IEnumerable_Rewired_Interfaces_IControllerElementIdentifierCommon_Internal__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.Interfaces.IControllerElementIdentifierCommon_Internal>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::i___System__Collections__Generic__IEnumerable_1___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::i___System__Collections__Generic__IEnumerator_1___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR::HardwareJoystickTemplateMap_jWlQtbffEjdinvHWbxMWenpKSmVR()   {
}
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA.System_Collections_Generic_IEnumerator_Rewired_ControllerTemplateElementIdentifier__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementIdentifier* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_Generic_IEnumerator_Rewired_ControllerTemplateElementIdentifier__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerTemplateElementIdentifier>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA.System_Collections_Generic_IEnumerable_Rewired_ControllerTemplateElementIdentifier__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_Generic_IEnumerable_Rewired_ControllerTemplateElementIdentifier__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818d5740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerTemplateElementIdentifier>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818d5740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_UDuhWqfXXcBQjqPdIcssWLHaEgefA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UDuhWqfXXcBQjqPdIcssWLHaEgefA;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_UDuhWqfXXcBQjqPdIcssWLHaEgefA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UDuhWqfXXcBQjqPdIcssWLHaEgefA;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_set_UDuhWqfXXcBQjqPdIcssWLHaEgefA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UDuhWqfXXcBQjqPdIcssWLHaEgefA = value;
}
constexpr ::Rewired::ControllerTemplateElementIdentifier*& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_JzStZrDzenZRJRfHpurrFHgiyciC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JzStZrDzenZRJRfHpurrFHgiyciC;
}
constexpr ::Rewired::ControllerTemplateElementIdentifier* const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_JzStZrDzenZRJRfHpurrFHgiyciC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JzStZrDzenZRJRfHpurrFHgiyciC;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_set_JzStZrDzenZRJRfHpurrFHgiyciC(::Rewired::ControllerTemplateElementIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JzStZrDzenZRJRfHpurrFHgiyciC = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_EJMGfibUDiYawHRgqXHUFPQPDLT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EJMGfibUDiYawHRgqXHUFPQPDLT;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_EJMGfibUDiYawHRgqXHUFPQPDLT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EJMGfibUDiYawHRgqXHUFPQPDLT;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_set_EJMGfibUDiYawHRgqXHUFPQPDLT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EJMGfibUDiYawHRgqXHUFPQPDLT = value;
}
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_RoOkNbJphflwjzlvxcgMVFVEpfOr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoOkNbJphflwjzlvxcgMVFVEpfOr;
}
constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_RoOkNbJphflwjzlvxcgMVFVEpfOr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoOkNbJphflwjzlvxcgMVFVEpfOr;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_set_RoOkNbJphflwjzlvxcgMVFVEpfOr(::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoOkNbJphflwjzlvxcgMVFVEpfOr = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_HicvGIcWCvEhMewBvDgRCODpGWCd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HicvGIcWCvEhMewBvDgRCODpGWCd;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_get_HicvGIcWCvEhMewBvDgRCODpGWCd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HicvGIcWCvEhMewBvDgRCODpGWCd;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::__cordl_internal_set_HicvGIcWCvEhMewBvDgRCODpGWCd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HicvGIcWCvEhMewBvDgRCODpGWCd = value;
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateElementIdentifier* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_Generic_IEnumerator_Rewired_ControllerTemplateElementIdentifier__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerTemplateElementIdentifier>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementIdentifier*>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_Generic_IEnumerable_Rewired_ControllerTemplateElementIdentifier__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerTemplateElementIdentifier>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerTemplateElementIdentifier__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerTemplateElementIdentifier__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerTemplateElementIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA::HardwareJoystickTemplateMap_RpnblzeGtMojzbxcsttNKsljzyUEA()   {
}
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.get_Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_Guid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18188d3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.get_ControllerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_ControllerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_ControllerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.get_ClassName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_ClassName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_ClassName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.get_ElementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_ElementIdentifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818d1fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_ElementIdentifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.get_elementIdentifierCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_elementIdentifierCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18188d390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_elementIdentifierCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818d1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_typeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_typeKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementIdentifier* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818d1220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetElementIdentifierAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementIdentifier* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierAtIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.ContainsElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::ContainsElementIdentifier)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818d0d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetElementIdentifierNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierNames)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818d1060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetElementIdentifierIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierIds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d0fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetElementIdentifierScriptingNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(bool)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierScriptingNames)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818d1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierScriptingNames", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetMappableElementIdentifierInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<int32_t>>)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetMappableElementIdentifierInfo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1818d14e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetMappableElementIdentifierInfo", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetNonMappableElementIdentifierInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<int32_t>>)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetNonMappableElementIdentifierInfo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1818d16d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetNonMappableElementIdentifierInfo", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetJoystickNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickNames)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18188c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetJoystickIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickIds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18188bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetJoystickGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickGuid)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818d1300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickGuid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetJoystickId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(::System::Guid)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickId)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818d13c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetJoystickFileGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickFileGuidString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818d1280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickFileGuidString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.GetSpecialElementsOrig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*> (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetSpecialElementsOrig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetSpecialElementsOrig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.zRfuwajAoMvzCJBOlGVOXPtQUCJk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(::Rewired::Data::Mapping::ControllerMap_Editor*, ::Rewired::Data::Mapping::HardwareJoystickMap*, ::System::Guid, ::by_ref<::StringW>)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::zRfuwajAoMvzCJBOlGVOXPtQUCJk)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x1818d2150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"zRfuwajAoMvzCJBOlGVOXPtQUCJk", {}, {::i2c::type_of<::Rewired::Data::Mapping::ControllerMap_Editor*>(), ::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap*>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.DioTOORdsHMFGxscxpRgeIipVtVk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::DioTOORdsHMFGxscxpRgeIipVtVk)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1818d0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"DioTOORdsHMFGxscxpRgeIipVtVk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.wGAySeXojRqJTslxSAqkKRdcXFWsA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(::System::Guid)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::wGAySeXojRqJTslxSAqkKRdcXFWsA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818d2080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"wGAySeXojRqJTslxSAqkKRdcXFWsA", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818d18c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_ElementIdentifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerMap_Internal_GetElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_GetElementIdentifier)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818b16a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.GetElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeGuid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818d1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_typeGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_typeKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetElementIdentifierCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetElementIdentifierCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18188d390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetElementIdentifierCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifier)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818d1ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetTemplateElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifierById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifierById)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818b16a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetTemplateElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetSpecialTemplateElementByElementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetSpecialTemplateElementByElementIdentifierId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818d1a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetSpecialTemplateElementByElementIdentifierId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetAxisTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(::Rewired::Controller*, int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetAxisTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d1940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetAxisTarget", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetButtonTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)(::Rewired::Controller*, int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetButtonTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d19d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetButtonTarget", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.SofZmvsxvbEqzAtEgtNhsLvzfHTeA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>* (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::SofZmvsxvbEqzAtEgtNhsLvzfHTeA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818d1ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"SofZmvsxvbEqzAtEgtNhsLvzfHTeA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.WypJiWkaqWhTzXLBglKnZSonXAfE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* (*)(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*, ::Rewired::Controller*, int32_t, ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::WypJiWkaqWhTzXLBglKnZSonXAfE)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1818d1b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"WypJiWkaqWhTzXLBglKnZSonXAfE", {}, {::i2c::type_of<::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.fPuUVKzCnYhNNZWtkZWvqrcHOghU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* (*)(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*, ::Rewired::Controller*, int32_t, ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::fPuUVKzCnYhNNZWtkZWvqrcHOghU)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1818d1e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"fPuUVKzCnYhNNZWtkZWvqrcHOghU", {}, {::i2c::type_of<::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.fKZZwXdvABkRiYuLUBNGCkltcIal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementIdentifier* (*)(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>, int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::fKZZwXdvABkRiYuLUBNGCkltcIal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818d1dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"fKZZwXdvABkRiYuLUBNGCkltcIal", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.ECgcWRmrEuRoiiDFlXngQOwGvzlR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>, int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::ECgcWRmrEuRoiiDFlXngQOwGvzlR)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818d0f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"ECgcWRmrEuRoiiDFlXngQOwGvzlR", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.pWNgkCMijglXRRZUJAqwuxyqPTAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>, int32_t)>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::pWNgkCMijglXRRZUJAqwuxyqPTAt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818d2030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"pWNgkCMijglXRRZUJAqwuxyqPTAt", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d1d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareJoystickTemplateMap.Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::HardwareJoystickTemplateMap::*)()>(&::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f5370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_controllerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerName;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_controllerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerName;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_controllerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerName = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___description = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_templateGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateGuid;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_templateGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateGuid;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_templateGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateGuid = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_templateKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateKey;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_templateKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateKey;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_templateKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateKey = value;
}
constexpr ::StringW& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_className()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___className;
}
constexpr ::StringW const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_className() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___className;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_className(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___className = value;
}
constexpr ::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_elementIdentifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers;
}
constexpr ::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*> const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_elementIdentifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_elementIdentifiers(::ArrayW<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifiers = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_joysticks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joysticks;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>* const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_joysticks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joysticks;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_joysticks(::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joysticks = value;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_specialElements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialElements;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*> const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_specialElements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialElements;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_specialElements(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specialElements = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_elementIdentifierIdCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierIdCounter;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_elementIdentifierIdCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifierIdCounter;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_elementIdentifierIdCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifierIdCounter = value;
}
constexpr int32_t& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_joystickIdCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickIdCounter;
}
constexpr int32_t const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_joystickIdCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickIdCounter;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_joystickIdCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickIdCounter = value;
}
constexpr ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_CwddgzEsulKrUmuJbKlZJkeEQQBwA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CwddgzEsulKrUmuJbKlZJkeEQQBwA;
}
constexpr ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>* const& Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_get_CwddgzEsulKrUmuJbKlZJkeEQQBwA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CwddgzEsulKrUmuJbKlZJkeEQQBwA;
}
constexpr void Rewired::Data::Mapping::HardwareJoystickTemplateMap::__cordl_internal_set_CwddgzEsulKrUmuJbKlZJkeEQQBwA(::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CwddgzEsulKrUmuJbKlZJkeEQQBwA = value;
}
inline ::System::Guid Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_Guid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_ControllerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_ControllerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_ClassName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_ClassName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_ElementIdentifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_ElementIdentifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerTemplateElementIdentifier*>*>(this, ___internal_method);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap::get_elementIdentifierCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"get_elementIdentifierCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Guid Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_typeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_typeKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_typeKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateElementIdentifier* Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifier(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementIdentifier*>(this, ___internal_method, id);
}
inline ::Rewired::ControllerTemplateElementIdentifier* Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierAtIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementIdentifier*>(this, ___internal_method, index);
}
inline bool Rewired::Data::Mapping::HardwareJoystickTemplateMap::ContainsElementIdentifier(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::ArrayW<::StringW> Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetElementIdentifierScriptingNames(bool  useAlternate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetElementIdentifierScriptingNames", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, useAlternate);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetMappableElementIdentifierInfo(::by_ref<::ArrayW<::StringW>>  names, ::by_ref<::ArrayW<int32_t>>  ids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetMappableElementIdentifierInfo", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, names, ids);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetNonMappableElementIdentifierInfo(::by_ref<::ArrayW<::StringW>>  names, ::by_ref<::ArrayW<int32_t>>  ids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetNonMappableElementIdentifierInfo", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, names, ids);
}
inline ::ArrayW<::StringW> Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::System::Guid Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickGuid(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickGuid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method, joystickId);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickId(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, guid);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetJoystickFileGuidString(int32_t  joystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetJoystickFileGuidString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, joystickId);
}
inline ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*> Rewired::Data::Mapping::HardwareJoystickTemplateMap::GetSpecialElementsOrig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"GetSpecialElementsOrig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_SpecialElementEntry*>>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::HardwareJoystickTemplateMap::zRfuwajAoMvzCJBOlGVOXPtQUCJk(::Rewired::Data::Mapping::ControllerMap_Editor*  _cordl_fixed_empty_name_whitespace, ::Rewired::Data::Mapping::HardwareJoystickMap*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"zRfuwajAoMvzCJBOlGVOXPtQUCJk", {}, {::i2c::type_of<::Rewired::Data::Mapping::ControllerMap_Editor*>(), ::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap*>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA* Rewired::Data::Mapping::HardwareJoystickTemplateMap::DioTOORdsHMFGxscxpRgeIipVtVk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"DioTOORdsHMFGxscxpRgeIipVtVk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry* Rewired::Data::Mapping::HardwareJoystickTemplateMap::wGAySeXojRqJTslxSAqkKRdcXFWsA(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"wGAySeXojRqJTslxSAqkKRdcXFWsA", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_ElementIdentifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_GetElementIdentifier(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.GetElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(this, ___internal_method, id);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Guid Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_typeGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_get_typeKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.get_typeKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetElementIdentifierCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetElementIdentifierCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifier(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetTemplateElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(this, ___internal_method, index);
}
inline ::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetTemplateElementIdentifierById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetTemplateElementIdentifierById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(this, ___internal_method, elementIdentifierId);
}
inline ::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetSpecialTemplateElementByElementIdentifierId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetSpecialTemplateElementByElementIdentifierId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal*>(this, ___internal_method, id);
}
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetAxisTarget(::Rewired::Controller*  controller, int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetAxisTarget", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp*>(this, ___internal_method, controller, elementIdentifierId);
}
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerTemplateMap_Internal_GetButtonTarget(::Rewired::Controller*  controller, int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal.GetButtonTarget", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp*>(this, ___internal_method, controller, elementIdentifierId);
}
inline ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>* Rewired::Data::Mapping::HardwareJoystickTemplateMap::SofZmvsxvbEqzAtEgtNhsLvzfHTeA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"SofZmvsxvbEqzAtEgtNhsLvzfHTeA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* Rewired::Data::Mapping::HardwareJoystickTemplateMap::WypJiWkaqWhTzXLBglKnZSonXAfE(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*  _cordl_fixed_empty_name_whitespace, ::Rewired::Controller*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"WypJiWkaqWhTzXLBglKnZSonXAfE", {}, {::i2c::type_of<::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp* Rewired::Data::Mapping::HardwareJoystickTemplateMap::fPuUVKzCnYhNNZWtkZWvqrcHOghU(::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*  _cordl_fixed_empty_name_whitespace, ::Rewired::Controller*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"fPuUVKzCnYhNNZWtkZWvqrcHOghU", {}, {::i2c::type_of<::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::System::Guid,::Rewired::Data::Mapping::HardwareJoystickTemplateMap_Entry*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::smFerTUgMidkgqEycQsjiJLyrhyp*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::ControllerTemplateElementIdentifier* Rewired::Data::Mapping::HardwareJoystickTemplateMap::fKZZwXdvABkRiYuLUBNGCkltcIal(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"fKZZwXdvABkRiYuLUBNGCkltcIal", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementIdentifier*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::Data::Mapping::HardwareJoystickTemplateMap::ECgcWRmrEuRoiiDFlXngQOwGvzlR(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"ECgcWRmrEuRoiiDFlXngQOwGvzlR", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::Data::Mapping::HardwareJoystickTemplateMap::pWNgkCMijglXRRZUJAqwuxyqPTAt(::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"pWNgkCMijglXRRZUJAqwuxyqPTAt", {}, {::i2c::type_of<::ArrayW<::Rewired::ControllerTemplateElementIdentifier*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Data::Mapping::HardwareJoystickTemplateMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::HardwareJoystickTemplateMap::Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>(),
                        {"Rewired.Data.Mapping.IHardwareControllerMap_Internal.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareJoystickTemplateMap* Rewired::Data::Mapping::HardwareJoystickTemplateMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>());
}
/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap::operator ::Rewired::Data::Mapping::IHardwareControllerTemplateMap*() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerTemplateMap*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap"
constexpr ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* Rewired::Data::Mapping::HardwareJoystickTemplateMap::i___Rewired__Data__Mapping__IHardwareControllerTemplateMap() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerTemplateMap*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap::operator ::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal"
constexpr ::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal* Rewired::Data::Mapping::HardwareJoystickTemplateMap::i___Rewired__Data__Mapping__IHardwareControllerTemplateMap_Internal() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerMap"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap::operator ::Rewired::Data::Mapping::IHardwareControllerMap*() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerMap*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerMap"
constexpr ::Rewired::Data::Mapping::IHardwareControllerMap* Rewired::Data::Mapping::HardwareJoystickTemplateMap::i___Rewired__Data__Mapping__IHardwareControllerMap() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerMap*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Data::Mapping::IHardwareControllerMap_Internal"
constexpr  Rewired::Data::Mapping::HardwareJoystickTemplateMap::operator ::Rewired::Data::Mapping::IHardwareControllerMap_Internal*() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::Mapping::IHardwareControllerMap_Internal"
constexpr ::Rewired::Data::Mapping::IHardwareControllerMap_Internal* Rewired::Data::Mapping::HardwareJoystickTemplateMap::i___Rewired__Data__Mapping__IHardwareControllerMap_Internal() noexcept {
return static_cast<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareJoystickTemplateMap::HardwareJoystickTemplateMap()   {
}
