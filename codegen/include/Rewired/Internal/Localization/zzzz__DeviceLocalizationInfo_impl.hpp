#pragma once
// IWYU pragma private; include "Rewired/Internal/Localization/DeviceLocalizationInfo.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__Bytes20_impl.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Internal/Localization/zzzz__DeviceLocalizationInfo_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__Bytes20_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ReadOnlyList_1_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.get_parentKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>* (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::get_parentKeys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_parentKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.get_controllerTemplateGuids
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>* (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::get_controllerTemplateGuids)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_controllerTemplateGuids", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.get_additionalIdentifyingInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::get_additionalIdentifyingInformation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_additionalIdentifyingInformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.set_additionalIdentifyingInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)(::StringW)>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::set_additionalIdentifyingInformation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f14d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"set_additionalIdentifyingInformation", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.get_hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Bytes20 (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::get_hash)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f1470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_hash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f1310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)(::Rewired::ControllerType, bool, ::System::Guid, ::System::Collections::Generic::IList_1<::StringW>*, ::System::Collections::Generic::IList_1<::System::Guid>*)>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818f1390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)(::Rewired::Internal::Localization::DeviceLocalizationInfo*)>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818f11e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.InsertParentKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)(int32_t, ::StringW)>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::InsertParentKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818f1160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"InsertParentKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.FinishRuntimeSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::FinishRuntimeSetup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f1130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"FinishRuntimeSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.ComputeHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::Bytes20 (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::ComputeHash)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1818f0cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"ComputeHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.hlVgYYVKzFQRmIFcvkBxeihQBMHZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::hlVgYYVKzFQRmIFcvkBxeihQBMHZ)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f1490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"hlVgYYVKzFQRmIFcvkBxeihQBMHZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.rYIjJAPklfGbOmlAmCHgGGGjRWIN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::Localization::DeviceLocalizationInfo::*)()>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::rYIjJAPklfGbOmlAmCHgGGGjRWIN)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f14a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"rYIjJAPklfGbOmlAmCHgGGGjRWIN", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::Localization::DeviceLocalizationInfo.DataMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::Rewired::Internal::Localization::DeviceLocalizationInfo*)>(&::Rewired::Internal::Localization::DeviceLocalizationInfo::DataMatches)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1818f0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"DataMatches", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr ::System::Guid const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_guid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guid = value;
}
constexpr ::Rewired::ControllerType& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerType;
}
constexpr ::Rewired::ControllerType const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerType;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_controllerType(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerType = value;
}
constexpr bool& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_isControllerTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isControllerTemplate;
}
constexpr bool const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_isControllerTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isControllerTemplate;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_isControllerTemplate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isControllerTemplate = value;
}
constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_pLreiWwtdkJoDnpyYbEwxmGEtBxi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pLreiWwtdkJoDnpyYbEwxmGEtBxi;
}
constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>* const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_pLreiWwtdkJoDnpyYbEwxmGEtBxi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pLreiWwtdkJoDnpyYbEwxmGEtBxi;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_pLreiWwtdkJoDnpyYbEwxmGEtBxi(::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pLreiWwtdkJoDnpyYbEwxmGEtBxi = value;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>*& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_ZZfgOWkuMRlkkbpRXDHSVynCqFNo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZZfgOWkuMRlkkbpRXDHSVynCqFNo;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>* const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_ZZfgOWkuMRlkkbpRXDHSVynCqFNo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZZfgOWkuMRlkkbpRXDHSVynCqFNo;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_ZZfgOWkuMRlkkbpRXDHSVynCqFNo(::System::Collections::Generic::IList_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZZfgOWkuMRlkkbpRXDHSVynCqFNo = value;
}
constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_hDJXCuoeTEcXFQgauNHlObOuzeUR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hDJXCuoeTEcXFQgauNHlObOuzeUR;
}
constexpr ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>* const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_hDJXCuoeTEcXFQgauNHlObOuzeUR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hDJXCuoeTEcXFQgauNHlObOuzeUR;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_hDJXCuoeTEcXFQgauNHlObOuzeUR(::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hDJXCuoeTEcXFQgauNHlObOuzeUR = value;
}
constexpr ::StringW& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_bElXhQjbMCNIwNkacdhgSpzZsQlw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bElXhQjbMCNIwNkacdhgSpzZsQlw;
}
constexpr ::StringW const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_bElXhQjbMCNIwNkacdhgSpzZsQlw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bElXhQjbMCNIwNkacdhgSpzZsQlw;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_bElXhQjbMCNIwNkacdhgSpzZsQlw(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bElXhQjbMCNIwNkacdhgSpzZsQlw = value;
}
constexpr ::Rewired::Utils::Classes::Data::Bytes20& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_mVJijGxtEaiABRxkPEnwLYAsNQtv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mVJijGxtEaiABRxkPEnwLYAsNQtv;
}
constexpr ::Rewired::Utils::Classes::Data::Bytes20 const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_mVJijGxtEaiABRxkPEnwLYAsNQtv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mVJijGxtEaiABRxkPEnwLYAsNQtv;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_mVJijGxtEaiABRxkPEnwLYAsNQtv(::Rewired::Utils::Classes::Data::Bytes20  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mVJijGxtEaiABRxkPEnwLYAsNQtv = value;
}
constexpr bool& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_laIqNQKUeubrkASDBBflTCxnYQcf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laIqNQKUeubrkASDBBflTCxnYQcf;
}
constexpr bool const& Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_get_laIqNQKUeubrkASDBBflTCxnYQcf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laIqNQKUeubrkASDBBflTCxnYQcf;
}
constexpr void Rewired::Internal::Localization::DeviceLocalizationInfo::__cordl_internal_set_laIqNQKUeubrkASDBBflTCxnYQcf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laIqNQKUeubrkASDBBflTCxnYQcf = value;
}
inline ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>* Rewired::Internal::Localization::DeviceLocalizationInfo::get_parentKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_parentKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>* Rewired::Internal::Localization::DeviceLocalizationInfo::get_controllerTemplateGuids()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_controllerTemplateGuids", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ReadOnlyList_1<::System::Guid>*>(this, ___internal_method);
}
inline ::StringW Rewired::Internal::Localization::DeviceLocalizationInfo::get_additionalIdentifyingInformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_additionalIdentifyingInformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::set_additionalIdentifyingInformation(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"set_additionalIdentifyingInformation", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Utils::Classes::Data::Bytes20 Rewired::Internal::Localization::DeviceLocalizationInfo::get_hash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"get_hash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Bytes20>(this, ___internal_method);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::_ctor(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::StringW>*  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::IList_1<::System::Guid>*  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::_ctor(::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::InsertParentKey(int32_t  index, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"InsertParentKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, key);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::FinishRuntimeSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"FinishRuntimeSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::Bytes20 Rewired::Internal::Localization::DeviceLocalizationInfo::ComputeHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"ComputeHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::Bytes20>(this, ___internal_method);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::hlVgYYVKzFQRmIFcvkBxeihQBMHZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"hlVgYYVKzFQRmIFcvkBxeihQBMHZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::Localization::DeviceLocalizationInfo::rYIjJAPklfGbOmlAmCHgGGGjRWIN()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"rYIjJAPklfGbOmlAmCHgGGGjRWIN", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Internal::Localization::DeviceLocalizationInfo::DataMatches(::Rewired::Internal::Localization::DeviceLocalizationInfo*  a, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(),
                        {"DataMatches", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* Rewired::Internal::Localization::DeviceLocalizationInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::Localization::DeviceLocalizationInfo*>());
}
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* Rewired::Internal::Localization::DeviceLocalizationInfo::New_ctor(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::StringW>*  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::IList_1<::System::Guid>*  _cordl_fixed_empty_name_whitespace_param_4)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4));
}
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* Rewired::Internal::Localization::DeviceLocalizationInfo::New_ctor(::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo::DeviceLocalizationInfo()   {
}
